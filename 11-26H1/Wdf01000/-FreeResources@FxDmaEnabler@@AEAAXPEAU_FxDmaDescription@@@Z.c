/*
 * XREFs of ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x140089EA0
 * Callers:
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x14008A654 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaEnabler::FreeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _DMA_ADAPTER *AdapterObject; // rcx

  AdapterObject = AdapterInfo->AdapterObject;
  if ( AdapterObject )
  {
    ((void (*)(void))AdapterObject->DmaOperations->PutDmaAdapter)();
    AdapterInfo->AdapterObject = 0LL;
  }
}
