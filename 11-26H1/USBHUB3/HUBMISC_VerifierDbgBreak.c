/*
 * XREFs of HUBMISC_VerifierDbgBreak @ 0x1400341F4
 * Callers:
 *     HUBHTX_CheckAndSelectIfAny20PortChangeSet @ 0x140002B80 (HUBHTX_CheckAndSelectIfAny20PortChangeSet.c)
 *     HUBHTX_CheckAndSelectIfAny30PortChangeSet @ 0x140002CE8 (HUBHTX_CheckAndSelectIfAny30PortChangeSet.c)
 *     HUBHTX_Get20PortChangeEvent @ 0x14000371C (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x140003AF0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x140004814 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x140004AFC (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_HubControlTransferComplete @ 0x1400052D0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_PortControlTransferComplete @ 0x1400054C0 (HUBHTX_PortControlTransferComplete.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x140005ED0 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x140008040 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x140008890 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x140008B00 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000F100 (HUBFDO_SetupHubPostErrataQuery.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x140018750 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_ValidateSelectConfigUrb @ 0x14001C108 (HUBPDO_ValidateSelectConfigUrb.c)
 *     HUBUCX_UCXIoctlComplete @ 0x140028F10 (HUBUCX_UCXIoctlComplete.c)
 *     HUBDTX_ControlTransferComplete @ 0x14002A510 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x14002DE04 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 *     HUBMISC_CheckIfSerialNumberIsIdentical @ 0x14002E644 (HUBMISC_CheckIfSerialNumberIsIdentical.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x140030684 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030F10 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_LogDescriptorValidationWarningForDevice @ 0x140031000 (HUBMISC_LogDescriptorValidationWarningForDevice.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1400310E8 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_LogResetTimeout @ 0x140031180 (HUBMISC_LogResetTimeout.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x140031228 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     FWUPDATE_HubVendorControlTransferComplete @ 0x1400425A0 (FWUPDATE_HubVendorControlTransferComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_sq @ 0x140034FDC (WPP_RECORDER_SF_sq.c)
 */

BOOLEAN __fastcall HUBMISC_VerifierDbgBreak(const char *a1, __int64 a2)
{
  int v3; // edx
  int v4; // eax
  BOOLEAN result; // al

  DbgPrint("USB Hardware Verifier Break for %s\n", a1);
  v4 = *(_DWORD *)(a2 + 984);
  switch ( v4 )
  {
    case 2000:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 2536LL), v3, 3, 87);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !hub_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 2536LL));
      break;
    case 3000:
LABEL_5:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL), v3, 4, 88);
      DbgPrint("Run !rcdrlogdump usbhub3 -a 0x%p, !port_info 0x%p\n", *(_QWORD *)(*(_QWORD *)(a2 + 960) + 1432LL));
      break;
    case 4000:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sq(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL), v3, 4, 89);
      DbgPrint(
        "Run !rcdrlogdump usbhub3 -a 0x%p, !device_info 0x%p\n",
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 960) + 8LL) + 1432LL));
      break;
    case 5000:
      goto LABEL_5;
    default:
      break;
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
    __debugbreak();
  return result;
}
