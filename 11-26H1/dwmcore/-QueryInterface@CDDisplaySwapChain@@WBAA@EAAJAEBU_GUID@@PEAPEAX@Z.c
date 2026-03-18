/*
 * XREFs of ?QueryInterface@CDDisplaySwapChain@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029AF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - 256), a2, a3);
}
