/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140CD78F0
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140CD77C0 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 */

__int64 PopUserShutdownScenarioInitialize()
{
  if ( (int)PdcTaskClientRegister(120LL, &PopUserShutdownTaskClient) < 0 )
    PopUserShutdownTaskClient = 0LL;
  PopInitializeTimer(
    (__int64)&PopUserShutdownCalloutDelayTimer,
    (__int64)PopUserShutdownCalloutDelayTimerCallback,
    0LL,
    (__int64)PopUserShutdownCalloutDelayTimerWorker,
    0LL);
  PopUserShutdownInitializeSleepstudyDiagnostics();
  return 0LL;
}
