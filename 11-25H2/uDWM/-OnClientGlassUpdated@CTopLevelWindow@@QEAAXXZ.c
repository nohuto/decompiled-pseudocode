/*
 * XREFs of ?OnClientGlassUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019BFC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800445B4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnClientGlassUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x4000u);
}
