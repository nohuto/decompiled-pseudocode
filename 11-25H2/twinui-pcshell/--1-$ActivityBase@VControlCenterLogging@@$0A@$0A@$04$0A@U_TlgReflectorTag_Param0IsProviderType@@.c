/*
 * XREFs of ??1?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180043D3C
 * Callers:
 *     ??1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1800430A8 (--1EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1800430D4 (--1EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18020B9FC (--1EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18022D3A0 (--1EM_RaiseApplicationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18023D134 (--1EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CD3EC (--1EM_RaiseHideExperienceRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 *     ??1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CD470 (--1EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CD5FC (--1EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CD75C (--1EM_RaiseStartAnimationEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1802CD914 (--1EM_RaiseHideDeepLinkRequestedEventActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@Q.c)
 *     ??1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180364078 (--1EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803640A4 (--1EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803640D0 (--1EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ??1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x1803640FC (--1EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180043D74 (-reset@-$shared_object@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProvider.c)
 */

__int64 __fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ControlCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
