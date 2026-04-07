/*
 * XREFs of ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180097564
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180019464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18007E364 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4850 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001F854 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18007B878 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateDesktopWindowReplacement(CWindowList *this, unsigned __int64 a2)
{
  char v2; // bl
  HWND ShellWindowForDesktop; // rax
  struct CWindowData *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(this, a2);
  if ( !ShellWindowForDesktop
    || (CWindowList::GetSyncedWindowDataByHwnd(this, ShellWindowForDesktop, &v7), !v7)
    || (*((_BYTE *)v7 + 672) & 1) == 0
    || (*((_BYTE *)v7 + 673) & 0x20) == 0 )
  {
    v2 = 1;
  }
  CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager::s_pDesktopManagerInstance, v2, a2);
  return 0LL;
}
