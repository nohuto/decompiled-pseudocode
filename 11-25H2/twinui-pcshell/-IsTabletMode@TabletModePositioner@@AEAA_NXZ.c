/*
 * XREFs of ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801D39FC
 * Callers:
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1801C10F0 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x1801D3900 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1801D3970 (-MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x1804F4420 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z @ 0x1804F4CE0 (-CanShowSwitcherOrLauncher@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F72F0 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___::Run @ 0x1804F8970 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___--Run.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1804F8DC0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804F8FD0 (-ShouldHandleActivation@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1804F8FF0 (-ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectab.c)
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x1804F9580 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 *     ?VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z @ 0x1804FC890 (-VisibleFullScreenViewChanged@TabletModePositioner@@UEAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TabletModePositioner::IsTabletMode(TabletModePositioner *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 58) != 1 || *((_DWORD *)this + 59) != 1 )
    return 0;
  return result;
}
