/*
 * XREFs of ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x140115600
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x140141E80 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 */

void __fastcall PTPTelemetry::Usage::OnEndSession(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  LARGE_INTEGER *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = (LARGE_INTEGER *)UserSessionState;
  if ( *(__int64 *)(UserSessionState + 12232) > 0 )
  {
    if ( *(_QWORD *)(UserSessionState + 12240) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v5[1530] = PerformanceCounter;
    }
    v5[1532] = PerformanceCounter;
  }
  v6 = 1000 * a1 % gliQpcFreq.QuadPart;
  v7 = 1000 * a1 / gliQpcFreq.QuadPart;
  v8 = W32GetUserSessionState(v4, v6);
  if ( (unsigned __int64)(v7 - *(_QWORD *)(v8 + 12064)) > 0xEA60 )
  {
    PTPTelemetry::Usage::HandlePTPTelemetry();
    *(_QWORD *)(v8 + 12064) = v7;
  }
}
