/*
 * XREFs of PpmCheckInit @ 0x140CD2C04
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char PpmCheckInit()
{
  LODWORD(PopSleepstudySessionLock.SchedulingGroup) = 6;
  *(_DWORD *)&PopSleepstudySessionLock.ApcStateFill[40] = 787;
  PopSleepstudySessionLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)PpmCheckRun;
  PopSleepstudySessionLock.WaitListEntry.Blink = 0LL;
  PopSleepstudySessionLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)PpmCheckPeriodicStart;
  PopSleepstudySessionLock.RelativeTimerBias = 0LL;
  PopSleepstudySessionLock.WaitBlockList = 0LL;
  *(_DWORD *)&PopSleepstudySessionLock.WaitBlockFill11[32] = 787;
  *(_QWORD *)&PopSleepstudySessionLock.WaitBlockFill11[64] = 0LL;
  PopSleepstudySessionLock.WaitBlock[1].SparePtr = 0LL;
  PopSleepstudySessionLock.WaitBlock[1].WaitListEntry.Flink = 0LL;
  *(_QWORD *)&PpmCachedSystemAllowedCpuSet.Count = 2097153LL;
  memset_0(&PpmCachedSystemAllowedCpuSet.8, 0, sizeof(PpmCachedSystemAllowedCpuSet.8));
  PopSleepstudySessionLock.WaitBlock[0].WaitListEntry.Flink = 0LL;
  *(_WORD *)&PopSleepstudySessionLock.WaitBlockFill11[130] = 0;
  return KiInitializeTimer2(
           (unsigned __int64)&PopSleepstudySessionLock.WaitBlock[2].Object,
           (__int64)PpmCheckTimerCallback,
           0LL,
           12);
}
