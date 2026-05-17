/*
 * XREFs of UcpInitOnUnexpectedCodePathOnceCallBack @ 0x180157CF0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18016F69C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 UcpInitOnUnexpectedCodePathOnceCallBack()
{
  __int64 result; // rax

  g_isUcpListInitialized = 1;
  qword_1801CC768 = (__int64)&UcpTriggeredList;
  UcpTriggeredList = (__int64)&UcpTriggeredList;
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801C56C8);
  result = 1LL;
  UcIsTraceLoggingInitialized = 1;
  return result;
}
