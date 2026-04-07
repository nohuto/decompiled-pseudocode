/*
 * XREFs of ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x18004DEDC
 * Callers:
 *     ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x18007D510 (-SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::OnSystemBackdropUpdated(CWindowData *this)
{
  CTopLevelWindow *v1; // rcx

  v1 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v1 )
    CTopLevelWindow::OnSystemBackdropUpdated(v1);
}
