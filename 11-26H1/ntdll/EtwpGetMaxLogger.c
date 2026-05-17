/*
 * XREFs of EtwpGetMaxLogger @ 0x1800E4EF8
 * Callers:
 *     EtwGetTraceLoggerHandle @ 0x1800E4DF0 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x1800E4E60 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800E4EB0 (EtwGetTraceEnableFlags.c)
 * Callees:
 *     NtTraceControl @ 0x180162A10 (NtTraceControl.c)
 */

__int64 EtwpGetMaxLogger()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  result = (unsigned int)EtwpMaxLoggers;
  v1 = 0;
  if ( !EtwpMaxLoggers )
  {
    if ( (unsigned int)NtTraceControl(42LL, 0LL, 0LL, &EtwpMaxLoggers, 4, &v1) || v1 != 4 )
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
