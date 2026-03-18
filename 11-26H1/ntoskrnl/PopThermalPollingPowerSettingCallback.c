/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x140435EC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTimerPolicy @ 0x1404363F8 (PopThermalUpdateTimerPolicy.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive(&unk_140F10DB0);
  LOBYTE(v0) = 0;
  if ( dword_140F106CC != 1 || !unk_140F10DC0 )
    LOBYTE(v0) = 1;
  PopThermalUpdateTimerPolicy(v0);
  PopReleaseRwLock((struct _KTHREAD *)&unk_140F10DB0);
  return 0LL;
}
