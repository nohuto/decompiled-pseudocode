/*
 * XREFs of Controller_ReportFatalError @ 0x140020E40
 * Callers:
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1400017D0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1400054F4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x140005860 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1400065C0 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     Controller_CheckHealth @ 0x14000D2D0 (Controller_CheckHealth.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x14001DF10 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140020330 (Control_ProcessTransferEventWithED1.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140022380 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140022880 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140022C20 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Endpoint_TransferEventHandler @ 0x140024A30 (Endpoint_TransferEventHandler.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x140026930 (UsbDevice_DeviceResetCompletion.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002B0C0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x14002E130 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002F314 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002FE60 (IoControl_WdfEvtIoDeviceControl.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     Control_ValidateED0TrbPointerOnMismatch @ 0x14003D0E0 (Control_ValidateED0TrbPointerOnMismatch.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_EvtIoInternalDeviceControl @ 0x140040F50 (Controller_EvtIoInternalDeviceControl.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140042268 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x140048680 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x14004892C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc @ 0x14004B750 (RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc.c)
 *     Bulk_ValidateED0TrbPointerOnMismatch @ 0x14004DBE4 (Bulk_ValidateED0TrbPointerOnMismatch.c)
 * Callees:
 *     Controller_ReportFatalErrorEx @ 0x140021FAC (Controller_ReportFatalErrorEx.c)
 */

__int64 __fastcall Controller_ReportFatalError(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return Controller_ReportFatalErrorEx(a1, a2, a3, a4, 0LL, a5, a6, a7);
}
