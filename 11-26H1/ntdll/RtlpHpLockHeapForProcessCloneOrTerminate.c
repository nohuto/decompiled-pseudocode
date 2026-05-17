/*
 * XREFs of RtlpHpLockHeapForProcessCloneOrTerminate @ 0x180096BC0
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x180087520 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpLockHeapForClone @ 0x180145468 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLargeLockAcquire @ 0x180089C88 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpVsContextLockUnlock @ 0x180097148 (RtlpHpVsContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpLockHeapForProcessCloneOrTerminate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = a1 + 320;
  RtlpHpLargeLockAcquire(a1 + 320, a2);
  RtlpHpLargeLockAcquire(v2 + 192, v4);
  RtlpHpLargeLockAcquire(a1, v5);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v2 + 120), v6);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v2 + 312), v7);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), v8);
  RtlpHpVsContextLockUnlock(a1 + 704, 0LL);
  return RtlpHpLfhContextLockUnlock(a1 + 896, 0LL);
}
