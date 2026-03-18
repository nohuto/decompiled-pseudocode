/*
 * XREFs of imp_VfWdfDeviceGetFileObject @ 0x1400DEA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _FILE_OBJECT *FileObject)
{
  return WdfVersion.Functions.pfnWdfDeviceGetFileObject(DriverGlobals, Device, FileObject);
}
