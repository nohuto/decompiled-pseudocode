/*
 * XREFs of ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18004E89C
 * Callers:
 *     ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ @ 0x18002C960 (-UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003B930 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z @ 0x18004E200 (-SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z.c)
 *     ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18004E2A0 (-SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x18004E360 (-SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x18004E460 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004E650 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180081070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18004E8DC (-OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ.c)
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
