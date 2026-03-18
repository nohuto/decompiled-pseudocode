/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceClass @ 0x1400DEC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceClass(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceClass(DriverGlobals, DeviceInit, DeviceClassGuid);
}
