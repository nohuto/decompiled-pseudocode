/*
 * XREFs of ??1?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180554A3C
 * Callers:
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x180554BFC (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1805581D4 (-reset@-$shared_object@V-$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0I.c)
 */

__int64 __fastcall wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<DragDropSimulatorTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<DragDropSimulatorTraceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
