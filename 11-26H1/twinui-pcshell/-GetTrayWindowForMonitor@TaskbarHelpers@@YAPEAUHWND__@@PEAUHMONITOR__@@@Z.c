/*
 * XREFs of ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740
 * Callers:
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x18022EB40 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x180262DFC (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180264824 (-Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1803A1DD0 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803C6000 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A3304 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x1804BBB28 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x18050964C (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FD0D8 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall TaskbarHelpers::GetTrayWindowForMonitor(TaskbarHelpers *this, HMONITOR a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v3[1] = this;
  v3[0] = &v4;
  v4 = 0LL;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_e4007893a4612b6c480bf18e255795c5_>,
    (LPARAM)v3);
  return (HWND)v4;
}
