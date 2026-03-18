/*
 * XREFs of ?IncrementTotalTime@Usage@PTPTelemetry@@SAXW4tagPTP_TELEM_TOTALTIME@@_K@Z @ 0x140130614
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PTPTelemetry::Usage::IncrementTotalTime(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi
  _QWORD *result; // rax
  unsigned __int64 v5; // rcx

  v3 = a1;
  result = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( v3 )
  {
    if ( v3 == 1 )
      result[1525] += a2;
  }
  else
  {
    result[1522] += a2;
    if ( a2 > result[1523] )
      result[1523] = a2;
    v5 = result[1524];
    if ( !v5 || a2 < v5 )
      result[1524] = a2;
  }
  return result;
}
