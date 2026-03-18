/*
 * XREFs of MiDeleteCachedEntries @ 0x1404A3510
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1404A3280 (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 *     MiDeleteZeroValueSegments @ 0x1404A33F4 (MiDeleteZeroValueSegments.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPruneUnusedList @ 0x14048F610 (MiPruneUnusedList.c)
 */

__int64 __fastcall MiDeleteCachedEntries(__int64 a1, unsigned int a2)
{
  volatile LONG *v3; // rsi
  KIRQL v5; // bp
  unsigned int v6; // ebx

  v3 = (volatile LONG *)(*(_QWORD *)(a1 + 64) + 2112LL);
  v5 = ExAcquireSpinLockExclusive(v3);
  v6 = MiPruneUnusedList(a1, a2, v5);
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v5);
  return v6;
}
