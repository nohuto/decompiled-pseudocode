/*
 * XREFs of ?AddRef@CDDASwapChain@@UEAAKXZ @ 0x1801D7F60
 * Callers:
 *     ?AddRef@CDummyRemotingSwapChain@@W7EAAKXZ @ 0x180226DA0 (-AddRef@CDummyRemotingSwapChain@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::AddRef(CDDASwapChain *this)
{
  return CMILRefCountImpl::AddReference((CDDASwapChain *)((char *)this + 16));
}
