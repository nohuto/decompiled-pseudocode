/*
 * XREFs of ?GetAdapterLuid@CSwapChainRealization@@UEBA?AU_LUID@@XZ @ 0x1802AD0D0
 * Callers:
 *     ?EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ @ 0x1802ACDC4 (-EnsureDisplaySurface@CSwapChainRealization@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall CSwapChainRealization::GetAdapterLuid(CSwapChainRealization *this, _QWORD *a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 64LL))(*((_QWORD *)this + 33));
  else
    *a2 = *((_QWORD *)this + 30);
  return (struct _LUID)a2;
}
