/*
 * XREFs of ?OnNewContact@Usage@PTPTelemetry@@SAX_J@Z @ 0x14013CF5C
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14013CC70 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewContact(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(UserSessionState + 12232) < *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 3304) )
    *(_QWORD *)(UserSessionState + 12232) = a1;
}
