/*
 * XREFs of ?GetDefaultDXGIColorSpaceForFormat@@YA?AW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@@Z @ 0x1800F7118
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800F6E10 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180149E78 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801DC480 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C (-Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDefaultDXGIColorSpaceForFormat(enum DXGI_FORMAT a1)
{
  __int64 result; // rax

  if ( a1 == DXGI_FORMAT_R16G16B16A16_FLOAT )
    return 1LL;
  result = 0LL;
  if ( a1 == DXGI_FORMAT_R9G9B9E5_SHAREDEXP )
    return 25LL;
  return result;
}
