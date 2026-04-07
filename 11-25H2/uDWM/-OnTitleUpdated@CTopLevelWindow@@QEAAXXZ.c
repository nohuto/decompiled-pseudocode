/*
 * XREFs of ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019CBC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800569BC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800579B0 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnTitleUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x10000u);
}
