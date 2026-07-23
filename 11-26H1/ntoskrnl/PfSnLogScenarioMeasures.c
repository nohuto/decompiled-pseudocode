/*
 * XREFs of PfSnLogScenarioMeasures @ 0x1404D1D2C
 * Callers:
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 */

__int64 __fastcall PfSnLogScenarioMeasures(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  _OWORD *v4; // rax
  _OWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  result = PfSnTraceGetLogEntry(a1, 3u, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *v5 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *(_QWORD *)v4 = 39LL;
    v4[1] = *a2;
    return 0LL;
  }
  return result;
}
