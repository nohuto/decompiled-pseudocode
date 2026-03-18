/*
 * XREFs of ?SetColorSpace@CBitmap@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180224C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBitmap::SetColorSpace(CBitmap *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 25) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\Bitmap.h",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
  else
  {
    *((_DWORD *)this + 24) = a2;
    return 0LL;
  }
}
