#include<bits/stdc++.h>
using namespace std;
int main() {
	int airport,crh,subway,fivet,cr,crys=0;
	double xinfu,gdp,pep,youke;
	cout<<"幸福感 GDP 人口 机场 地铁 CR 游客 五件套乘积";
	cin>>xinfu>>gdp>>pep>>airport>>subway>>crh>>youke>>fivet;
	xinfu=xinfu*(1+0.1*subway+0.5*airport+0.125*crh)+0.0001*fivet;
	gdp=gdp*(1+0.1*xinfu+0.25*pep)+youke*500*0.0001;
	pep=pep*(1+0.05)+gdp*0.6;
	crys=crys+subway/5+airport+crh;
	cr=gdp/1-crys;
	printf ("%.8lf ",xinfu);cout<<endl;
	printf ("%.8lf ",gdp);cout<<endl;
	printf ("%.4lf ",pep);cout<<endl;
	cout<<"zeng"<<cr;
	
	return 0;
}
