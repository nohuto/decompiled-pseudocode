/*
 * XREFs of imp_VfWdfDeviceInitSetPowerInrush @ 0x1400DED10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerInrush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerInrush(DriverGlobals, DeviceInit);
}
