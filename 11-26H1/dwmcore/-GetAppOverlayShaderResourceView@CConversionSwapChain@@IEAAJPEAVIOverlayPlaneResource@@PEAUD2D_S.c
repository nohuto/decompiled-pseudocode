/*
 * XREFs of ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180130B50
 * Callers:
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802A72A8 (-ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180130F00 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::GetAppOverlayShaderResourceView(
        CD3DDevice **this,
        struct IOverlayPlaneResource *a2,
        struct D2D_SIZE_U *a3,
        enum DXGI_FORMAT *a4,
        struct ID3D11ShaderResourceView **a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v9)(struct IOverlayPlaneResource *, _QWORD); // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct ID3D11Resource **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  struct ID3D11Resource *v14; // rdx
  int ShaderResourceView; // eax
  struct ID3D11Resource *v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]

  v21 = 0LL;
  v22 = 0;
  v5 = *(_QWORD *)a2;
  v17 = 0LL;
  v18 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IOverlayPlaneResource *, _QWORD))(v5 + 40);
  v19 = 0LL;
  v20 = 0LL;
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct ID3D11Resource **))v9(a2, 0LL);
  v11 = (**v10)(v10, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x25Bu, 0LL);
  }
  else
  {
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v13 = ((__int64 (__fastcall *)(struct ID3D11Resource *, GUID *, __int64 *))v17->lpVtbl->QueryInterface)(
            v17,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v18);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x25Du, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 80LL))(v18, &v19);
      v14 = v17;
      *a3 = (struct D2D_SIZE_U)v19;
      *a4 = v20;
      ShaderResourceView = CD3DDevice::CreateShaderResourceView(this[8], v14, 0LL, a5);
      v12 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderResourceView, 0x269u, 0LL);
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11Resource *))v17->lpVtbl->Release)(v17);
  return v12;
}
