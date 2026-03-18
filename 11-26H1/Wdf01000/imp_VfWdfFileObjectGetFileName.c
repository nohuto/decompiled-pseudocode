/*
 * XREFs of imp_VfWdfFileObjectGetFileName @ 0x1400DFC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

_UNICODE_STRING *__fastcall imp_VfWdfFileObjectGetFileName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetFileName(DriverGlobals, FileObject);
}
