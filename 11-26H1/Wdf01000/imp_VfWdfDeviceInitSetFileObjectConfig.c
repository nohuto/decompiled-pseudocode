/*
 * XREFs of imp_VfWdfDeviceInitSetFileObjectConfig @ 0x1400DEC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FILEOBJECT_CONFIG *FileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetFileObjectConfig(
    DriverGlobals,
    DeviceInit,
    FileObjectConfig,
    FileObjectAttributes);
}
