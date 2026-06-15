/*
 * XREFs of sub_1400405B0 @ 0x1400405B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400405B0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // ecx

  v4 = 0;
  v5 = a1 - 4;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      TraceHandle = 0LL;
      dword_1400B7008 = 0;
      dword_1400B7018 = 0;
    }
    else
    {
      return 87;
    }
  }
  else
  {
    TraceHandle = EtwGetTraceLoggerHandle(a4);
    dword_1400B7008 = (unsigned __int8)EtwGetTraceEnableLevel(TraceHandle);
    dword_1400B7018 = EtwGetTraceEnableFlags(TraceHandle);
  }
  return v4;
}
