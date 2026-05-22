/*
 * XREFs of ?SetWinKeyScenarioStarted@WinKeyScenarioTelemetry@@CAX_N@Z @ 0x18010DC2C
 * Callers:
 *     ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x180029390 (-EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ @ 0x180029AF4 (-UpdateWinKeyScenarioStatusAndLogLatency@WinKeyScenarioTelemetry@@CA_NXZ.c)
 *     ?StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z @ 0x18010DC5C (-StartWinKeyScenario@WinKeyScenarioTelemetry@@SAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinKeyScenarioTelemetry::SetWinKeyScenarioStarted(bool a1)
{
  WinKeyScenarioTelemetry::s_winKeyScenarioStarted = a1;
  if ( a1 )
    QueryPerformanceCounter(&WinKeyScenarioTelemetry::s_startTime);
}
