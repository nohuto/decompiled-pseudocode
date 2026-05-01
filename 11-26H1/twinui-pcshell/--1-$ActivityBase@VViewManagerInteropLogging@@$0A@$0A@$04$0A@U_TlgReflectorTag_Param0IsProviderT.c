/*
 * XREFs of ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D1B2C
 * Callers:
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1A7C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1AA8 (--1WindowEventDispatcher_AppViewActivating@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1AD4 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1B00 (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802C48F8 (--1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802C4D9C (--1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180069F34 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 */

__int64 __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a1 + 280));
  return wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
