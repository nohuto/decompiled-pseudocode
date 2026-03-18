/*
 * XREFs of ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x180105534
 * Callers:
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x180104A7C (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180105264 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18026B298 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802A3460 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802A67C0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1802B05F0 (-Update@CSecondaryCrossAdapterIndirectBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotN.c)
 *     ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4 (-Update@CCachedTexture@@IEAAJXZ.c)
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x180299A7C (McTemplateU0xxdddddd_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CopySubresourceRegion(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // edi
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // [rsp+60h] [rbp-21h] BYREF
  int v15; // [rsp+64h] [rbp-1Dh]
  int v16; // [rsp+68h] [rbp-19h]
  int v17; // [rsp+6Ch] [rbp-15h]
  int v18; // [rsp+70h] [rbp-11h]
  int v19; // [rsp+74h] [rbp-Dh]

  v9 = a2;
  v10 = *(_QWORD *)(a1 + 552);
  v14 = *a4;
  v15 = a4[1];
  v17 = a4[2];
  v18 = a4[3];
  v16 = 0;
  v19 = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, int *, int))(*(_QWORD *)v10 + 920LL))(
             v10,
             a5,
             a6,
             a7,
             a8,
             0,
             a2,
             a3,
             &v14,
             a9);
  if ( (a9 & 4) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    return McTemplateU0xxdddddd_EventWriteTransfer(v13, v12, a5, v9, v14, v15, v17, v18, a7, a8);
  return result;
}
