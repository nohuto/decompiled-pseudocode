/*
 * XREFs of ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802CDA1C
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180013B48 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     _CSingleViewShellExperience::OnViewDestroyedBase_::_1_::dtor$0 @ 0x1806A4D42 (_CSingleViewShellExperience--OnViewDestroyedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001AE78 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewDestroyedBase::~OnViewDestroyedBase(
        SingleViewExperienceTelemetry::OnViewDestroyedBase *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnViewDestroyedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
