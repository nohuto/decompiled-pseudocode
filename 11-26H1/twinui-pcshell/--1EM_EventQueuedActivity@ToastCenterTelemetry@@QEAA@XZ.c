/*
 * XREFs of ??1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18001BB38
 * Callers:
 *     _CToastCenterExperienceManager::OnEventQueued_::_1_::dtor$0 @ 0x1806CEB52 (_CToastCenterExperienceManager--OnEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C32C (-Destroy@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall ToastCenterTelemetry::EM_EventQueuedActivity::~EM_EventQueuedActivity(
        ToastCenterTelemetry::EM_EventQueuedActivity *this)
{
  *(_QWORD *)this = &ToastCenterTelemetry::EM_EventQueuedActivity::`vftable';
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
