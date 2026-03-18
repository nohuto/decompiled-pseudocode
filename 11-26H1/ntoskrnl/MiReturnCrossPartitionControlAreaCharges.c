/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x14050151C
 * Callers:
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14036E5D0 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiReturnCrossPartitionControlAreaCharges(__int64 a1)
{
  volatile LONG *v1; // rbx
  BOOL v3; // r14d
  KIRQL v4; // bp
  unsigned __int64 v5; // rdi

  v1 = (volatile LONG *)(a1 + 72);
  v3 = *(_QWORD *)(a1 + 64) != 0LL;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v5 = MiDecrementSubsectionViewCount(a1 + 128, 12);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v4);
  if ( v5 )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF)),
      v3,
      v5);
}
