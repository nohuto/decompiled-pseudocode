/*
 * XREFs of ??1?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800329CC
 * Callers:
 *     ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1801F4898 (--1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180204628 (--1EM_EventQueuedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180207E10 (--1EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802227C0 (--1EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180222D68 (--1EM_ViewShownActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18022C53C (--1EM_HideActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18022D3CC (--1EM_LaunchActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CD368 (--1EM_ShowActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CD54C (--1EM_NewNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CD654 (--1EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CD96C (--1EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CD9C4 (--1EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x1802CDB50 (--1EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x180373E88 (--1EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ @ 0x180373EB4 (--1EM_DisplayContextChanged@ToastCenterTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032A04 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>((_DWORD *)(a1 + 8));
}
