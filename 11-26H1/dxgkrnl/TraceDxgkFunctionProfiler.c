/*
 * XREFs of TraceDxgkFunctionProfiler @ 0x14000EE30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall TraceDxgkFunctionProfiler(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  void *v4; // rdx
  __int64 result; // rax

  v3 = a1;
  if ( a2 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      return McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, (unsigned int)a1);
    return result;
  }
  if ( a2 == 2 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
      return result;
    v4 = &EventProfilerExit;
    return McTemplateK0q_EtwWriteTransfer(a1, v4, a3, v3);
  }
  if ( a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3159;
    result = DxgkLogInternalTriageEvent(
               0,
               262146,
               -1,
               (unsigned int)L"EventType == EVENT_TRACE_TYPE_INFO",
               3159LL,
               0LL,
               0LL,
               0LL,
               0LL);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
  {
    v4 = &EventProfilerInfo;
    return McTemplateK0q_EtwWriteTransfer(a1, v4, a3, v3);
  }
  return result;
}
