/*
 * XREFs of Normalization__TableLookup @ 0x140808D54
 * Callers:
 *     NormBuffer__GetLastChar @ 0x14061EF8C (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x14061F118 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14061F4AC (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)(((unsigned __int64)a3 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
}
