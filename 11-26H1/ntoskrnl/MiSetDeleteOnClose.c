/*
 * XREFs of MiSetDeleteOnClose @ 0x14050687C
 * Callers:
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 *     MiRelocateMapImage @ 0x1409CBD3C (MiRelocateMapImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14030BCD0 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x1404807E0 (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiSetDeleteOnClose(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  unsigned __int64 inserted; // rdi
  KIRQL v6; // bp
  int v7; // eax

  v2 = (volatile LONG *)(a1 + 72);
  inserted = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 0x40000) == 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
    {
      MiRemoveUnusedSegment(a1);
      *(_DWORD *)(a1 + 56) |= 0x40000u;
      inserted = MiInsertUnusedSegment(a1);
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v7 | 0x40000;
    }
  }
  if ( a2 )
    *(_DWORD *)(a1 + 56) |= 0x10u;
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v6);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF)),
      1,
      inserted);
}
