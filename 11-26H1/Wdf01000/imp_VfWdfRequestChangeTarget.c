/*
 * XREFs of imp_VfWdfRequestChangeTarget @ 0x1400E1580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestChangeTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfRequestChangeTarget)(
           DriverGlobals,
           Request,
           IoTarget);
}
