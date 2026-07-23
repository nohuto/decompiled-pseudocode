/*
 * XREFs of PopEtEnergyTrackerClose @ 0x1407E0170
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopEtEnergyTrackerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)(a2 + 16), a2, a3, (struct _KLOCK_ENTRIES *)1);
    *(_DWORD *)(a2 + 644) |= 2u;
    return PopReleaseRwLock((struct _KTHREAD *)(a2 + 16));
  }
  return result;
}
