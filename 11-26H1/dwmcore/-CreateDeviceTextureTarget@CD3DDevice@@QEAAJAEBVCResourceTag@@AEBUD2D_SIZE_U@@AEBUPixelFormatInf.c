/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F680C
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180013714 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800F5AE8 (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F5DE4 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        CD3DDevice *this,
        const struct CResourceTag *a2,
        struct ID3D11Texture2D *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct IDeviceTextureTarget **a6)
{
  __int128 v8; // xmm0
  int v9; // eax
  bool v10; // cf
  int v11; // eax
  struct ID3D11Texture2D *v12; // rbx
  unsigned int v13; // edi
  int v15; // xmm0_4
  __int64 v16; // rcx
  struct ID3D11Texture2D *v17; // rdx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-99h]
  int v20; // [rsp+28h] [rbp-91h]
  struct ID3D11Texture2D *v21; // [rsp+50h] [rbp-69h] BYREF
  struct ID3D11Texture2D *v22; // [rsp+58h] [rbp-61h] BYREF
  int v23; // [rsp+60h] [rbp-59h]
  int v24; // [rsp+64h] [rbp-55h]
  int v25; // [rsp+68h] [rbp-51h]
  __int64 v26; // [rsp+6Ch] [rbp-4Dh]
  int v27; // [rsp+74h] [rbp-45h]
  struct ID3D11Texture2D v28; // [rsp+80h] [rbp-39h] BYREF
  int v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+8Ch] [rbp-2Dh]
  int v31; // [rsp+90h] [rbp-29h]
  __int64 v32; // [rsp+94h] [rbp-25h]
  int v33; // [rsp+9Ch] [rbp-1Dh]
  __int64 v34; // [rsp+A0h] [rbp-19h]
  int v35; // [rsp+A8h] [rbp-11h]
  __int128 v36; // [rsp+B0h] [rbp-9h]

  v29 = 1;
  v30 = 1;
  *a6 = 0LL;
  v8 = *(_OWORD *)a2;
  v28.lpVtbl = a3->lpVtbl;
  v9 = *(_DWORD *)a4;
  v32 = 1LL;
  v31 = v9;
  v10 = *((_BYTE *)a5 + 20) != 0;
  v26 = 0LL;
  v27 = 0;
  v33 = 0;
  v34 = 40LL;
  v35 = v10 ? 0x80000 : 0;
  v36 = v8;
  v21 = 0LL;
  v11 = CD3DDevice::CreateTexture(this, (const struct DWM_TEXTURE2D_DESC *)&v28, a3, &v21);
  v12 = v21;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v15 = *((_DWORD *)a5 + 4);
    v16 = *((_QWORD *)this + 23);
    v17 = v21;
    LODWORD(v21) = v31;
    HIDWORD(v21) = *((_DWORD *)a4 + 1);
    v22 = v21;
    v20 = *((_DWORD *)a5 + 2);
    v19 = *((_DWORD *)a4 + 2);
    v23 = 1119879168;
    v24 = 1119879168;
    v25 = 1;
    v18 = CDeviceTextureTarget::Create(
            v16,
            (__int64)v17,
            (__int64)&v28,
            (__int64)&v22,
            v19,
            v20,
            v15,
            0,
            (unsigned __int64 *)a6);
    v13 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3EA0, 2u, v18, 0x50Au, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3EA0, 2u, v11, 0x4F9u, 0LL);
  }
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v12->lpVtbl->Release)(v12);
  return v13;
}
