/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x18008D438
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18008D258 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v4; // rdi

  v2 = (volatile signed __int64 *)(a1 + 2144);
  v4 = 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 2144), (__int64)a2);
  if ( (*(_WORD *)(v4 + a1 + 42))-- == 1 )
  {
    *(_QWORD *)(v4 + a1) = 0LL;
    *(_QWORD *)(v4 + a1 + 24) = 0LL;
    *(_QWORD *)(v4 + a1 + 32) = 0LL;
    *(_QWORD *)(v4 + a1 + 40) = 0LL;
    *(_QWORD *)(v4 + a1 + 8) = 0LL;
    *(_QWORD *)(v4 + a1 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2156);
  }
  return RtlReleaseSRWLockExclusive(v2);
}
