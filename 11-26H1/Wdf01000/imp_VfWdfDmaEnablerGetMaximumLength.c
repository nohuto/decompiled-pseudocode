/*
 * XREFs of imp_VfWdfDmaEnablerGetMaximumLength @ 0x1400DF350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetMaximumLength(DriverGlobals, DmaEnabler);
}
