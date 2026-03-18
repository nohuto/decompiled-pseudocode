/*
 * XREFs of ?IsValidUseAsSwapChain@CBitmapRealization@@MEBA_NXZ @ 0x1802AAA30
 * Callers:
 *     ?IsValidUseAsSwapChain@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802ABDE0 (-IsValidUseAsSwapChain@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

bool __fastcall CBitmapRealization::IsValidUseAsSwapChain(CBitmapRealization *this)
{
  int v2; // eax
  bool result; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x74,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/BitmapRealization.h",
    (const char *)0x8007029CLL);
  result = 0;
  if ( *((int *)this + 62) >= 2 )
  {
    v2 = *((_DWORD *)this + 75);
    if ( v2 == 2 || v2 == 3 )
      return 1;
  }
  return result;
}
