/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAUHWND__@@@Z @ 0x18003D8C8
 * Callers:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18006D9EC (--1CAnimationComponent@@UEAA@XZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(CTransitionVisualController *this, HWND a2)
{
  struct CWindowData *WindowDataByHwnd; // rax

  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                       a2);
  if ( WindowDataByHwnd )
    CTransitionVisualController::RestoreWindow(this, WindowDataByHwnd, 1);
}
