/*
 * XREFs of EtwpGetMaxLogger @ 0x1800E2DA8
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x1800E2CA0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800E2D10 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800E2D60 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x180162910 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  ReturnLength = 0;
  if ( !EtwpMaxLoggers )
  {
    if ( NtTraceControl(EtwMaxLoggers, 0LL, 0, &EtwpMaxLoggers, 4u, &ReturnLength) || ReturnLength != 4 )
    {
      result = 128LL;
      EtwpMaxLoggers = 128;
    }
    else
    {
      return (unsigned int)EtwpMaxLoggers;
    }
  }
  return result;
}
