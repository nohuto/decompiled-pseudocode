/*
 * XREFs of WPP_IFR_SF_ql @ 0x1400868F4
 * Callers:
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x14001BEF0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x14001DB58 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047130 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     imp_WdfDmaTransactionInitialize @ 0x14005C580 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfDmaTransactionExecute @ 0x1400607E0 (imp_WdfDmaTransactionExecute.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1400617E8 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x140063F3C (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x140070550 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x140087390 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1400874A0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1400877F8 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008793C (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z @ 0x140088C54 (-GetTransferInfo@FxDmaTransactionBase@@QEAAXPEAK0@Z.c)
 *     ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x140089118 (-SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z.c)
 * Callees:
 *     FxIFR @ 0x140032A50 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_ql(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        int _a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, (flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        43LL,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 4LL, 0LL);
}
