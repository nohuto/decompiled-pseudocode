/*
 * XREFs of imp_VfWdfWmiInstanceGetProvider @ 0x1400E2930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFWMIPROVIDER__ *__fastcall imp_VfWdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetProvider(DriverGlobals, WmiInstance);
}
