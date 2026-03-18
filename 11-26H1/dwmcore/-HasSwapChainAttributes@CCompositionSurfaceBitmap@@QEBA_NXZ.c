/*
 * XREFs of ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801895D8
 * Callers:
 *     ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x180189550 (-HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x180283EE0 (-HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSurfaceBitmap::HasSwapChainAttributes(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 304LL))(v1) != 0;
  return v2;
}
