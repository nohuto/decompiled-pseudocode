/*
 * XREFs of MiDefragFreeEmptySlabEntries @ 0x14070AE90
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 */

_BOOL8 __fastcall MiDefragFreeEmptySlabEntries(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 120);
  MiFreeSlabEntries(a1, a2, 2);
  return v2 > *(_QWORD *)(a2 + 120);
}
