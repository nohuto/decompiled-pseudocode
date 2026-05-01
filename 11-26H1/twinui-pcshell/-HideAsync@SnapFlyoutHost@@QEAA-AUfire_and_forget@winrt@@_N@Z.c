/*
 * XREFs of ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180269D20
 * Callers:
 *     ?OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUHitTestPartNotifyEventArgs@3456@@Z @ 0x18006FA20 (-OnHitTestPartNotifyEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18022A6B0 (-MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022A730 (-DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x180268340 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1805A3340 (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 *     ?OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805B4450 (-OnFlyoutInstanceDismissRequested@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shel.c)
 *     ?OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x1805B44B0 (-OnFlyoutInstancePointerExited@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@I.c)
 * Callees:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802699D0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::HideAsync(void (__fastcall *a1)(char *a1), _BYTE *a2, char a3)
{
  void (__fastcall **v7)(char *); // [rsp+40h] [rbp+8h]

  v7 = (void (__fastcall **)(char *))operator new(0xA0uLL);
  v7[17] = a1;
  *((_BYTE *)v7 + 144) = a3;
  *v7 = SnapFlyoutHost::HideAsync__ResumeCoro_1;
  *((_DWORD *)v7 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v7 + 128) = 0;
  SnapFlyoutHost::HideAsync__ResumeCoro_1((char *)v7);
  return a2;
}
