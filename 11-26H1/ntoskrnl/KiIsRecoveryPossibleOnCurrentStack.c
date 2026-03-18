/*
 * XREFs of KiIsRecoveryPossibleOnCurrentStack @ 0x1405FA444
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405F9734 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     <none>
 */

bool KiIsRecoveryPossibleOnCurrentStack()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 NestingLevel; // al
  bool result; // al

  result = !KeGetPcr()->Prcb.CombinedNmiMceActive
        && (CurrentPrcb = KeGetCurrentPrcb(), NestingLevel = CurrentPrcb->NestingLevel, NestingLevel < 2u)
        && (NestingLevel != 1 || CurrentPrcb->DpcRoutineActive)
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 127
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 226
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 251
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 265
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 273
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 313
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 395
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 456
        && LODWORD(KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink) != 131073;
  return result;
}
