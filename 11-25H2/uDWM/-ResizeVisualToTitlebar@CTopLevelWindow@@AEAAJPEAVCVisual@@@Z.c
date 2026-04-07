/*
 * XREFs of ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x180094858
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18000F64C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x1800592D4 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002D4AC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18002D51C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x18006B0E0 (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x180078F4C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 *     ?SetHeight@CVisual@@QEAAXH@Z @ 0x1800948AC (-SetHeight@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ResizeVisualToTitlebar(CTopLevelWindow *this, struct CVisual *a2)
{
  int TitlebarHeight; // eax

  CVisual::SetInsetFromParentLeft(a2, 0);
  CVisual::SetInsetFromParentTop(a2, 0);
  CVisual::SetInsetFromParentRight(a2, 0);
  TitlebarHeight = CTopLevelWindow::GetTitlebarHeight(this);
  CVisual::SetHeight(a2, TitlebarHeight);
  return 0LL;
}
