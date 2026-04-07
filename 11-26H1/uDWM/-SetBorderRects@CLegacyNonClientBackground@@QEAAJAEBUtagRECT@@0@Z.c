/*
 * XREFs of ?SetBorderRects@CLegacyNonClientBackground@@QEAAJAEBUtagRECT@@0@Z @ 0x180081C7C
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18000ACD4 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CLegacyNonClientBackground::SetBorderRects(
        struct tagRECT *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  this[15] = *a2;
  this[16] = *a3;
  v3 = CLegacyNonClientBackground::EnsureBorderSprite((CLegacyNonClientBackground *)this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
