/*
 * XREFs of ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801F69A0
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x180057520 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802387B0 (-MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180238830 (-DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802703F0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18057F7A0 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 *     ?OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180590420 (-OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shel.c)
 *     ?OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180590480 (-OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@I.c)
 * Callees:
 *     SnapFlyoutHost::HideAsync$_InitCoro$2 @ 0x180271A5C (SnapFlyoutHost--HideAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall SnapFlyoutHost::HideAsync(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // eax
  int v7; // [rsp+E8h] [rbp+10h] BYREF
  char v8; // [rsp+F0h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (unsigned int)operator new(0xA0uLL);
  v7 = 0;
  SnapFlyoutHost::HideAsync__InitCoro_2((unsigned int)&v7, v5, a2, (unsigned int)&v8, a1);
  return a2;
}
