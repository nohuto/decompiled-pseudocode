/*
 * XREFs of imp_VfWdfDmaTransactionExecute @ 0x1400DF4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        void *Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, void *))WdfVersion.Functions.pfnWdfDmaTransactionExecute)(
           DriverGlobals,
           DmaTransaction,
           Context);
}
