/*
 * XREFs of imp_VfWdfDmaEnablerGetMaximumScatterGatherElements @ 0x1400DF370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumScatterGatherElements(DriverGlobals, DmaEnabler);
}
