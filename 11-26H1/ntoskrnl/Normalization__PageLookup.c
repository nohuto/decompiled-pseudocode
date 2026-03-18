/*
 * XREFs of Normalization__PageLookup @ 0x140808D3C
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14061EF8C (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14061F118 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14061F4AC (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
