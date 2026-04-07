/*
 * XREFs of ?OnForceActiveWindowAppearanceUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180097DE0
 * Callers:
 *     ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4280 (-ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnForceActiveWindowAppearanceUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 1081346);
}
