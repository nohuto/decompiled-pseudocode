/*
 * XREFs of ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180019094
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035BE0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180035D70 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180036004 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 */

__int64 __fastcall CWindowList::UpdateDesktopWindowReplacement(CWindowList *this, unsigned __int64 a2)
{
  bool v2; // bl
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(this, a2);
  if ( !ShellWindowForDesktop
    || (CWindowList::GetSyncedWindowDataByHwnd(this, ShellWindowForDesktop, &v7), !v7)
    || (*((_BYTE *)v7 + 736) & 1) == 0
    || (*((_BYTE *)v7 + 737) & 0x20) == 0 )
  {
    v2 = 1;
  }
  CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager::s_pDesktopManagerInstance, v2, a2);
  return 0LL;
}
