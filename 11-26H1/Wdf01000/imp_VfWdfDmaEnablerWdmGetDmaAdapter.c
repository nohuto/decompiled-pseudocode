/*
 * XREFs of imp_VfWdfDmaEnablerWdmGetDmaAdapter @ 0x1400DF3B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

_DMA_ADAPTER *__fastcall imp_VfWdfDmaEnablerWdmGetDmaAdapter(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        __int64 DmaDirection)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerWdmGetDmaAdapter(DriverGlobals, DmaEnabler, DmaDirection);
}
