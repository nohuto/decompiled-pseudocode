/*
 * XREFs of Controller_HwVerifierBreakIfEnabled @ 0x14001EE08
 * Callers:
 *     Controller_CheckHealth @ 0x14000D2D0 (Controller_CheckHealth.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140012B70 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1400145DC (Isoch_ProcessTransferEventWithED0.c)
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     Endpoint_OnResetEndpointResetCompletion @ 0x14001DF10 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140020330 (Control_ProcessTransferEventWithED1.c)
 *     Control_ProcessTransferEventWithED0 @ 0x140021C4C (Control_ProcessTransferEventWithED0.c)
 *     Endpoint_OnCancelStopCompletion @ 0x140022380 (Endpoint_OnCancelStopCompletion.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x140022880 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140022C20 (Endpoint_OnCancelSetDequeuePointerCompletion.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140023810 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 *     Endpoint_TransferEventHandler @ 0x140024A30 (Endpoint_TransferEventHandler.c)
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x140026930 (UsbDevice_DeviceResetCompletion.c)
 *     Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002B0C0 (Endpoint_ControlEndpointResetSetDequeuePointerCompletion.c)
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x14002BD60 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_SetControllerGone @ 0x14003CE34 (Controller_SetControllerGone.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     Controller_LogDiagnosticsOnD0Exit @ 0x140041F28 (Controller_LogDiagnosticsOnD0Exit.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140042268 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x14004892C (Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure.c)
 *     Controller_ConfigureS0IdleSettings @ 0x140073BAC (Controller_ConfigureS0IdleSettings.c)
 *     Controller_UpdateIdleTimeout @ 0x140081DDC (Controller_UpdateIdleTimeout.c)
 * Callees:
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x140033FB4 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_s @ 0x140036CC4 (WPP_RECORDER_SF_s.c)
 */

char __fastcall Controller_HwVerifierBreakIfEnabled(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        const char *a5,
        __int128 *a6,
        __int128 *a7)
{
  _UNKNOWN **v11; // rax
  __int128 *v12; // rdx
  __int128 *v13; // rcx
  __int128 v15; // [rsp+50h] [rbp-18h] BYREF

  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LOBYTE(v11) = WPP_RECORDER_SF_s(*(_QWORD *)(a1 + 72), a2, a3, a4);
  if ( (a4 & *(_QWORD *)(a1 + 848)) != 0 && !*(_BYTE *)(a1 + 797) )
  {
    DbgPrint("xHCI Hardware Verifier Break: %s\n", a5);
    LOBYTE(v11) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v11 )
      __debugbreak();
  }
  v15 = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x10) != 0 )
  {
    v12 = &v15;
    v13 = &v15;
    if ( a7 )
      v12 = a7;
    if ( a6 )
      v13 = a6;
    LOBYTE(v11) = McTemplateK0pppxsb16b16_EtwWriteTransfer(
                    (_DWORD)v13,
                    (_DWORD)v12,
                    a3,
                    *(_QWORD *)(a1 + 8),
                    a2,
                    a3,
                    a4,
                    (__int64)a5,
                    (__int64)v13,
                    (__int64)v12);
  }
  return (char)v11;
}
