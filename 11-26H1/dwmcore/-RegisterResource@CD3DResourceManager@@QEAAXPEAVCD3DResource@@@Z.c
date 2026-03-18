/*
 * XREFs of ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F8180
 * Callers:
 *     ?Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z @ 0x1800F7EB0 (-Initialize@CD3DConstantBuffer@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11Buffer@@@Z.c)
 *     ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x1800F85A8 (-Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1801BAF80 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x1802959FC (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x1802A4924 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 * Callees:
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298480 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceManager::RegisterResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  char *v2; // rax
  char **v4; // rcx
  char *v6; // rdx
  unsigned int v7; // edx

  v2 = (char *)this + 32;
  v4 = (char **)*((_QWORD *)this + 5);
  v6 = (char *)a2 + 96;
  if ( *v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)v6 = v2;
  *((_QWORD *)v6 + 1) = v4;
  *v4 = v6;
  *((_QWORD *)v2 + 1) = v6;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 56LL))(a2) )
    *((_BYTE *)a2 + 117) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    *((_BYTE *)a2 + 116) = 1;
    ++*((_DWORD *)this + 18);
    if ( *((_BYTE *)a2 + 117) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
  }
  v7 = *((_DWORD *)this + 12) + *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 12) = v7;
  if ( *((_DWORD *)this + 13) < v7 )
    *((_DWORD *)this + 13) = v7;
}
