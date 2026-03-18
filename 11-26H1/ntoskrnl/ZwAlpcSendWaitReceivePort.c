/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1407245B0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     SepRmDispatchDataToLsa @ 0x1404DDA94 (SepRmDispatchDataToLsa.c)
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E9848 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     DifZwAlpcSendWaitReceivePortWrapper @ 0x14069BB30 (DifZwAlpcSendWaitReceivePortWrapper.c)
 *     SshpAlpcMessageCallback @ 0x1407E4760 (SshpAlpcMessageCallback.c)
 *     SshpAlpcProcessAlpcMessage @ 0x1407E48A4 (SshpAlpcProcessAlpcMessage.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     PopUmpoProcessMessages @ 0x140AAA08C (PopUmpoProcessMessages.c)
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 *     PopMonitorProcessLoop @ 0x140B24F78 (PopMonitorProcessLoop.c)
 *     IopSendMessageToTrackService @ 0x140B4EAA4 (IopSendMessageToTrackService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
