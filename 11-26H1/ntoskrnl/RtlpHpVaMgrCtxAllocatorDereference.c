/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x14063BC40
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14063B9E0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v4; // rsi
  __int64 v6; // rdi
  char v7; // al

  v4 = (struct _KTHREAD *)(a1 + 2144);
  v6 = 48 * (*a2 + 45LL);
  v7 = RtlpHpAcquireLockExclusive((int *)(a1 + 2144), 1LL, a3, a4);
  if ( (*(_WORD *)(v6 + a1 + 42))-- == 1 )
  {
    *(_QWORD *)(v6 + a1) = 0LL;
    *(_QWORD *)(v6 + a1 + 24) = 0LL;
    *(_QWORD *)(v6 + a1 + 32) = 0LL;
    *(_QWORD *)(v6 + a1 + 40) = 0LL;
    *(_QWORD *)(v6 + a1 + 8) = 0LL;
    *(_QWORD *)(v6 + a1 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2156);
  }
  RtlpHpReleaseLockExclusive(v4, 1, v7);
}
