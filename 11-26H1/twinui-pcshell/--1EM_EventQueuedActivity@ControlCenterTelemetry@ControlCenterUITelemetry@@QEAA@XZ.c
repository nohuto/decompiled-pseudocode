/*
 * XREFs of ??1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1801148D8
 * Callers:
 *     _CControlCenterExperienceManager::OnEventQueued_::_1_::dtor$0 @ 0x1806CEA71 (_CControlCenterExperienceManager--OnEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180114930 (-Destroy@-$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity::~EM_EventQueuedActivity(
        ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity *this)
{
  *(_QWORD *)this = &ControlCenterUITelemetry::ControlCenterTelemetry::EM_EventQueuedActivity::`vftable';
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
