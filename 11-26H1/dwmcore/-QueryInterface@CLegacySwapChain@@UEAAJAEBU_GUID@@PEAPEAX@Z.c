/*
 * XREFs of ?QueryInterface@CLegacySwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016EDC0
 * Callers:
 *     ?QueryInterface@CDDisplaySwapChain@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029AF20 (-QueryInterface@CDDisplaySwapChain@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029AF40 (-QueryInterface@CConversionSwapChain@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029AF50 (-QueryInterface@CConversionSwapChain@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CConversionSwapChain@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A7B20 (-QueryInterface@CConversionSwapChain@@WCAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CLegacySwapChain::QueryInterface(CLegacySwapChain *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalQueryInterface(this, a2, a3);
}
