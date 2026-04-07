/*
 * XREFs of ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180019C6C
 * Callers:
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180019690 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x1800452F0 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x180072DF8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2DD0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z @ 0x1800E7FF0 (-SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z.c)
 *     ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x1800E82F0 (-SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z.c)
 *     ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800E85B0 (-SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019CAC (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowData::OnColorizationUpdated(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx
  CWindowIconic *v3; // rcx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v2 )
    CTopLevelWindow::OnColorizationUpdated(v2);
  v3 = (CWindowIconic *)*((_QWORD *)this + 61);
  if ( v3 )
    CWindowIconic::OnColorizationUpdated(v3, 1);
}
