/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800709CC
 * Callers:
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x18006F420 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x18006FC9C (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?StopActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x18007A220 (-StopActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x18007AB00 (-StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x18007BE00 (-StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ @ 0x18007C4A0 (-StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x18007CAE0 (-StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z @ 0x1801FE43C (-Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z.c)
 *     ?StopActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x180453880 (-StopActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804C4A70 (-StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804DC7B0 (-StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804EC500 (-StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804EC740 (-StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x18051C3C4 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 *     ?StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ @ 0x18051C860 (-StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ @ 0x18051CAA0 (-StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ @ 0x18051CF20 (-StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ @ 0x18051D160 (-StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ @ 0x18051D3A0 (-StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A2C90 (-StopActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A2ED0 (-StopActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessView@CSnapComponentTelemetry@@MEAAXXZ @ 0x1805A50F0 (-StopActivity@ProcessView@CSnapComponentTelemetry@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  **(_DWORD **)(a1 + 272) = 2;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
