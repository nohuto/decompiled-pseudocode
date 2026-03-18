/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x14017A9A0
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013D01C (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 * Callees:
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x14017AA14 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x14017AB54 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall PTPTelemetry::Usage::HandlePTPTelemetry(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = UserSessionState + 12072;
  if ( *(_DWORD *)(UserSessionState + 12172) )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)(UserSessionState + 12072));
    if ( *(__int64 *)(v4 + 104) > 0 || *(__int64 *)(v4 + 128) > 0 || *(_DWORD *)(v4 + 16) || *(_DWORD *)(v4 + 24) )
      TraceLoggingPTPUsageDetailsEvent((const struct tagTPTELEMSTATE *)v4, gliQpcFreq.QuadPart);
    memset((void *)v4, 0, 0x98uLL);
  }
}
