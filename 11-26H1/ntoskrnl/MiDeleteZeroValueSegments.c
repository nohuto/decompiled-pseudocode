/*
 * XREFs of MiDeleteZeroValueSegments @ 0x14049CF04
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14049CD9C (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     MiDeleteControlAreaList @ 0x14049CF38 (MiDeleteControlAreaList.c)
 *     MiDeleteCachedEntries @ 0x14049D020 (MiDeleteCachedEntries.c)
 */

__int64 __fastcall MiDeleteZeroValueSegments(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 2448) != v1 + 2448 )
    MiDeleteCachedEntries(a1, 0LL);
  return MiDeleteControlAreaList(v1);
}
