/*
 * XREFs of ?Release@CConversionSwapChain@@UEAAKXZ @ 0x1800E1200
 * Callers:
 *     ?Release@CDDisplaySwapChain@@WBAA@EAAKXZ @ 0x18029AF60 (-Release@CDDisplaySwapChain@@WBAA@EAAKXZ.c)
 *     ?Release@CLegacySwapChain@@WBI@EAAKXZ @ 0x18029AF80 (-Release@CLegacySwapChain@@WBI@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@WCA@EAAKXZ @ 0x18029AF90 (-Release@CConversionSwapChain@@WCA@EAAKXZ.c)
 *     ?Release@CConversionSwapChain@@WCAA@EAAKXZ @ 0x1802A7B40 (-Release@CConversionSwapChain@@WCAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CConversionSwapChain::Release(CConversionSwapChain *this)
{
  return CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(this);
}
