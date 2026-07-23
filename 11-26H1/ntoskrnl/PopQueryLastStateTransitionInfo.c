/*
 * XREFs of PopQueryLastStateTransitionInfo @ 0x140C031FC
 * Callers:
 *     PopStateTransitionTimeoutDispatch @ 0x14060A3E0 (PopStateTransitionTimeoutDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopQueryLastStateTransitionInfo(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx

  v4 = 0;
  if ( a1 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F120C8, a2, a3, a4);
    if ( dword_140F120C0 == -1 )
    {
      v4 = -1073741823;
    }
    else
    {
      v6 = 6LL * (unsigned int)dword_140F120C0;
      *a1 = *(_OWORD *)&PopStateTransitonBlameStack[6 * (unsigned int)dword_140F120C0];
      a1[1] = *(_OWORD *)&PopStateTransitonBlameStack[v6 + 2];
      a1[2] = *(_OWORD *)&PopStateTransitonBlameStack[v6 + 4];
    }
    PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F120C8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
