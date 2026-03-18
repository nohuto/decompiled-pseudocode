/*
 * XREFs of imp_VfWdfDeviceGetDefaultQueue @ 0x1400DE950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFQUEUE__ *__fastcall imp_VfWdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDefaultQueue(DriverGlobals, Device);
}
