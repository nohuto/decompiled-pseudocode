/*
 * XREFs of ?HasRevealBorder@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAU_D3DCOLORVALUE@@@Z @ 0x180189550
 * Callers:
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801895D8 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180189610 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180189638 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 */

char __fastcall CSwapchainRenderStrategy::HasRevealBorder(
        CSwapchainRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct _D3DCOLORVALUE *a3)
{
  CCompositionSurfaceBitmap *v4; // rdi
  struct _D3DCOLORVALUE v6; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)a2 + 44) == 1 )
    return 0;
  v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)a2 + 23);
  if ( !CCompositionSurfaceBitmap::HasSwapChainAttributes(v4) )
    return 0;
  if ( !(unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v4) )
    return 0;
  CCompositionSurfaceBitmap::GetBorderColor(v4, &v6);
  if ( COERCE_FLOAT(LODWORD(v6.a) & _xmm) < 0.0000011920929 )
    return 0;
  if ( a3 )
    *(struct _D3DCOLORVALUE *)&a3->r = *(struct _D3DCOLORVALUE *)&v6.r;
  return 1;
}
