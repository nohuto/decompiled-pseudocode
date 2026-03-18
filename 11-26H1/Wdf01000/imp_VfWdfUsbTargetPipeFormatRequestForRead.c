/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForRead @ 0x1400E2590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForRead)(
           DriverGlobals,
           Pipe,
           Request,
           ReadMemory,
           ReadOffset);
}
