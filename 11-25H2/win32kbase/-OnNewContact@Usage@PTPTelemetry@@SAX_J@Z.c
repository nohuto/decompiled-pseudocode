/*
 * XREFs of ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x14012EF18
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewContact(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 12232) < *(_QWORD *)(W32GetUserSessionState(v5, v4) + 3304) )
    *(_QWORD *)(UserSessionState + 12232) = a1;
}
