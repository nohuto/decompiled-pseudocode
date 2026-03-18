/*
 * XREFs of Controller_IsSecureDevice @ 0x1400357A8
 * Callers:
 *     CommonBuffer_Create @ 0x140073204 (CommonBuffer_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x140073764 (Command_CreateCommandWatchdogTimer.c)
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x14007804C (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140078FC0 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1400794C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Interrupter_CreateInterrupter @ 0x14007ADE8 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x14007C7CC (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x14007CAB0 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x14007D3E0 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007D980 (RootHub_PrepareHardware.c)
 *     Control_Initialize @ 0x14007FEA0 (Control_Initialize.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x140080470 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Endpoint_Create @ 0x1400806CC (Endpoint_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140080F38 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     TR_Create @ 0x140081594 (TR_Create.c)
 *     Bulk_GetConfiguration @ 0x140081D80 (Bulk_GetConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 1001);
}
