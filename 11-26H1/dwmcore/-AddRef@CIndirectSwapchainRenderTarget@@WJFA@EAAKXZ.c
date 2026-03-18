/*
 * XREFs of ?AddRef@CIndirectSwapchainRenderTarget@@WJFA@EAAKXZ @ 0x180247150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 2384));
}
