/*
 * XREFs of imp_VfWdfRequestFormatRequestUsingCurrentType @ 0x1400E1A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request)
{
  WdfVersion.Functions.pfnWdfRequestFormatRequestUsingCurrentType(DriverGlobals, Request);
}
