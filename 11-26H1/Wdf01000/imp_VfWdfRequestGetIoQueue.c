/*
 * XREFs of imp_VfWdfRequestGetIoQueue @ 0x1400E1AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFQUEUE__ *__fastcall imp_VfWdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetIoQueue(DriverGlobals, Request);
}
