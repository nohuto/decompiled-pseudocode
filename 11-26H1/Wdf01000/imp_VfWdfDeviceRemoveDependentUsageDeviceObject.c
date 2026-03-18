/*
 * XREFs of imp_VfWdfDeviceRemoveDependentUsageDeviceObject @ 0x1400DEF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveDependentUsageDeviceObject(DriverGlobals, Device, DependentDevice);
}
