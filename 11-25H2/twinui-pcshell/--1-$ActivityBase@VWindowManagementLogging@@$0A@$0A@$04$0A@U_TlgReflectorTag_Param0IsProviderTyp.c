/*
 * XREFs of ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180048AD0
 * Callers:
 *     ??1ProcessView@CSnapComponentTelemetry@@QEAA@XZ @ 0x180048098 (--1ProcessView@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ @ 0x180048260 (--1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x180048618 (--1XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ @ 0x180227294 (--1FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802272C0 (--1OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ @ 0x1802CD418 (--1InitializePosition@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1802CD4C8 (--1ActivationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CD940 (--1CreateXamlApplication@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ @ 0x1802CDAF8 (--1InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAA@XZ.c)
 *     ??1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CDB7C (--1CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804B26F4 (--1ExternalDragHandoff@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804C8CD4 (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804D8334 (--1InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1804D8360 (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ??1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3C1C (--1ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3C48 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3CDC (--1ShowWindowAttempted@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3D08 (--1TMPControlGained@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3D34 (--1TMPControlLost@TabletModeTraceLogging@@QEAA@XZ.c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180048B08 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 */

__int64 __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
