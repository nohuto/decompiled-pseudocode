/*
 * XREFs of MiDeleteCachedEntries @ 0x14049D020
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14049CD9C (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 *     MiDeleteZeroValueSegments @ 0x14049CF04 (MiDeleteZeroValueSegments.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
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
