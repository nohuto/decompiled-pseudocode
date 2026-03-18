/*
 * XREFs of ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800F7B80 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800F8320 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801BAC74 (-Create@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x1802959FC (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1802A46B0 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B7740 (-Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 *     ?Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z @ 0x1802B78B8 (-Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z.c)
 *     ?OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z @ 0x1802B840C (-OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z.c)
 *     ?OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z @ 0x1802B8594 (-OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z.c)
 *     ??0CSysmemTexture@@IEAA@XZ @ 0x1802B8F2C (--0CSysmemTexture@@IEAA@XZ.c)
 * Callees:
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x1800F6408 (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 */

CD3DResource *__fastcall CD3DResource::CD3DResource(CD3DResource *this, __int64 a2)
{
  __int64 v2; // rcx
  CD3DResource *result; // rax
  char v4; // dl

  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
    this,
    a2);
  result = (CD3DResource *)v2;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_BYTE *)(v2 + 116) = v4;
  *(_WORD *)(v2 + 117) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  return result;
}
