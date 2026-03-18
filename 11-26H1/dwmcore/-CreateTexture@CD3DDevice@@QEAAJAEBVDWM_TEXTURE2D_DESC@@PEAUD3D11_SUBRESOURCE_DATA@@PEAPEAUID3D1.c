/*
 * XREFs of ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800F5AE8
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800F588C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F680C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1801306C8 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@PEAVID2DBitmapCacheSource@@PEAPEAVC.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180296E40 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1802A45FC (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z @ 0x1802B78B8 (-Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z.c)
 *     ?EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802B8A10 (-EnsureStagingTexture@CMappedTexture@@IEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateTexture(
        CD3DDevice *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct ID3D11Texture2D *a3,
        struct ID3D11Texture2D **a4)
{
  bool v5; // zf
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // ebx
  struct ID3D11Texture2D *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  *a4 = 0LL;
  v5 = *((_DWORD *)this + 281) == 0;
  v12 = 0LL;
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const struct DWM_TEXTURE2D_DESC *, _QWORD, struct ID3D11Texture2D **))(**((_QWORD **)this + 68) + 40LL))(
           *((_QWORD *)this + 68),
           a2,
           0LL,
           &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E20, 0xAu, v8, 0x72Au, 0LL);
    }
    else
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v12->lpVtbl->SetPrivateData)(
        v12,
        &WKPDID_D3DDebugObjectName,
        *((unsigned int *)a2 + 14),
        *((_QWORD *)a2 + 6));
      *a4 = v12;
      v12 = 0LL;
    }
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E20, 0xAu, -2003304307, 0x726u, 0LL);
  }
  v10 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v9, 5u);
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v12->lpVtbl->Release)(v12);
  return v10;
}
