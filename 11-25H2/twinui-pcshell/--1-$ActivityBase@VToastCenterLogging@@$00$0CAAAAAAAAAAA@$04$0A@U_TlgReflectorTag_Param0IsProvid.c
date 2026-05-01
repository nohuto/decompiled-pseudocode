/*
 * XREFs of ??1?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180373B94
 * Callers:
 *     ??1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x180373EE0 (--1EM_HideInHolographic@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x180373F0C (--1EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_ShowInHolographic@ToastCenterTelemetry@@QEAA@XZ @ 0x180373F38 (--1EM_ShowInHolographic@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ @ 0x180373F64 (--1EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180377B14 (-reset@-$shared_object@V-$ActivityData@VToastCenterLogging@@U_TlgReflectorTag_Param_ea_180377B14.c)
 */

__int64 __fastcall wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ToastCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
