/*
 * XREFs of imp_VfWdfDeviceWdmGetPhysicalDevice @ 0x1400DF2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetPhysicalDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetPhysicalDevice(DriverGlobals, Device);
}
