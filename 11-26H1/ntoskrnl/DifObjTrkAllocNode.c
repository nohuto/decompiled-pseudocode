/*
 * XREFs of DifObjTrkAllocNode @ 0x14064EA20
 * Callers:
 *     <none>
 * Callees:
 *     DifPopSegment @ 0x140650C14 (DifPopSegment.c)
 */

__int64 DifObjTrkAllocNode()
{
  return DifPopSegment(&DifObjTrkSegContext);
}
