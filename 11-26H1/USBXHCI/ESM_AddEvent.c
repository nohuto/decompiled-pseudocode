/*
 * XREFs of ESM_AddEvent @ 0x140020E80
 * Callers:
 *     Control_MapTransfer @ 0x14000E500 (Control_MapTransfer.c)
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x14001EF10 (Endpoint_UcxEvtEndpointOkToCancelTransfers.c)
 *     ESM_WaitingForFSEAfterStopEndpointCommandCompletion @ 0x14001EF60 (ESM_WaitingForFSEAfterStopEndpointCommandCompletion.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x14001F150 (Endpoint_UcxEvtEndpointReset.c)
 *     Endpoint_Enable @ 0x14001F2E0 (Endpoint_Enable.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x14001F810 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     TR_TransfersReclaimed @ 0x14001FF88 (TR_TransfersReclaimed.c)
 *     Bulk_WdfEvtRequestCancel @ 0x140020040 (Bulk_WdfEvtRequestCancel.c)
 *     TR_AttemptStateChange @ 0x140020250 (TR_AttemptStateChange.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140020330 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140022380 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140022880 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140022C20 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x140022E08 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 *     Endpoint_TransferEventHandler @ 0x140024A30 (Endpoint_TransferEventHandler.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002B0C0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 * Callees:
 *     ESM_RunStateMachine @ 0x140020FDC (ESM_RunStateMachine.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1400215A0 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall ESM_AddEvent(KSPIN_LOCK *Context, int a2)
{
  KSPIN_LOCK *v2; // rsi
  KSPIN_LOCK v5; // rdx
  __int64 v6; // rax
  KIRQL NewIrql; // [rsp+48h] [rbp+10h]

  v2 = Context + 105;
  NewIrql = KeAcquireSpinLockRaiseToDpc(Context + 105);
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 833) + 192) = a2;
  *((_BYTE *)Context + 833) = (*((_BYTE *)Context + 833) + 1) & 0xF;
  if ( *((_BYTE *)Context + 1016) )
  {
    if ( a2 != 126 )
    {
      *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
      *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
      goto LABEL_5;
    }
    *((_BYTE *)Context + 1016) = 0;
    ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    goto LABEL_4;
  }
  *((_DWORD *)Context + *((unsigned __int8 *)Context + 949) + 221) = a2;
  *((_BYTE *)Context + 949) = (*((_BYTE *)Context + 949) + 1) & 0xF;
  if ( !*((_BYTE *)Context + 848) )
  {
    v5 = Context[120];
    *((_BYTE *)Context + 848) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, KSPIN_LOCK))(WdfFunctions_01033 + 1632))(WdfDriverGlobals, v5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01033 + 1640))(
      WdfDriverGlobals,
      v6,
      "State Machine Tag",
      1021LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
LABEL_4:
    ESM_RunStateMachine(Context);
  }
LABEL_5:
  KeReleaseSpinLock(v2, NewIrql);
}
