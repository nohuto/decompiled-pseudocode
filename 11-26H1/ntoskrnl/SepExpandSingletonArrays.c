/*
 * XREFs of SepExpandSingletonArrays @ 0x1404EEB1C
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140AB7B44 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SepExpandSingletonArrays()
{
  void *Pool2; // rax
  void *v1; // rbx
  KIRQL v3; // si
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  PEX_SPIN_LOCK v6; // rdi
  void *v7; // rbx

  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  v1 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset_0(Pool2, 0, 0x600uLL);
  v3 = ExAcquireSpinLockExclusive(SepSingletonGlobal);
  v4 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v5 = v4;
  if ( !v4 )
  {
    ExReleaseSpinLockExclusive(SepSingletonGlobal, v3);
    ExFreePoolWithTag(v1, 0x74446553u);
    return 3221225495LL;
  }
  v6 = SepSingletonGlobal;
  memmove(v4, *((const void **)SepSingletonGlobal + 1), 8LL * *((unsigned int *)SepSingletonGlobal + 1));
  v5[*((unsigned int *)v6 + 1)] = v1;
  v7 = (void *)*((_QWORD *)v6 + 1);
  ++*((_DWORD *)v6 + 1);
  *((_QWORD *)v6 + 1) = v5;
  ExReleaseSpinLockExclusive(v6, v3);
  ExFreePoolWithTag(v7, 0x74446553u);
  return 0LL;
}
