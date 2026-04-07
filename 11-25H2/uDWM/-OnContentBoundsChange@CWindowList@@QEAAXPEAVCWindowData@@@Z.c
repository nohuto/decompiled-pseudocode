/*
 * XREFs of ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180019940
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800984B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019964 (-OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowList::OnContentBoundsChange(CWindowList *this, struct CWindowData *a2)
{
  CTopLevelWindow *v2; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v2 )
    CTopLevelWindow::OnContentBoundsUpdated(v2);
}
