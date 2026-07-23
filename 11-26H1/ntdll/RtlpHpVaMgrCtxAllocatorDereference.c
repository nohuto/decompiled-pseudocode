/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x180071028
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180070BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  _RTL_SRWLOCK *v2; // rsi
  __int64 v4; // rdi

  v2 = (_RTL_SRWLOCK *)(a1 + 2144);
  v4 = 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 2144));
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
  RtlReleaseSRWLockExclusive(v2);
}
