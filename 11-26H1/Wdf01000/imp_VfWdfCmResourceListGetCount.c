/*
 * XREFs of imp_VfWdfCmResourceListGetCount @ 0x1400DE1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfCmResourceListGetCount(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCMRESLIST__ *))WdfVersion.Functions.pfnWdfCmResourceListGetCount)(
           DriverGlobals,
           List);
}
