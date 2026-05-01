/*
 * XREFs of ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180020F84
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C58C (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::__lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x1806816F8 (_lambda_b77313e954014d84b78f3886c1783ac6_--__lambda_b77313e954014d84b78f3886c1783ac6_.c)
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$1 @ 0x1806CCDB6 (_CSingleViewShellExperience--Launch_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180021208 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::~Launch(SingleViewExperienceTelemetry::Launch *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
