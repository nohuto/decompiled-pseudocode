/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x14069C300
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403D831C (SepRmDispatchDataToLsa.c)
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C2E14 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x1406307F0 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     SshpAlpcMessageCallback @ 0x140758260 (SshpAlpcMessageCallback.c)
 *     SshpAlpcProcessMessage @ 0x1407586A8 (SshpAlpcProcessMessage.c)
 *     SshpAlpcSendMessage @ 0x1407587C8 (SshpAlpcSendMessage.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140A18864 (PopUmpoProcessMessages.c)
 *     SepRmCommandServerThread @ 0x140A4F080 (SepRmCommandServerThread.c)
 *     PopMonitorProcessLoop @ 0x140A7C7B8 (PopMonitorProcessLoop.c)
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
