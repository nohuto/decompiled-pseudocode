/*
 * XREFs of ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180068EB0
 * Callers:
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x180101F0C (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::Map(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v7; // eax
  int v8; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // r9d
  int v13; // [rsp+70h] [rbp+18h] BYREF

  v13 = a3;
  if ( *((_DWORD *)this + 281) )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0xA2Au, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 69) + 112LL))(
           *((_QWORD *)this + 69),
           a2,
           0LL,
           a4,
           0,
           a6);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA30u, 0LL);
  }
  if ( *((_DWORD *)this + 281)
    || v8 != -2005532292 && v8 != -2147024882 && v8 != -2005270523
    || !*((_DWORD *)this + 110) )
  {
    goto LABEL_8;
  }
  if ( v8 != -2005270523 )
  {
LABEL_16:
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 68) + 312LL))(*((_QWORD *)this + 68));
  v11 = *((_DWORD *)this + 281);
  if ( v10 == -2005270480 )
  {
    if ( v11 )
      goto LABEL_16;
    *((_DWORD *)this + 281) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD3DDevice *)((char *)this + 16));
LABEL_8:
    if ( v8 >= 0 )
      goto LABEL_9;
    goto LABEL_19;
  }
  if ( !v11 )
    *((_DWORD *)this + 281) = -2005270523;
LABEL_19:
  if ( *((_DWORD *)this + 281) )
    return 2291662989LL;
LABEL_9:
  v13 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v8, 0LL, &v13) )
  {
    v12 = v13;
    if ( v13 == -2003304307 )
    {
      if ( v8 >= 0 )
        v8 = -2003304307;
      if ( !*((_DWORD *)this + 281) )
        *((_DWORD *)this + 281) = v8;
    }
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB71u, 0LL);
  }
  return (unsigned int)v8;
}
