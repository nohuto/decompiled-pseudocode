/*
 * XREFs of imp_VfWdfRequestGetParameters @ 0x1400E1AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  WdfVersion.Functions.pfnWdfRequestGetParameters(DriverGlobals, Request, Parameters);
}
