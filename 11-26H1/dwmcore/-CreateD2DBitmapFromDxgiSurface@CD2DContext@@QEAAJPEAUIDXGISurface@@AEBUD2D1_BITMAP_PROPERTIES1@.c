/*
 * XREFs of ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180102AC0
 * Callers:
 *     ?EnsureBitmap@CD2DBitmap@@IEAAJXZ @ 0x1801027F8 (-EnsureBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802A977C (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?EnsureD2DBitmap@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJ_N@Z @ 0x1802B7A30 (-EnsureD2DBitmap@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapFromDxgiSurface(
        CD2DContext *this,
        struct IDXGISurface *a2,
        const struct D2D1_BITMAP_PROPERTIES1 *a3,
        struct ID2D1Bitmap1 **a4)
{
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx

  v5 = (__int64)this + 1108;
  if ( !this )
    v5 = 1124LL;
  if ( *(_DWORD *)v5 )
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xB0u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISurface *, const struct D2D1_BITMAP_PROPERTIES1 *, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 25) + 496LL))(
           *((_QWORD *)this + 25),
           a2,
           a3,
           a4);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xB4u, 0LL);
  }
  return CD2DContext::TranslateDXGIorD3DErrorInContext(this, v7);
}
