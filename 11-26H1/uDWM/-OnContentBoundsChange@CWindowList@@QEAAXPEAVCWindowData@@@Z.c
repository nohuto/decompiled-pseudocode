/*
 * XREFs of ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800175C0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800175E4 (-OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowList::OnContentBoundsChange(CWindowList *this, struct CWindowData *a2)
{
  CTopLevelWindow *v2; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v2 )
    CTopLevelWindow::OnContentBoundsUpdated(v2);
}
