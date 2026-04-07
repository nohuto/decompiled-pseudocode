/*
 * XREFs of ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019BEC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800568BC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800E59B8 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnIconUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x20000u);
}
