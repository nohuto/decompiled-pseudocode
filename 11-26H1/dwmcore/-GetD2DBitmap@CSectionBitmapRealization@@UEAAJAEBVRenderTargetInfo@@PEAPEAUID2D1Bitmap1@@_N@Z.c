/*
 * XREFs of ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B0C60
 * Callers:
 *     ?GetD2DBitmap@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AA8A0 (-GetD2DBitmap@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C6690 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetD2DBitmap(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  CD2DBitmapCache *v4; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  int CachedBitmap; // eax

  v4 = (CSectionBitmapRealization *)((char *)this - 80);
  *a3 = 0LL;
  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 10) + 72LL))((char *)this - 80);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB308, 2u, v9, 0x4Fu, 0LL);
  }
  else if ( *((_QWORD *)this + 33) )
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap(v4, a2, a3, a4);
    v10 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803AB308, 2u, CachedBitmap, 0x55u, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return v10;
}
