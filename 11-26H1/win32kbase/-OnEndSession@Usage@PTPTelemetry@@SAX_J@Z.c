/*
 * XREFs of ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013D01C
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14017A9A0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 */

void __fastcall PTPTelemetry::Usage::OnEndSession(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // ecx
  int v6; // r8d
  LARGE_INTEGER *v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v7 = (LARGE_INTEGER *)UserSessionState;
  if ( *(__int64 *)(UserSessionState + 12232) > 0 )
  {
    if ( *(_QWORD *)(UserSessionState + 12240) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v7[1530] = PerformanceCounter;
    }
    v7[1532] = PerformanceCounter;
  }
  v9 = 1000 * a1 / gliQpcFreq.QuadPart;
  v10 = W32GetUserSessionState(v5, 1000 * a1 % gliQpcFreq.QuadPart, v6);
  if ( (unsigned __int64)(v9 - *(_QWORD *)(v10 + 12064)) > 0xEA60 )
  {
    PTPTelemetry::Usage::HandlePTPTelemetry();
    *(_QWORD *)(v10 + 12064) = v9;
  }
}
