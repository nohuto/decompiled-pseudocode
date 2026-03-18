/*
 * XREFs of MiSetSubsectionBase @ 0x140458C48
 * Callers:
 *     MiAllocateSubsectionProtos @ 0x140458B54 (MiAllocateSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x14030BE90 (MiIncrementSubsectionViewCount.c)
 */

void __fastcall MiSetSubsectionBase(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v5; // rbx
  ULONG_PTR v10; // r15
  volatile LONG *v11; // rbp
  KIRQL v12; // r14
  int v13; // eax
  unsigned int v14; // eax

  v5 = *(_QWORD *)BugCheckParameter2;
  v10 = 0LL;
  v11 = (volatile LONG *)(*(_QWORD *)BugCheckParameter2 + 72LL);
  v12 = ExAcquireSpinLockExclusive(v11);
  if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
  {
    v10 = BugCheckParameter2;
    if ( a4 )
      MiIncrementSubsectionViewCount((__int64 *)BugCheckParameter2, 0);
    *(_QWORD *)(BugCheckParameter2 + 112) = a5;
  }
  *(_DWORD *)(BugCheckParameter2 + 32) |= 1u;
  v13 = *(_DWORD *)(BugCheckParameter2 + 48) & 0x3FFFFFFF;
  *(_QWORD *)(BugCheckParameter2 + 8) = a2;
  *(_DWORD *)(BugCheckParameter2 + 48) = v13;
  if ( v10 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v14 = v13 | 0x40000000;
    else
      v14 = v13 | 0x80000000;
    *(_DWORD *)(BugCheckParameter2 + 48) = v14;
  }
  if ( v12 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  else
    ExReleaseSpinLockExclusive(v11, v12);
}
