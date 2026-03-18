/*
 * XREFs of ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64
 * Callers:
 *     ?Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B7740 (-Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 *     ?Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z @ 0x1802B78B8 (-Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z.c)
 *     ?OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z @ 0x1802B840C (-OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z.c)
 *     ?OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z @ 0x1802B8594 (-OpenShared@CDeviceTexture@@SAJPEAVCD3DDevice@@PEAX_NI2PEAPEAV1@@Z.c)
 *     ?Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B920C (-Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F8180 (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180130F00 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801B1E84 (-reset@-$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801BAF04 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceTextureT<ICrossAdapterTexture>::Initialize(
        struct CD3DResource *a1,
        CD3DResourceManager *this,
        struct ID3D11Resource *a3)
{
  _DWORD *v3; // rbx
  int v7; // edx
  CComposition *v8; // rcx
  int PixelFormatColorSpace; // ebx
  __int64 v10; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  bool v14; // cc
  CD3DDevice *v15; // rdi
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v16; // r8
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v18)(struct IBitmapResource *, __int64 *); // rbx
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _OWORD *, __int64 *); // rdi
  int v22; // eax
  __int64 v23; // rax
  _OWORD v24[2]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v26; // [rsp+70h] [rbp+30h] BYREF
  __int64 v27; // [rsp+78h] [rbp+38h] BYREF

  v3 = (_DWORD *)((char *)a1 + 144);
  ((void (__fastcall *)(struct ID3D11Resource *, char *))a3->lpVtbl[1].QueryInterface)(a3, (char *)a1 + 144);
  v7 = *((_DWORD *)a1 + 37) * (GetPixelFormatSize(*((_DWORD *)a1 + 40)) >> 3);
  *((_BYTE *)a1 + 118) = 1;
  *((_QWORD *)a1 + 5) = this;
  *((_DWORD *)a1 + 28) = *v3 * v7;
  CD3DResourceManager::RegisterResource(this, a1);
  PixelFormatColorSpace = GetPixelFormatColorSpace(*((_DWORD *)a1 + 40), (enum DXGI_COLOR_SPACE_TYPE *)a1 + 49);
  if ( PixelFormatColorSpace < 0 )
  {
    v10 = 31LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
      (const char *)(unsigned int)PixelFormatColorSpace);
    return (unsigned int)PixelFormatColorSpace;
  }
  v12 = *((_DWORD *)a1 + 44);
  if ( (v12 & 0x400000) != 0 )
  {
    v27 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v8);
    v18 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
    v19 = v18(StockBlackBitmap, &v27);
    PixelFormatColorSpace = v19;
    if ( v19 >= 0 )
    {
      v20 = v27;
      *(_QWORD *)&v24[0] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 80LL) + 944LL);
      *(_WORD *)((char *)&v24[1] + 5) = 0;
      BYTE7(v24[1]) = 0;
      DWORD2(v24[0]) = -1;
      *(_QWORD *)((char *)v24 + 12) = 0LL;
      BYTE4(v24[1]) = 0;
      v26 = 0LL;
      v21 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)v27 + 104LL);
      wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v26);
      v22 = v21(v20, v24, &v26);
      PixelFormatColorSpace = v22;
      if ( v22 >= 0 )
      {
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 128LL))(v26);
        wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)a1 + 27, v23);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
        goto LABEL_22;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
        (const char *)(unsigned int)v22);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
        (const char *)(unsigned int)v19);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
    return (unsigned int)PixelFormatColorSpace;
  }
  if ( (v12 & 8) == 0 )
  {
    PixelFormatColorSpace = -2003292287;
    v10 = 60LL;
    goto LABEL_3;
  }
  v13 = *((_DWORD *)a1 + 47);
  v14 = *((_DWORD *)a1 + 39) <= 1u;
  memset(v24, 0, 24);
  if ( v14 )
  {
    if ( v13 )
    {
      PixelFormatColorSpace = -2147024809;
      v10 = 50LL;
      goto LABEL_3;
    }
  }
  else
  {
    LODWORD(v24[0]) = *((_DWORD *)a1 + 40);
    HIDWORD(v24[0]) = *((_DWORD *)a1 + 38);
    *(_QWORD *)((char *)v24 + 4) = 5LL;
    *(_QWORD *)&v24[1] = v13 | 0x100000000LL;
  }
  v15 = *(CD3DDevice **)(*((_QWORD *)a1 + 5) + 80LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)a1 + 27);
  v16 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)v24;
  if ( *((_DWORD *)a1 + 39) <= 1u )
    v16 = 0LL;
  PixelFormatColorSpace = CD3DDevice::CreateShaderResourceView(
                            v15,
                            a3,
                            v16,
                            (struct ID3D11ShaderResourceView **)a1 + 27);
  if ( PixelFormatColorSpace < 0 )
  {
    v10 = 56LL;
    goto LABEL_3;
  }
LABEL_22:
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)a1 + 17, (__int64)a3);
  wil::com_ptr_t<IDXGIResource1,wil::err_returncode_policy>::reset((__int64 *)a1 + 26);
  PixelFormatColorSpace = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))a1 + 17))(
                            *((_QWORD *)a1 + 17),
                            &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                            (char *)a1 + 208);
  if ( PixelFormatColorSpace < 0 )
  {
    v10 = 84LL;
    goto LABEL_3;
  }
  return 0LL;
}
