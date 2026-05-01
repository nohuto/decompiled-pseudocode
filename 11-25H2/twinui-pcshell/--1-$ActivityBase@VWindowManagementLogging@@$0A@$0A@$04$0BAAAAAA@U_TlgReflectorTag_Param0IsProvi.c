/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801F8398
 * Callers:
 *     ??1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x18004828C (--1OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x1800482B8 (--1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ.c)
 *     ??1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ @ 0x18008FB8C (--1VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAA@XZ.c)
 *     ??1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ @ 0x1802CD33C (--1OnArrangementReset@WindowDragInputProviderTelemetry@@QEAA@XZ.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3CB0 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18057A3BC (--1CreateSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ @ 0x18057A414 (--1GetAndDeleteSnapId@CSnapComponentTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801F83D0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1801F83D0.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
