/*
 * XREFs of ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x18004AAA4
 * Callers:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18004A3E0 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004A700 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801AF63C (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1801BD458 (-OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800E6AF4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall CGdiSpriteBitmap::UpdatePixelFormat(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  int v2; // eax
  __int64 v3; // r8

  if ( *((_BYTE *)this + 155) && *((_BYTE *)this + 408) && a2 == DXGI_FORMAT_B8G8R8X8_UNORM )
    a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  *((_DWORD *)this + 34) = a2;
  v2 = HasAlphaChannel(a2);
  *(_DWORD *)(v3 + 140) = v2 != 0 ? 1 : 3;
  CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>::SetPixelFormat(v3, *(unsigned int *)(v3 + 136));
}
