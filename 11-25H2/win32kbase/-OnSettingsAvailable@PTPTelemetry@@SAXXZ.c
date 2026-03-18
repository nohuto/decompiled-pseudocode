/*
 * XREFs of ?OnSettingsAvailable@PTPTelemetry@@SAXXZ @ 0x14015CEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::OnSettingsAvailable(__int64 a1, __int64 a2)
{
  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 12057) = 1;
}
