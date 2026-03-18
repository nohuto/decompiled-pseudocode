/*
 * XREFs of ?Release@CDDisplaySwapChain@@WBAA@EAAKXZ @ 0x18029AF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplaySwapChain::Release(__int64 a1)
{
  return CConversionSwapChain::Release((CConversionSwapChain *)(a1 - 256));
}
