/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180040630
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180034B94 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003FE94 (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180050DE8 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z @ 0x1800809F0 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z.c)
 *     ?EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ @ 0x180090B34 (-EnsureClientAreaVisualProxy@CWindowData@@QEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A5494 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800E7F50 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rbp
  DWORD LastError; // edi

  v2 = *a1;
  if ( (char *)*a1 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
    *a1 = a2;
  }
  else
  {
    *a1 = a2;
  }
}
