/*
 * XREFs of PerfDiagpBootSystemProxyCallback @ 0x14081ED60
 * Callers:
 *     <none>
 * Callees:
 *     PerfDiagpRequestState @ 0x140B2E60C (PerfDiagpRequestState.c)
 */

void __fastcall PerfDiagpBootSystemProxyCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx

  if ( (_DWORD)ControlCode )
  {
    if ( (_BYTE)Level != 85 )
      return;
    v4 = 1LL;
  }
  else
  {
    v4 = 2LL;
  }
  PerfDiagpRequestState(v4, ControlCode, Level, MatchAnyKeyword);
}
