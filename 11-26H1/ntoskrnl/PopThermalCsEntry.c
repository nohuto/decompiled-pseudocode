/*
 * XREFs of PopThermalCsEntry @ 0x140424BC0
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x140423E3C (PopThermalStandbyEndTracking.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalStandbyInitiated @ 0x14060CCE8 (PopTraceThermalStandbyInitiated.c)
 */

void __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive(&PopSystemThermalInfo);
  LOBYTE(word_140F0FE70) = 0;
  if ( a1 )
  {
    byte_140F0FE7D = 1;
    LOBYTE(v3) = byte_140F0FE7C;
    qword_140F0FE80 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140F0FE74 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((struct _KTHREAD *)&PopSystemThermalInfo);
  if ( _InterlockedIncrement(&dword_140F0FE48) == 1 )
    ExQueueWorkItem(&stru_140F0FE28, DelayedWorkQueue);
}
