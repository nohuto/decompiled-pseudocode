/*
 * XREFs of ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019C40
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001C6E8 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180043D08 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x18008A8F0 (-OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnWindowScaleUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x40000u);
  CVisual::SetDirtyFlags(this, 0x4000000u);
}
