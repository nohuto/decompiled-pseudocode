/*
 * XREFs of ?MarkFullInvalid@CCachedTexture@@QEAAXXZ @ 0x1802B1DE4
 * Callers:
 *     ?InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z @ 0x1802B1BF8 (-InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z.c)
 *     ?UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ @ 0x1802B21B0 (-UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ.c)
 *     ?Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z @ 0x1802B27FC (-Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?TrackInvalidRegions@CCachedTexture@@IEBA_NXZ @ 0x1802B1FC4 (-TrackInvalidRegions@CCachedTexture@@IEBA_NXZ.c)
 */

void __fastcall CCachedTexture::MarkFullInvalid(CCachedTexture *this)
{
  __int64 v1; // rcx

  if ( CCachedTexture::TrackInvalidRegions(this) )
    CRegion::SetRectangle((CRegion *)(v1 + 40), (const struct MilRectU *)(v1 + 24));
}
