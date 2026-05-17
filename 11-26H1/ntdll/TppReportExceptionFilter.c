/*
 * XREFs of TppReportExceptionFilter @ 0x1801593DC
 * Callers:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TpCheckTerminateWorker @ 0x180086AD0 (TpCheckTerminateWorker.c)
 * Callees:
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(_QWORD *a1)
{
  RtlReportException(*a1, a1[1], 3LL);
  return 0LL;
}
