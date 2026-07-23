/*
 * XREFs of PopEsPowerSettingPolicyCallback @ 0x1409C1CD0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopEsWorkItemSchedule @ 0x1409C34D4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsPowerSettingPolicyCallback(__int64 a1, _DWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  char v6; // di

  v4 = 0;
  if ( a2 && (_DWORD)a3 == 4 )
  {
    v6 = 0;
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, (__int64)a2, a3, a4);
    if ( *a2 == 1 )
    {
      if ( !BYTE4(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next) )
      {
        v6 = 1;
        BYTE4(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next) = 1;
      }
    }
    else if ( !*a2 && BYTE4(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next) )
    {
      v6 = 1;
      BYTE4(PpmIdlePolicyLock.ForegroundDpcStackListEntry.Next) = 0;
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
    if ( v6 )
      PopEsWorkItemSchedule(4LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
