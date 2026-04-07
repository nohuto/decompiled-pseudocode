/*
 * XREFs of ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019964
 * Callers:
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180019940 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnContentBoundsUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x4000000u);
}
