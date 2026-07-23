/*
 * XREFs of MiDecrementSubsection @ 0x14046D4A0
 * Callers:
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDecrementSubsection(__int64 *BugCheckParameter2)
{
  volatile LONG *v2; // rbp
  unsigned int v3; // ebx
  KIRQL v4; // r14
  ULONG_PTR v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ecx
  BOOL v8; // r13d
  unsigned int v9; // r15d
  __int64 v10; // [rsp+50h] [rbp+8h]

  v10 = *BugCheckParameter2;
  v2 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v3 = 0;
  v4 = ExAcquireSpinLockExclusive(v2);
  v5 = (ULONG_PTR)BugCheckParameter2;
  v6 = 0LL;
  v7 = 512;
  v8 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  do
  {
    v9 = v7;
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5, v7);
      if ( v8 )
      {
        if ( !*(_QWORD *)(v5 + 80) && (*(_DWORD *)(v5 + 32) & 0x10000) == 0 )
          v6 += MiInsertUnusedSubsectionInternal(v5, 0LL);
      }
    }
    if ( (__int64 *)v5 == BugCheckParameter2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    v7 = v9 & 0xFFFFFFFB;
    if ( v8 )
      v7 = v9;
  }
  while ( v5 );
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v4);
  if ( v6 )
  {
    LOBYTE(v3) = *(_QWORD *)(v10 + 64) != 0LL;
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v10 + 60) & 0x3FF)),
      v3,
      v6);
  }
}
