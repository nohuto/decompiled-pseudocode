/*
 * XREFs of imp_VfWdfRequestGetFileObject @ 0x1400E1A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetFileObject(DriverGlobals, Request);
}
