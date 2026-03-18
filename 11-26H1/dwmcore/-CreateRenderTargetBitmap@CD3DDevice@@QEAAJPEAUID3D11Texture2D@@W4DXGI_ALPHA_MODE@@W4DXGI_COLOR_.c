/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18012452C
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180123EB4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180124370 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802864B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180296E40 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802992A0 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDi.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F5DE4 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F7AD0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  struct IDeviceTextureTarget *v9; // rbx
  __int64 v10; // rax
  void (__fastcall *v13)(__int64 *, __int128 *); // rax
  int v14; // edi
  unsigned int v15; // edi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  struct IDeviceTextureTarget *v21[2]; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-51h] BYREF
  int v23; // [rsp+68h] [rbp-49h]
  int v24; // [rsp+6Ch] [rbp-45h]
  int v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+74h] [rbp-3Dh]
  int v27; // [rsp+7Ch] [rbp-35h]
  __int128 v28; // [rsp+80h] [rbp-31h] BYREF
  __int128 v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+A0h] [rbp-11h]
  int v31; // [rsp+A8h] [rbp-9h]

  v30 = 0LL;
  v31 = 0;
  v26 = 0LL;
  *a7 = 0LL;
  v9 = 0LL;
  v27 = 0;
  v10 = *a2;
  v21[0] = 0LL;
  v28 = 0LL;
  v13 = *(void (__fastcall **)(__int64 *, __int128 *))(v10 + 80);
  v29 = 0LL;
  v13(a2, &v28);
  if ( (v30 & 0x20) != 0 )
  {
    v21[1] = (struct IDeviceTextureTarget *)__PAIR64__(a3, v29);
    v22 = __PAIR64__(a3, v29);
    v17 = 1;
    v23 = 1119879168;
    v24 = 1119879168;
    if ( (v30 & 8) == 0 )
      v17 = 3;
    v18 = *(_QWORD *)(a1 + 184);
    v25 = v17;
    v19 = CDeviceTextureTarget::Create(
            v18,
            (__int64)a2,
            (__int64)&v28,
            (__int64)&v22,
            a4,
            a5,
            a6,
            0,
            (unsigned __int64 *)v21);
    v14 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5588, 2u, v19, 0x4A2u, 0LL);
      v9 = v21[0];
    }
    else
    {
      v9 = v21[0];
      v20 = CRenderTargetBitmap::Create(v21[0], a7);
      v14 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5588, 2u, v20, 0x4A6u, 0LL);
    }
  }
  else
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F5588, 2u, -2147024809, 0x48Bu, 0LL);
  }
  v15 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v14, 0);
  if ( v9 )
    (*(void (__fastcall **)(struct IDeviceTextureTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  return v15;
}
