/*
 * XREFs of ??1?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180040DD8
 * Callers:
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18001BB0C (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18001BB38 (--1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18001C300 (--1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802138CC (--1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180214178 (--1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021D06C (--1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18021E330 (--1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C479C (--1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C49A8 (--1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4A84 (--1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4D70 (--1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4DC8 (--1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802C4F28 (--1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18037BAC0 (--1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ @ 0x18037BAEC (--1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040D7C (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
  return wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
