/*
 * XREFs of ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AEB10
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AEBF0 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitma.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1801C6690 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802AEA50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z @ 0x1802AEEE4 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetD2DBitmap(
        CDxHandleStereoBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  CD2DBitmapCache **v4; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int CachedBitmap; // eax
  int v11; // eax

  v4 = (CD2DBitmapCache **)((char *)this - 80);
  *a3 = 0LL;
  v8 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap((CDxHandleStereoBitmapRealization *)((char *)this - 80));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x69u, 0LL);
  }
  else if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v4, *((unsigned int *)a2 + 3)) )
  {
    CachedBitmap = CD2DBitmapCache::GetCachedBitmap((CD2DBitmapCache *)v4, a2, a3, a4);
    v9 = CachedBitmap;
    if ( CachedBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedBitmap, 0x6Fu, 0LL);
  }
  else
  {
    v11 = CD2DBitmapCache::GetCachedBitmap(v4[51], a2, a3, a4);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x75u, 0LL);
  }
  return v9;
}
