/*
 * XREFs of RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E9F0
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180087568 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x18014564C (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextLockUnlock @ 0x180097148 (RtlpHpVsContextLockUnlock.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180097204 (RtlpHpLfhContextLockUnlock.c)
 */

struct _TEB *__fastcall RtlpHpUnlockHeapForProcessCloneOrTerminate(__int64 a1, int a2)
{
  volatile signed __int64 *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  volatile signed __int64 *v9; // rcx

  RtlpHpLfhContextLockUnlock(a1 + 896, a2);
  RtlpHpVsContextLockUnlock(a1 + 704, a2);
  v4 = (volatile signed __int64 *)(a1 + 232);
  v5 = 2LL;
  if ( a2 >= 2 )
    *v4 = 1LL;
  RtlReleaseSRWLockExclusive(v4);
  if ( a2 >= 2 )
  {
    v6 = 2LL;
    v7 = (_QWORD *)(a1 + 440);
    do
    {
      *v7 = 1LL;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 440));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 632));
  if ( a2 < 2 )
  {
    v9 = (volatile signed __int64 *)(a1 + 64);
  }
  else
  {
    v8 = (_QWORD *)(a1 + 384);
    do
    {
      *v8 = 1LL;
      v8 += 24;
      --v5;
    }
    while ( v5 );
    v9 = (volatile signed __int64 *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = 1LL;
  }
  RtlReleaseSRWLockExclusive(v9);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 384));
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 576));
}
