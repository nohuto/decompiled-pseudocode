/*
 * XREFs of ?AddRef@CDummyRemotingSwapChain@@W7EAAKXZ @ 0x180226DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::AddRef(__int64 a1)
{
  return CDDASwapChain::AddRef((CDDASwapChain *)(a1 - 8));
}
