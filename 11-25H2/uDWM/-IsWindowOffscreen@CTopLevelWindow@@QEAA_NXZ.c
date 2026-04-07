/*
 * XREFs of ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ @ 0x18008F1B0
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800C082C (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800E878C (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsWindowOffscreen(CTopLevelWindow *this)
{
  return *((_BYTE *)this + 201) & 1;
}
