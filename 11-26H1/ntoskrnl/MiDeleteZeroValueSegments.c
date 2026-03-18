/*
 * XREFs of MiDeleteZeroValueSegments @ 0x1404A33F4
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1404A3280 (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     MiDeleteControlAreaList @ 0x1404A3428 (MiDeleteControlAreaList.c)
 *     MiDeleteCachedEntries @ 0x1404A3510 (MiDeleteCachedEntries.c)
 */

__int64 __fastcall MiDeleteZeroValueSegments(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 2448) != v1 + 2448 )
    MiDeleteCachedEntries(a1, 0LL);
  return MiDeleteControlAreaList(v1);
}
