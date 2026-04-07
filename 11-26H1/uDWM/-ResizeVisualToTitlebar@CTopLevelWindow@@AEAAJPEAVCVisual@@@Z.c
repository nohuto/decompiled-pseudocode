/*
 * XREFs of ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z @ 0x18004BE28
 * Callers:
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18004B30C (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x1800CBE44 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x180011CFC (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ @ 0x18004BE8C (-GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ.c)
 */

__int64 __fastcall CTopLevelWindow::ResizeVisualToTitlebar(CTopLevelWindow *this, LONG *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r8
  LONG TitlebarHeight; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagSIZE v11; // [rsp+38h] [rbp+10h] BYREF

  CVisual::SetInsetFromParentLeft((CVisual *)a2, 0LL, a3);
  CVisual::SetInsetFromParentTop((CVisual *)a2, 0LL, v5);
  CVisual::SetInsetFromParentRight((CVisual *)a2, 0LL, v6);
  TitlebarHeight = CTopLevelWindow::GetTitlebarHeight(this);
  v11.cx = a2[16];
  v11.cy = TitlebarHeight;
  CVisual::SetSize((CVisual *)a2, &v11, v8, v9);
  return 0LL;
}
