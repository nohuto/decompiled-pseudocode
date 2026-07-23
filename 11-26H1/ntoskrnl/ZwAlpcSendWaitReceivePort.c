/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x140729180
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     SepRmDispatchDataToLsa @ 0x1404D7174 (SepRmDispatchDataToLsa.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E2BF8 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x14069F710 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     SshpAlpcMessageCallback @ 0x1407EA2C0 (SshpAlpcMessageCallback.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407EA404 (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessages @ 0x140AA766C (PopUmpoProcessMessages.c)
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 *     PopMonitorProcessLoop @ 0x140B27108 (PopMonitorProcessLoop.c)
 *     IopSendMessageToTrackService @ 0x140B51334 (IopSendMessageToTrackService.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
