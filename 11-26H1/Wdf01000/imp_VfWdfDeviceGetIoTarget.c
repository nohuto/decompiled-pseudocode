/*
 * XREFs of imp_VfWdfDeviceGetIoTarget @ 0x1400DEA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetIoTarget(DriverGlobals, Device);
}
