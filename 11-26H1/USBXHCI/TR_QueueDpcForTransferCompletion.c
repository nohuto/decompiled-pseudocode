/*
 * XREFs of TR_QueueDpcForTransferCompletion @ 0x140016E34
 * Callers:
 *     Isoch_Transfer_CompleteCancelable @ 0x140014110 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Transfer_Complete @ 0x140016AB4 (Isoch_Transfer_Complete.c)
 *     Isoch_EP_ReclaimTransfers @ 0x140016B90 (Isoch_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x140016C30 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Control_EP_ReclaimTransfers @ 0x140016D20 (Control_EP_ReclaimTransfers.c)
 *     Bulk_EP_ReclaimTransfers @ 0x140016DA0 (Bulk_EP_ReclaimTransfers.c)
 *     Bulk_WdfEvtRequestCancel @ 0x140020040 (Bulk_WdfEvtRequestCancel.c)
 *     Control_EP_StartMapping @ 0x140032DD0 (Control_EP_StartMapping.c)
 *     Bulk_EP_OkToReclaimTransfersOnCancel @ 0x140033750 (Bulk_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1400354D0 (Isoch_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x140038570 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Control_EP_OkToReclaimTransfersOnCancel @ 0x14004C290 (Control_EP_OkToReclaimTransfersOnCancel.c)
 *     Control_WdfEvtRequestCancel @ 0x14004C750 (Control_WdfEvtRequestCancel.c)
 *     Isoch_EP_OkToReclaimTransfersOnCancel @ 0x14004CD30 (Isoch_EP_OkToReclaimTransfersOnCancel.c)
 *     Isoch_WdfEvtIoCanceledOnQueue @ 0x14004D010 (Isoch_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_QueueDpcForTransferCompletion(_QWORD *a1)
{
  if ( *(_BYTE *)(a1[5] + 1001LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
             WdfDriverGlobals,
             a1[11]);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 896))(WdfDriverGlobals, a1[10]);
}
