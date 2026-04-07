/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004AC10
 * Callers:
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x180033E4C (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003E6A4 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z @ 0x180072DA0 (-MakeSourceHandleForTarget@CDDisplayManager@@QEAAJAEBVCDWMDisplay@@PEAPEAXPEAI@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x180098148 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x1800E4354 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
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
  if ( !*a1 || v2 == (void *)-1LL )
  {
    *a1 = a2;
  }
  else
  {
    LastError = GetLastError();
    CloseHandle(v2);
    SetLastError(LastError);
    *a1 = a2;
  }
}
