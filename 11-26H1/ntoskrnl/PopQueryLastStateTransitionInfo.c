/*
 * XREFs of PopQueryLastStateTransitionInfo @ 0x140BFD1FC
 * Callers:
 *     PopStateTransitionTimeoutDispatch @ 0x140607880 (PopStateTransitionTimeoutDispatch.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 __fastcall PopQueryLastStateTransitionInfo(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx

  v4 = 0;
  if ( a1 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F11D08.Header.Lock, a2, a3, a4);
    if ( dword_140F11D00 == -1 )
    {
      v4 = -1073741823;
    }
    else
    {
      v6 = 6LL * (unsigned int)dword_140F11D00;
      *a1 = *((_OWORD *)&stru_140F110C0.ThreadLock + 3 * (unsigned int)dword_140F11D00);
      a1[1] = *(_OWORD *)(&stru_140F110C0.CurrentRunTime + 2 * v6);
      a1[2] = *(_OWORD *)(&stru_140F110C0.StateSaveArea + v6);
    }
    PopReleaseRwLock(&stru_140F11D08);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
