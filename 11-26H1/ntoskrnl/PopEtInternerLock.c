/*
 * XREFs of PopEtInternerLock @ 0x140AF4790
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopEtInternerLock(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  volatile signed __int64 *v4; // rcx

  v4 = (volatile signed __int64 *)(PopEtGlobals + 40);
  if ( (_BYTE)a2 )
    return (struct _KTHREAD *)PopAcquireRwLockShared(v4, a2, a3, a4);
  else
    return PopAcquireRwLockExclusive((unsigned __int64 *)v4, a2, a3, a4);
}
