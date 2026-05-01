/*
 * XREFs of ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803506B8
 * Callers:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180347E38 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 *     ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x18034B370 (-OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Window.c)
 *     ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18034FD54 (-StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1803507BC (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::StopShortPressTimer(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 288) )
  {
    result = winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)(a1 + 280));
    *(_BYTE *)(a1 + 288) = 0;
  }
  return result;
}
