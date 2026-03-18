/*
 * XREFs of ?AttachToWindow@CGdiSpriteBitmap@@QEAAX_N@Z @ 0x18019FE34
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z @ 0x18019FE9C (-NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall CGdiSpriteBitmap::AttachToWindow(CGdiSpriteBitmap *this, char a2)
{
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 && *((_BYTE *)this + 149) )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\GdiSpriteBitmap.h",
      (const char *)0x8007029CLL,
      v4);
  *((_BYTE *)this + 149) = a2;
  if ( a2 )
    CGdiSpriteBitmap::NotifyRemoteOfDirty(this, (CGdiSpriteBitmap *)((char *)this + 176));
}
