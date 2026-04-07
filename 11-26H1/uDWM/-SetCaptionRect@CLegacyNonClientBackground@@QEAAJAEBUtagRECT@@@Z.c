/*
 * XREFs of ?SetCaptionRect@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@@Z @ 0x18000B1D8
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x18000B35C (-EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetCaptionRect(CRectangleVisual **this, const struct tagRECT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CLegacyNonClientBackground::EnsureCaptionSprite((CLegacyNonClientBackground *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return v5;
  }
  else
  {
    CRectangleVisual::SetRect(this[24], a2);
    return 0LL;
  }
}
