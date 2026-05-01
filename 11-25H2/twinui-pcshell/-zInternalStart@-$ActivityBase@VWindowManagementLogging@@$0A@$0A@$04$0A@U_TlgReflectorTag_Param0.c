/*
 * XREFs of ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180056FB8
 * Callers:
 *     ?StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ @ 0x180048A10 (-StartActivity@FrameworkViewTypeChanged@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x180048B94 (-StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x180048CCC (-StartActivity@XamlLaunchedOnThread@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1800490D4 (-StartActivity@CreateXamlApplication@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z @ 0x180049160 (-StartActivity@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXUtagPOINT@@IK@Z.c)
 *     ?StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ @ 0x180049308 (-StartActivity@InitializePosition@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ @ 0x180049670 (-StartActivity@InitializeSnapFlyoutHost@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EnumSnappedWindows@CSnapComponentTelemetry@@QEAAXXZ @ 0x18004AAF0 (-StartActivity@EnumSnappedWindows@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ @ 0x180056D64 (-StartActivity@ProcessView@CSnapComponentTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x180226A48 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x180287D64 (-StartActivity@CreateXamlApplication_WASDK@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804B2CFC (-StartActivity@ExternalDragHandoff@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExternalDragDetected@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804C9C28 (-StartActivity@ExternalDragDetected@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ @ 0x1804D9BFC (-StartActivity@InitializePositionWithShowCommand@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F9B04 (-StartActivity@ApplicationViewChangedFocus@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1804F9BE8 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     ?StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__@@I@Z @ 0x1804FA10C (-StartActivity@ShowWindowAttempted@TabletModeTraceLogging@@QEAAXPEAUIApplicationView@@PEAUHWND__.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804FA230 (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1804FA370 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180058494 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

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
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)WindowManagementLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
