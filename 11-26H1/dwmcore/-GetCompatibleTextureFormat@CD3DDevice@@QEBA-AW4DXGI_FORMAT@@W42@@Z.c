/*
 * XREFs of ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180131048
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ?CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z @ 0x180296940 (-CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z.c)
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AD4B0 (-GetDeviceTexture@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C (-Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::GetCompatibleTextureFormat(CD3DDevice *this, enum DXGI_FORMAT a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  v2 = a2 - 2;
  if ( !v2 )
    return *((unsigned int *)this + 280);
  v3 = v2 - 8;
  if ( !v3 )
    return *((unsigned int *)this + 278);
  v4 = v3 - 14;
  if ( !v4 )
    return *((unsigned int *)this + 276);
  v5 = v4 - 4;
  if ( v5 )
  {
    v6 = v5 - 33;
    if ( !v6 )
      return *((unsigned int *)this + 270);
    v7 = v6 - 4;
    if ( !v7 )
      return *((unsigned int *)this + 271);
    v8 = v7 - 2;
    if ( !v8 )
      return *((unsigned int *)this + 277);
    v9 = v8 - 20;
    if ( !v9 )
      return *((unsigned int *)this + 274);
    if ( v9 == 1 )
      return *((unsigned int *)this + 275);
  }
  return *((unsigned int *)this + 272);
}
