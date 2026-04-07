/*
 * XREFs of ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800445A4
 * Callers:
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800443C4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnClientMarginsUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x2000);
}
