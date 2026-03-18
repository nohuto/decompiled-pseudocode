/*
 * XREFs of ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x1800F85A8
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800F8320 (-Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F8180 (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DPixelShader::Initialize(
        CD3DPixelShader *this,
        struct CD3DResourceManager *a2,
        int a3,
        struct ID3D11PixelShader *a4)
{
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 28) = a3;
  *((_BYTE *)this + 118) = 1;
  CD3DResourceManager::RegisterResource(a2, this);
  *((_QWORD *)this + 15) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))a4->lpVtbl->AddRef)(a4);
  return 0LL;
}
