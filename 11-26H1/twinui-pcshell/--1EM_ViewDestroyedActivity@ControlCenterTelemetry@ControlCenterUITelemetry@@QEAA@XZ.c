/*
 * XREFs of ??1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802C48CC
 * Callers:
 *     _CControlCenterExperienceManager::OnViewDestroyed_::_1_::dtor$0 @ 0x1806D4965 (_CControlCenterExperienceManager--OnViewDestroyed_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114930 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::~EM_ViewDestroyedActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
