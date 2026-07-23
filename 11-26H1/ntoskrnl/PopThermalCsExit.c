/*
 * XREFs of PopThermalCsExit @ 0x14060A6D4
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopThermalStandbyEndTracking @ 0x140423E3C (PopThermalStandbyEndTracking.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     PopThermalStandbyNotify @ 0x14060A7A4 (PopThermalStandbyNotify.c)
 */

char __fastcall PopThermalCsExit(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo, a2, a3, a4);
  PopThermalStandbyEndTracking(1LL, v4, v5);
  LOBYTE(word_140F0FE70) = 1;
  if ( dword_140F0FE74 )
  {
    LOBYTE(v6) = 1;
    PopThermalStandbyNotify(v6);
    word_140F0FE70 = 256;
  }
  else if ( HIBYTE(word_140F0FE70) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140F0FE70) = 0;
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&stru_140F0FE28, DelayedWorkQueue);
}
