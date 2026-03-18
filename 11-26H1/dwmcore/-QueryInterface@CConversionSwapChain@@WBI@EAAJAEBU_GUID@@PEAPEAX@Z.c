/*
 * XREFs of ?QueryInterface@CConversionSwapChain@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029AF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CLegacySwapChain::QueryInterface((CLegacySwapChain *)(a1 - 24), a2, a3);
}
