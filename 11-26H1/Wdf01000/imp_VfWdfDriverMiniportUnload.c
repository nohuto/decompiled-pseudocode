/*
 * XREFs of imp_VfWdfDriverMiniportUnload @ 0x1400DF890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDriverMiniportUnload(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  WdfVersion.Functions.pfnWdfDriverMiniportUnload(DriverGlobals, Driver);
}
