/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140CD1748
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140CD1618 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 */

__int64 PopUserShutdownScenarioInitialize()
{
  if ( (int)PdcTaskClientRegister(120LL, &qword_140F11008) < 0 )
    qword_140F11008 = 0LL;
  PopInitializeTimer(
    (__int64)&unk_140F10F40,
    (__int64)PopUserShutdownCalloutDelayTimerCallback,
    0LL,
    (__int64)PopUserShutdownCalloutDelayTimerWorker,
    0LL);
  PopUserShutdownInitializeSleepstudyDiagnostics();
  return 0LL;
}
