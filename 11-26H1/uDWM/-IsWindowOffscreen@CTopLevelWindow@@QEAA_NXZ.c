/*
 * XREFs of ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18003EA94
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800A1B68 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800E46F8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsWindowOffscreen(CTopLevelWindow *this)
{
  return *((_BYTE *)this + 185) & 1;
}
