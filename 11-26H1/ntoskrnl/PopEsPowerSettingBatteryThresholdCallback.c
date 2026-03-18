/*
 * XREFs of PopEsPowerSettingBatteryThresholdCallback @ 0x140B50A40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingBatteryThresholdCallback(
        __int64 a1,
        int *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // ebx

  v5 = -1073741811;
  if ( a2 && (_DWORD)a3 == 4 )
  {
    v5 = 0;
    PopAcquireRwLockExclusive(
      (unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink,
      (__int64)a2,
      a3,
      a4);
    dword_140F10710 = *a2;
    if ( (unsigned int)dword_140F10710 > 0x64 )
      dword_140F10710 = 100;
    PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
    PopEsWorkItemSchedule(2);
  }
  return v5;
}
