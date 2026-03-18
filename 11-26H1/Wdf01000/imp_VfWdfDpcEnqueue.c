/*
 * XREFs of imp_VfWdfDpcEnqueue @ 0x1400DF790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDPC__ *))WdfVersion.Functions.pfnWdfDpcEnqueue)(
           DriverGlobals,
           Dpc);
}
