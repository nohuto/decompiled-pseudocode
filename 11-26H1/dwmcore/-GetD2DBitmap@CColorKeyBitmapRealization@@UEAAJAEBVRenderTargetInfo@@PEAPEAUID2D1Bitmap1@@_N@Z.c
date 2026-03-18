/*
 * XREFs of ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C6690 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetD2DBitmap(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int CachedBitmap; // eax
  unsigned int v5; // ebx

  CachedBitmap = CD2DBitmapCache::GetCachedBitmap((CColorKeyBitmapRealization *)((char *)this - 80), a2, a3, a4);
  v5 = CachedBitmap;
  if ( CachedBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedBitmap, 0xAEu, 0LL);
  return v5;
}
