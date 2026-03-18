/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPageable @ 0x1400DED50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPageable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPageable(DriverGlobals, DeviceInit);
}
