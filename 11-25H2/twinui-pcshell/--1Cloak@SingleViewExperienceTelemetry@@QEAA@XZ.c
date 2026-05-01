/*
 * XREFs of ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180238D2C
 * Callers:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180011DC4 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Cloak_::_1_::dtor$0 @ 0x1806A4BC6 (_CSingleViewShellExperience--Cloak_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001AE78 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::Cloak::~Cloak(SingleViewExperienceTelemetry::Cloak *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Cloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
