/*
 * XREFs of TppReportExceptionFilter @ 0x1801592AC
 * Callers:
 *     TpCheckTerminateWorker @ 0x18007DE70 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
