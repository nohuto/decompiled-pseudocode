/*
 * XREFs of imp_VfWdfDmaTransactionSetImmediateExecution @ 0x1400DF690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetImmediateExecution(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 UseImmediateExecution)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetImmediateExecution(DriverGlobals, DmaTransaction, UseImmediateExecution);
}
