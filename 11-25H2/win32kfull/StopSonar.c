/*
 * XREFs of StopSonar @ 0x140287A2C
 * Callers:
 *     EditionStopSonar @ 0x1401931E0 (EditionStopSonar.c)
 *     EditionHandleSonarKeyEvent @ 0x1401C7A00 (EditionHandleSonarKeyEvent.c)
 *     zzzStartSonar @ 0x140287B4C (zzzStartSonar.c)
 * Callees:
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 *     ?SonarStop@Mouse@InputTraceLogging@@SAXXZ @ 0x1402877B0 (-SonarStop@Mouse@InputTraceLogging@@SAXXZ.c)
 */

__int64 StopSonar()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  InputTraceLogging::Mouse::SonarStop();
  StopFade(v1, v0);
  result = W32GetUserSessionState(v3, v2);
  *(_DWORD *)(result + 16324) = -1;
  return result;
}
