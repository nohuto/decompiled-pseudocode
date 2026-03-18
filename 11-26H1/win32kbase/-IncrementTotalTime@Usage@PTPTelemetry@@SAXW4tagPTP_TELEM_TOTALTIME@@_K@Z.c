/*
 * XREFs of ?IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x14013D0CC
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PTPTelemetry::Usage::IncrementTotalTime(int a1, unsigned __int64 a2, int a3)
{
  _QWORD *result; // rax
  unsigned __int64 v6; // rcx

  result = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  if ( a1 )
  {
    if ( a1 == 1 )
      result[1525] += a2;
  }
  else
  {
    result[1522] += a2;
    if ( a2 > result[1523] )
      result[1523] = a2;
    v6 = result[1524];
    if ( !v6 || a2 < v6 )
      result[1524] = a2;
  }
  return result;
}
