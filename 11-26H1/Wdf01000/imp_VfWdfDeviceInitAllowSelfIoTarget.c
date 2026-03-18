/*
 * XREFs of imp_VfWdfDeviceInitAllowSelfIoTarget @ 0x1400DEAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitAllowSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitAllowSelfIoTarget(DriverGlobals, DeviceInit);
}
