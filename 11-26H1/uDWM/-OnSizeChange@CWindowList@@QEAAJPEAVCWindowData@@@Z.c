/*
 * XREFs of ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180010FE8
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800184F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18003D904 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CWindowList::OnSizeChange(CWindowList *this, struct CWindowData *a2)
{
  return CWindowList::UpdateWindowScale(this, a2, 0);
}
