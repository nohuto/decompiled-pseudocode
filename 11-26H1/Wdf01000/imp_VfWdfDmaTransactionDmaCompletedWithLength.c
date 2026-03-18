/*
 * XREFs of imp_VfWdfDmaTransactionDmaCompletedWithLength @ 0x1400DF480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionDmaCompletedWithLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 TransferredLength,
        int *Status)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, unsigned __int64, int *))WdfVersion.Functions.pfnWdfDmaTransactionDmaCompletedWithLength)(
           DriverGlobals,
           DmaTransaction,
           TransferredLength,
           Status);
}
