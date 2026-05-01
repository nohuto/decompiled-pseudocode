/*
 * XREFs of ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802C4E20
 * Callers:
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180024180 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     _CSingleViewShellExperience::OnViewDestroyedBase_::_1_::dtor$0 @ 0x1806CCF90 (_CSingleViewShellExperience--OnViewDestroyedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180021208 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflec.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnViewDestroyedBase::~OnViewDestroyedBase(
        SingleViewExperienceTelemetry::OnViewDestroyedBase *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnViewDestroyedBase::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
