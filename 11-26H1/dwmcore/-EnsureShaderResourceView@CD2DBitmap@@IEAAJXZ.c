/*
 * XREFs of ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x180130D80
 * Callers:
 *     ?GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x180130D10 (-GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x180130D50 (-GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180130F00 (-CreateShaderResourceView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DE.c)
 *     ?reset@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801851A0 (-reset@-$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x1801D4C5C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::EnsureShaderResourceView(CD2DBitmap *this)
{
  __int64 result; // rax
  int v3; // eax
  bool v4; // cc
  CD3DDevice *v5; // rbx
  const struct D3D11_SHADER_RESOURCE_VIEW_DESC *v6; // r8
  unsigned int v7; // ebx
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v9)(struct IBitmapResource *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _OWORD *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+28h] BYREF
  __int64 v17; // [rsp+88h] [rbp+30h] BYREF

  if ( *((_QWORD *)this + 14) )
    return 0LL;
  if ( !*((_QWORD *)this + 13) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x250u, 0LL);
    return 2291674884LL;
  }
  v3 = *((_DWORD *)this + 44);
  if ( (v3 & 0x400000) != 0 )
  {
    v16 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(this);
    v9 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v16);
    v10 = v9(StockBlackBitmap, &v16);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x241u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CD2DBitmap *, _OWORD *))(*(_QWORD *)this + 64LL))(this, v15);
      v11 = v16;
      DWORD2(v15[0]) = -1;
      *(_QWORD *)((char *)v15 + 12) = 0LL;
      BYTE4(v15[1]) = 0;
      *(_WORD *)((char *)&v15[1] + 5) = 0;
      BYTE7(v15[1]) = 0;
      v17 = 0LL;
      v12 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)v16 + 104LL);
      wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::reset(&v17);
      v13 = v12(v11, v15, &v17);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x249u, 0LL);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 128LL))(v17);
        wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 14, v14);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    return v7;
  }
  if ( (v3 & 8) == 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292287, 0x239u, 0LL);
    return 2291675009LL;
  }
  v4 = *((_DWORD *)this + 39) <= 1u;
  memset(v15, 0, 24);
  if ( !v4 )
  {
    LODWORD(v15[0]) = *((_DWORD *)this + 40);
    HIDWORD(v15[0]) = *((_DWORD *)this + 38);
    LODWORD(v15[1]) = *((_DWORD *)this + 58);
    *(_QWORD *)((char *)v15 + 4) = 5LL;
    DWORD1(v15[1]) = 1;
  }
  v5 = (CD3DDevice *)(*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 40LL))(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
  v6 = (const struct D3D11_SHADER_RESOURCE_VIEW_DESC *)v15;
  if ( *((_DWORD *)this + 39) <= 1u )
    v6 = 0LL;
  result = CD3DDevice::CreateShaderResourceView(
             v5,
             *((struct ID3D11Resource **)this + 13),
             v6,
             (struct ID3D11ShaderResourceView **)this + 14);
  v7 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x235u, 0LL);
    return v7;
  }
  return result;
}
