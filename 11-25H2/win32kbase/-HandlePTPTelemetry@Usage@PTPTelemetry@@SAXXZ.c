/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x140141E80
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x140115600 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x140141EF4 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x140142150 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall PTPTelemetry::Usage::HandlePTPTelemetry(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = UserSessionState + 12072;
  if ( *(_DWORD *)(UserSessionState + 12172) )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)(UserSessionState + 12072));
    if ( *(__int64 *)(v3 + 104) > 0 || *(__int64 *)(v3 + 128) > 0 || *(_DWORD *)(v3 + 16) || *(_DWORD *)(v3 + 24) )
      TraceLoggingPTPUsageDetailsEvent((const struct tagTPTELEMSTATE *)v3, gliQpcFreq.QuadPart);
    memset((void *)v3, 0, 0x98uLL);
  }
}
