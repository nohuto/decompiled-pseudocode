/*
 * XREFs of RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800714A4
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18007E890 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180145318 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x18007100C (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVsContextLockUnlock @ 0x180071A28 (RtlpHpVsContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpLockHeapForProcessCloneOrTerminate(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *v1; // rdi

  v1 = a1 + 40;
  RtlpHpLargeLockAcquire(a1 + 40);
  RtlpHpLargeLockAcquire(v1 + 24);
  RtlpHpLargeLockAcquire(a1);
  RtlAcquireSRWLockExclusive(v1 + 15);
  RtlAcquireSRWLockExclusive(v1 + 39);
  RtlAcquireSRWLockExclusive(a1 + 29);
  RtlpHpVsContextLockUnlock(&a1[88], 0LL);
  return RtlpHpLfhContextLockUnlock(&a1[112], 0LL);
}
