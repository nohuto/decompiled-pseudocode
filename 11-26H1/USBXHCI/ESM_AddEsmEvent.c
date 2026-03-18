/*
 * XREFs of ESM_AddEsmEvent @ 0x14001F8C0
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017D0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1400048E4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1400054F4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x140005860 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1400065C0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1400145DC (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x140015174 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x14001C798 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x14001DF10 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x14001E4F4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 *     Bulk_EP_ProcessExpectedEventTRBs @ 0x14001F810 (Bulk_EP_ProcessExpectedEventTRBs.c)
 *     TR_TransfersReclaimed @ 0x14001FF88 (TR_TransfersReclaimed.c)
 *     Control_ProcessTransferEventWithED0 @ 0x140021C4C (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140022380 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140022880 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140022C20 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002B0C0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Bulk_EP_StopMapping @ 0x140030990 (Bulk_EP_StopMapping.c)
 *     Endpoint_ClearStallTransferCompletion @ 0x140030A20 (Endpoint_ClearStallTransferCompletion.c)
 *     Control_EP_StopMapping @ 0x140033870 (Control_EP_StopMapping.c)
 *     Isoch_WdfEvtRequestCancel @ 0x1400354D0 (Isoch_WdfEvtRequestCancel.c)
 *     Control_WdfEvtTimerForTransferTimeout @ 0x140038570 (Control_WdfEvtTimerForTransferTimeout.c)
 *     Isoch_EP_ProcessExpectedEventTRBs @ 0x14003D040 (Isoch_EP_ProcessExpectedEventTRBs.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140048100 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x140048370 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x140048680 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_WdfEvtStateMachineTimer @ 0x1400492E0 (Endpoint_WdfEvtStateMachineTimer.c)
 *     Control_EP_ProcessExpectedEventTRBs @ 0x14004C320 (Control_EP_ProcessExpectedEventTRBs.c)
 *     Control_WdfEvtRequestCancel @ 0x14004C750 (Control_WdfEvtRequestCancel.c)
 *     UsbDevice_ControllerGone @ 0x14004E184 (UsbDevice_ControllerGone.c)
 *     UsbDevice_ControllerResetPostReset @ 0x14004E260 (UsbDevice_ControllerResetPostReset.c)
 * Callees:
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 */

__int64 __fastcall ESM_AddEsmEvent(__int64 a1)
{
  return ESM_AddEvent((PVOID)(a1 + 304));
}
