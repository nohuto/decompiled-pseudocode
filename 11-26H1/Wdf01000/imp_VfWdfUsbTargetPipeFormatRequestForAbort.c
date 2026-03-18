/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForAbort @ 0x1400E2570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForAbort(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForAbort)(
           DriverGlobals,
           Pipe,
           Request);
}
