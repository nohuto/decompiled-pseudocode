/*
 * XREFs of MiReturnCrossPartitionControlAreaCharges @ 0x1404FAD0C
 * Callers:
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
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
      *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF)),
      v3,
      v5);
}
