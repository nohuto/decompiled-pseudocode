/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x140946360
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x140947B64 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  char v6; // di

  v4 = 0;
  if ( a2 && (_DWORD)a3 == 4 )
  {
    v6 = 0;
    PopAcquireRwLockExclusive(
      (unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink,
      (__int64)a2,
      a3,
      a4);
    if ( *a2 == 1 )
    {
      if ( !byte_140F10714 )
      {
        v6 = 1;
        byte_140F10714 = 1;
      }
    }
    else if ( !*a2 && byte_140F10714 )
    {
      v6 = 1;
      byte_140F10714 = 0;
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
    if ( v6 )
      PopEsWorkItemSchedule(4LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
