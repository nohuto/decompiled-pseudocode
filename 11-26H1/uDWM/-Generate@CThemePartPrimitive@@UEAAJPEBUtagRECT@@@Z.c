/*
 * XREFs of ?Generate@CThemePartPrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BD100 (-Generate@CNineGridImagePrimitive@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?ShouldDraw@CThemePartPrimitive@@AEBA_NXZ @ 0x1800BD91C (-ShouldDraw@CThemePartPrimitive@@AEBA_NXZ.c)
 */

__int64 __fastcall CThemePartPrimitive::Generate(CThemePartPrimitive *this, const struct tagRECT *a2)
{
  const struct tagRECT *v2; // rdx
  CNineGridImagePrimitive *v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CThemePartPrimitive::ShouldDraw(this) )
    return 0LL;
  v4 = CNineGridImagePrimitive::Generate(v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x204,
    (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
