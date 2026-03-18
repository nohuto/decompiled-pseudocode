/*
 * XREFs of imp_VfWdfDmaTransactionSetMaximumLength @ 0x1400DF6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetMaximumLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int64 MaximumLength)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetMaximumLength(DriverGlobals, DmaTransaction, MaximumLength);
}
