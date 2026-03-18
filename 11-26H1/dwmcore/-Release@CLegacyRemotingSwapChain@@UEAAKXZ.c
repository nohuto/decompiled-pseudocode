/*
 * XREFs of ?Release@CLegacyRemotingSwapChain@@UEAAKXZ @ 0x1802A3170
 * Callers:
 *     ?Release@CLegacyRemotingSwapChain@@W7EAAKXZ @ 0x1802A3180 (-Release@CLegacyRemotingSwapChain@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacyRemotingSwapChain::Release(__int64 this)
{
  return CMILRefCountBaseT<ILegacyRemotingSwapChain,CMilObjectDeleter>::InternalRelease(this);
}
