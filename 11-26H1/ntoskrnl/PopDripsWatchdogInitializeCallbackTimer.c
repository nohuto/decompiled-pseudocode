/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140CD6ACC
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx

  v0 = PopDripsCallbackInterval;
  if ( PopDripsCallbackInterval || (v0 = PopDirectedDripsTimeout) != 0 )
  {
    LODWORD(PopAdaptiveStandbyLock.WaitBlock[0].WaitListEntry.Flink) = v0;
    PopInitializeTimer(
      (__int64)&PopAdaptiveStandbyLock.TrapFrame,
      (__int64)PopDripsWatchdogTimerCallback,
      (__int64)&PopAdaptiveStandbyLock.QuantumTarget,
      (__int64)PopDripsWatchdogCallbackWorker,
      (__int64)&PopAdaptiveStandbyLock.QuantumTarget);
    if ( PopDripsWatchdogDebounceInterval )
      LODWORD(PopAdaptiveStandbyLock.Header.WaitListHead.Blink) = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
    if ( LODWORD(PopAdaptiveStandbyLock.Header.WaitListHead.Blink) == 1 )
      LODWORD(PopAdaptiveStandbyLock.Header.WaitListHead.Blink) = 2;
    *(_DWORD *)&PopAdaptiveStandbyLock.WaitBlockFill6[4] |= 1u;
  }
  return 0LL;
}
