/*
 * XREFs of ?CreateIndirectSwapchainRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800A9EF0
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800D054C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateIndirectSwapchainRenderTargetProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CIndirectSwapchainRenderTargetProxy>(this, a2);
}
