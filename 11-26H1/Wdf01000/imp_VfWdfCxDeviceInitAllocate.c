/*
 * XREFs of imp_VfWdfCxDeviceInitAllocate @ 0x1400DE4F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFCXDEVICE_INIT *__fastcall imp_VfWdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  return WdfVersion.Functions.pfnWdfCxDeviceInitAllocate(DriverGlobals, DeviceInit);
}
