/*
 * XREFs of ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14012B8DC
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewSession(LARGE_INTEGER a1, __int64 a2)
{
  LARGE_INTEGER *v3; // rax
  LARGE_INTEGER *v4; // rdi
  LARGE_INTEGER PerformanceCounter; // rax

  v3 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)((LARGE_INTEGER)a1.QuadPart, a2);
  v4 = v3;
  if ( v3[1528].QuadPart < a1.QuadPart )
  {
    v3[1528] = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4[1533].HighPart = 0;
    v4[1531] = PerformanceCounter;
  }
}
