/*
 * XREFs of ?OnSettingsAvailable@PTPTelemetry@@SAXXZ @ 0x14019D810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::OnSettingsAvailable(int a1, int a2, int a3)
{
  *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 12057) = 1;
}
