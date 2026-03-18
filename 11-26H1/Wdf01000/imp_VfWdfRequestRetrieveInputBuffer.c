/*
 * XREFs of imp_VfWdfRequestRetrieveInputBuffer @ 0x1400E1C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 MinimumRequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, unsigned __int64, void **, unsigned __int64 *))WdfVersion.Functions.pfnWdfRequestRetrieveInputBuffer)(
           DriverGlobals,
           Request,
           MinimumRequiredLength,
           Buffer,
           Length);
}
