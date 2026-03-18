/*
 * XREFs of ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x180104FC0
 * Callers:
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180104DB8 (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802A72A8 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180105FD8 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v12; // rbp
  __int64 v13; // rcx
  char v14; // bl
  int v15; // xmm6_4
  int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  char v21; // [rsp+58h] [rbp-60h]
  _DWORD v22[8]; // [rsp+70h] [rbp-48h] BYREF
  char v23; // [rsp+C0h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 296) + 88LL))(*(_QWORD *)(a1 + 296), &v23);
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(_QWORD *)(a1 + 296) + 16LL;
  v14 = *(_BYTE *)(a1 + 124);
  v15 = *(_DWORD *)(a1 + 120);
  v16 = *(_DWORD *)(a1 + 100);
  v22[0] = *a8;
  v22[1] = a8[1];
  v22[2] = a8[2];
  v22[3] = a8[3];
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 176LL))(v13);
  v21 = v14;
  v18 = CD3DDevice::HDRConvert(v12, a2, a3, a4, a5, a6, a7, v17, &v23, v16, v15, v21, v22);
  v19 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x369u, 0LL);
  return v19;
}
