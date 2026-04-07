/*
 * XREFs of ?CreateIndirectSwapchainRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800A7F8C
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800CBA4C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateIndirectSwapchainRenderTargetProxy(
        struct IDwmChannel **this,
        struct CIndirectSwapchainRenderTargetProxy **a2)
{
  return CResourceProxy::Create<CIndirectSwapchainRenderTargetProxy>(this[3], a2);
}
