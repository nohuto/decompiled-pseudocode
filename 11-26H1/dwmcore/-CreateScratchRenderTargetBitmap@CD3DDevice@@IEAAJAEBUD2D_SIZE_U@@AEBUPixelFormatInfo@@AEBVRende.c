/*
 * XREFs of ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800F588C
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800F5AE8 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F5DE4 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x1800F6434 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateScratchRenderTargetBitmap(
        CD3DDevice *this,
        const struct D2D_SIZE_U *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        const struct RenderTargetInfo *a4,
        struct CScratchRenderTargetBitmap **a5)
{
  int v6; // eax
  struct ID3D11Texture2D *v9; // rdi
  struct IDeviceTextureTarget *v10; // rbx
  int pSysMem; // eax
  int v12; // eax
  int v13; // esi
  int v14; // xmm0_4
  __int64 v15; // rcx
  UINT SysMemPitch; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  int v21; // [rsp+28h] [rbp-A9h]
  struct IDeviceTextureTarget *v22; // [rsp+50h] [rbp-81h] BYREF
  struct ID3D11Texture2D *v23; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h]
  int v25; // [rsp+6Ch] [rbp-65h]
  __int64 v26; // [rsp+70h] [rbp-61h] BYREF
  int v27; // [rsp+78h] [rbp-59h]
  int v28; // [rsp+7Ch] [rbp-55h]
  int v29; // [rsp+80h] [rbp-51h]
  __int64 v30; // [rsp+84h] [rbp-4Dh]
  int v31; // [rsp+8Ch] [rbp-45h]
  struct D2D_SIZE_U v32; // [rsp+90h] [rbp-41h] BYREF
  int v33; // [rsp+98h] [rbp-39h]
  int v34; // [rsp+9Ch] [rbp-35h]
  int v35; // [rsp+A0h] [rbp-31h]
  __int64 v36; // [rsp+A4h] [rbp-2Dh]
  int v37; // [rsp+ACh] [rbp-25h]
  __int64 v38; // [rsp+B0h] [rbp-21h]
  int v39; // [rsp+B8h] [rbp-19h]
  const char *v40; // [rsp+C0h] [rbp-11h]
  int v41; // [rsp+C8h] [rbp-9h]
  int v42; // [rsp+CCh] [rbp-5h]

  v40 = "DWM Scratch Rendertarget";
  v6 = v25;
  v23 = 0LL;
  *a5 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v41 = 24;
  v42 = v6;
  v30 = 0LL;
  v31 = 0;
  if ( *((_DWORD *)this + 281) )
  {
    v13 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E48, 2u, -2003304307, 0x67Cu, 0LL);
  }
  else
  {
    v32 = *a2;
    pSysMem = (int)a3->pSysMem;
    v37 = 0;
    v35 = pSysMem;
    LOBYTE(pSysMem) = *((_BYTE *)a4 + 20);
    v33 = 1;
    v34 = 1;
    v36 = 1LL;
    v38 = 40LL;
    v39 = (_BYTE)pSysMem != 0 ? 0x80000 : 0;
    v12 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v32, a3, &v23);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E48, 2u, v12, 0x68Bu, 0LL);
      v9 = v23;
    }
    else
    {
      v14 = *((_DWORD *)a4 + 4);
      v15 = *((_QWORD *)this + 23);
      LODWORD(v24) = v35;
      HIDWORD(v24) = HIDWORD(a3->pSysMem);
      v26 = v24;
      v21 = *((_DWORD *)a4 + 2);
      SysMemPitch = a3->SysMemPitch;
      v29 = 1;
      v9 = v23;
      v27 = 1119879168;
      v28 = 1119879168;
      v17 = CDeviceTextureTarget::Create(v15, v23, &v32, &v26, SysMemPitch, v21, v14, 0, &v22);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E48, 2u, v17, 0x69Cu, 0LL);
        v10 = v22;
      }
      else
      {
        v10 = v22;
        v18 = CScratchRenderTargetBitmap::Create(v22, a5);
        v13 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3E48, 2u, v18, 0x6A0u, 0LL);
      }
    }
  }
  v19 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v13, 0);
  if ( v10 )
    (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v9->lpVtbl->Release)(v9);
  return v19;
}
