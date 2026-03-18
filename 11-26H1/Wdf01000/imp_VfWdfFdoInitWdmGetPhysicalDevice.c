/*
 * XREFs of imp_VfWdfFdoInitWdmGetPhysicalDevice @ 0x1400DFB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfFdoInitWdmGetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  return WdfVersion.Functions.pfnWdfFdoInitWdmGetPhysicalDevice(DriverGlobals, DeviceInit);
}
