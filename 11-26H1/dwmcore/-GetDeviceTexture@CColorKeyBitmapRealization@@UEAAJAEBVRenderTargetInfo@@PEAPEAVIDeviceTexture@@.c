/*
 * XREFs of ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012C260
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18012D250 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetDeviceTexture(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int CachedTexture; // eax
  unsigned int v4; // ebx

  CachedTexture = CD2DBitmapCache::GetCachedTexture((CColorKeyBitmapRealization *)((char *)this - 80), a2, a3);
  v4 = CachedTexture;
  if ( CachedTexture < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedTexture, 0x9Fu, 0LL);
  return v4;
}
