/*
 * XREFs of ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013CFB0
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewSession(LARGE_INTEGER a1, int a2, int a3)
{
  LARGE_INTEGER *UserSessionState; // rax
  LARGE_INTEGER *v5; // rdi

  UserSessionState = (LARGE_INTEGER *)W32GetUserSessionState(a1.LowPart, a2, a3);
  v5 = UserSessionState;
  if ( UserSessionState[1528].QuadPart < a1.QuadPart )
  {
    UserSessionState[1528] = KeQueryPerformanceCounter(0LL);
  }
  else
  {
    UserSessionState[1531] = KeQueryPerformanceCounter(0LL);
    v5[1533].HighPart = 0;
  }
}
