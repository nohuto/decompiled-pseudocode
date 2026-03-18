/*
 * XREFs of imp_VfWdfDmaTransactionGetRequest @ 0x1400DF540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

WDFREQUEST__ *__fastcall imp_VfWdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetRequest(DriverGlobals, DmaTransaction);
}
