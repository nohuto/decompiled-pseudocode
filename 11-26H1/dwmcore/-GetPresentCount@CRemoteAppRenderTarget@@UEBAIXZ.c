/*
 * XREFs of ?GetPresentCount@CRemoteAppRenderTarget@@UEBAIXZ @ 0x1802478E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::GetPresentCount(CCompSwapChain **this)
{
  return CCompSwapChain::GetPresentCount(this[1]);
}
