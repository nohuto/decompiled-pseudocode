/*
 * XREFs of ?Release@CLegacySwapChain@@WBI@EAAKXZ @ 0x18029AF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacySwapChain::Release(__int64 a1)
{
  return CConversionSwapChain::Release((CConversionSwapChain *)(a1 - 24));
}
