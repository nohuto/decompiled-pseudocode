/*
 * XREFs of ?HasSwapChainContent@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@@Z @ 0x180283EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CSwapchainRenderStrategy::HasSwapChainContent(
        CSwapchainRenderStrategy *this,
        CCompositionSurfaceBitmap **a2)
{
  return CCompositionSurfaceBitmap::HasSwapChainAttributes(a2[23]);
}
