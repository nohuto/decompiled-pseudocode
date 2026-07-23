/*
 * XREFs of Normalization__PageLookup @ 0x14080E7D4
 * Callers:
 *     NormBuffer__GetLastChar @ 0x140621FDC (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x140622168 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1406224FC (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
