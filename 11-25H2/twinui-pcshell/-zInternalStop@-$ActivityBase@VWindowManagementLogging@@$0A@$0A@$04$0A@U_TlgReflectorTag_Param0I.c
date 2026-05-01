/*
 * XREFs of ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180058400
 * Callers:
 *     ?StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ @ 0x180057080 (-StopActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x180057798 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 *     ?StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ @ 0x1801DEC10 (-StopActivity@EnumSnappedWindows@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1801E4880 (-StopActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1801F3F60 (-StopActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ @ 0x1801FD980 (-StopActivity@InitializePosition@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x180201C80 (-StopActivity@ActivationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z @ 0x180209C24 (-Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z.c)
 *     ?StopActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@MEAAXXZ @ 0x1804471D0 (-StopActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804B2D90 (-StopActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ @ 0x1804CA640 (-StopActivity@ExternalDragDetected@MultitaskingViewTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804D9F70 (-StopActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ @ 0x1804DA1B0 (-StopActivity@PresentationRequested@ShellPositionerTelemetry@@MEAAXXZ.c)
 *     ?Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z @ 0x1804FA4B0 (-Stop@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXK@Z.c)
 *     ?StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ @ 0x1804FA940 (-StopActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ @ 0x1804FAB80 (-StopActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ @ 0x1804FB000 (-StopActivity@ShowWindowAttempted@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ @ 0x1804FB240 (-StopActivity@TMPControlGained@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ @ 0x1804FB480 (-StopActivity@TMPControlLost@TabletModeTraceLogging@@MEAAXXZ.c)
 *     ?StopActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@MEAAXXZ @ 0x18057F0F0 (-StopActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@MEAAXXZ @ 0x18057F330 (-StopActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ProcessView@CSnapComponentTelemetry@@MEAAXXZ @ 0x180581410 (-StopActivity@ProcessView@CSnapComponentTelemetry@@MEAAXXZ.c)
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
