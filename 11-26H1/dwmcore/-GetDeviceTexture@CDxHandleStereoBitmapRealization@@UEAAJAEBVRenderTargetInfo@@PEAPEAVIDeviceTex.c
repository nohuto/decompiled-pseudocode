/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AEC10
 * Callers:
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AECE0 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDevic.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012D250 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802AEA50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z @ 0x1802AEEE4 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        CDxHandleStereoBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache **v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int CachedTexture; // eax
  int v9; // eax

  v3 = (CD2DBitmapCache **)((char *)this - 80);
  *a3 = 0LL;
  v6 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap((CDxHandleStereoBitmapRealization *)((char *)this - 80));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x4Fu, 0LL);
  }
  else if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v3, *((unsigned int *)a2 + 3)) )
  {
    CachedTexture = CD2DBitmapCache::GetCachedTexture((CD2DBitmapCache *)v3, a2, a3);
    v7 = CachedTexture;
    if ( CachedTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedTexture, 0x53u, 0LL);
  }
  else
  {
    v9 = CD2DBitmapCache::GetCachedTexture(v3[51], a2, a3);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x58u, 0LL);
  }
  return v7;
}
