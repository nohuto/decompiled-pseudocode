/*
 * XREFs of imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice @ 0x1400E11A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfPdoRemoveEjectionRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfPdoRemoveEjectionRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
