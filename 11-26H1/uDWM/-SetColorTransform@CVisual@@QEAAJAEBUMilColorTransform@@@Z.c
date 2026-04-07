/*
 * XREFs of ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800DE3A4
 * Callers:
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x1800B523C (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetColorTransform@CVisualProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800DE558 (-SetColorTransform@CVisualProxy@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CVisual::SetColorTransform(CVisualProxy **this, const struct MilColorTransform *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVisualProxy::SetColorTransform(this[2], a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17C,
    (int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
