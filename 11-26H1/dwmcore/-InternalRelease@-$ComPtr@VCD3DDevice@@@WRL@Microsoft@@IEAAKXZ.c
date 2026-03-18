/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18026B088
 * Callers:
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18026AF0C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18026B298 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease(CD3DDevice **a1)
{
  CD3DDevice *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CD3DDevice::Release(v1);
  }
  return result;
}
