/*
 * XREFs of imp_VfWdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1400DEF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceRemoveRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveRemovalRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
