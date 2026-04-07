/*
 * XREFs of ?Initialize@CIconicSprite@@MEAAJXZ @ 0x1800DE720
 * Callers:
 *     ?Create@CIconicSprite@@SAJPEAPEAV1@@Z @ 0x18008A110 (-Create@CIconicSprite@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CSpriteVisual@@UEAAJXZ @ 0x180037E50 (-Initialize@CSpriteVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CIconicSprite::Initialize(CIconicSprite *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CSpriteVisual::Initialize(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14,
    (int)"clientcore\\windows\\dwm\\udwm\\windowiconic.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
