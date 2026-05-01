/*
 * XREFs of ??1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802C4B8C
 * Callers:
 *     ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x18036DD50 (-RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     _CControlCenterExperienceManager::RaiseStartAnimationEvent_::_1_::dtor$0 @ 0x1806E680A (_CControlCenterExperienceManager--RaiseStartAnimationEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114930 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::~EM_RaiseStartAnimationEventActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_RaiseStartAnimationEventActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
