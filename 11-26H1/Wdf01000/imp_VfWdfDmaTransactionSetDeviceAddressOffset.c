/*
 * XREFs of imp_VfWdfDmaTransactionSetDeviceAddressOffset @ 0x1400DF670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetDeviceAddressOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 Offset)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetDeviceAddressOffset(DriverGlobals, DmaTransaction, Offset);
}
