/*
 * XREFs of imp_VfWdfDmaTransactionRelease @ 0x1400DF630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionRelease(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *))WdfVersion.Functions.pfnWdfDmaTransactionRelease)(
           DriverGlobals,
           DmaTransaction);
}
