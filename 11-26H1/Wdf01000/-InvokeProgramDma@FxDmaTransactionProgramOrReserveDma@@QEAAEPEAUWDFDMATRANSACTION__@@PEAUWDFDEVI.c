/*
 * XREFs of ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x14001FAA8
 * Callers:
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x14001F2F0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
        FxDmaTransactionProgramOrReserveDma *this,
        WDFDMATRANSACTION__ *Transaction,
        WDFDEVICE__ *Device,
        void *Context,
        unsigned int Direction,
        _SCATTER_GATHER_LIST *SgList))(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _QWORD, _SCATTER_GATHER_LIST *)
{
  __int64 (__fastcall *result)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _QWORD, _SCATTER_GATHER_LIST *); // rax

  result = (__int64 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _QWORD, _SCATTER_GATHER_LIST *))this->Method.ProgramDma;
  if ( this->Method.ProgramDma )
    return (__int64 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _QWORD, _SCATTER_GATHER_LIST *))result(Transaction, Device, Context, Direction, SgList);
  return result;
}
