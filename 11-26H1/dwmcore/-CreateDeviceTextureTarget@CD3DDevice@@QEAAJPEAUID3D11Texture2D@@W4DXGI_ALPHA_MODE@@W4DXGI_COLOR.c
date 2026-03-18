/*
 * XREFs of ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1801D0E54
 * Callers:
 *     ?CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@PEAPEAVCDDisplaySwapChainBuffer@@@Z @ 0x180134294 (-CreateSwapChainBuffer@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@IW4DXGI_ALPHA_MODE.c)
 *     ?CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z @ 0x1801D0D80 (-CreateBackBuffer@CLegacySwapChain@@IEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802993E4 (-CreateStereoRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     ?ResetBackBuffer@CCompSwapChain@@IEAAJXZ @ 0x1802A3E80 (-ResetBackBuffer@CCompSwapChain@@IEAAJXZ.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x1802A43C8 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AB794 (-EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F5DE4 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateDeviceTextureTarget(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        unsigned __int64 *a8)
{
  unsigned int v12; // ebx
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-89h]
  unsigned __int64 v19; // [rsp+58h] [rbp-51h] BYREF
  int v20; // [rsp+60h] [rbp-49h]
  int v21; // [rsp+64h] [rbp-45h]
  int v22; // [rsp+68h] [rbp-41h]
  __int64 v23; // [rsp+6Ch] [rbp-3Dh]
  int v24; // [rsp+74h] [rbp-35h]
  __int128 v25; // [rsp+78h] [rbp-31h] BYREF
  __int128 v26; // [rsp+88h] [rbp-21h]
  __int64 v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+A0h] [rbp-9h]

  v27 = 0LL;
  v28 = 0;
  v23 = 0LL;
  *a8 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  if ( *(_DWORD *)(a1 + 1124) )
  {
    v12 = -2003304307;
    v18 = 1316;
LABEL_3:
    v13 = v12;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1803642B0, 2u, v13, v18, 0LL);
    return v12;
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 80LL))(a2, &v25);
  if ( (v27 & 0x20) == 0 )
  {
    v12 = -2147024809;
    v18 = 1321;
    goto LABEL_3;
  }
  v19 = __PAIR64__(a3, v26);
  v14 = 1;
  v20 = 1119879168;
  v21 = 1119879168;
  if ( (v27 & 8) == 0 )
    v14 = 3;
  v15 = *(_QWORD *)(a1 + 184);
  v22 = v14;
  v16 = CDeviceTextureTarget::Create(v15, a2, (__int64)&v25, (__int64)&v19, a4, a5, a6, a7, a8);
  v12 = v16;
  if ( v16 < 0 )
  {
    v13 = v16;
    v18 = 1343;
    goto LABEL_10;
  }
  return v12;
}
