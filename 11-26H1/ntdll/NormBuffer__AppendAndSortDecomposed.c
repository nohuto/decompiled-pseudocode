/*
 * XREFs of NormBuffer__AppendAndSortDecomposed @ 0x1800AFCE0
 * Callers:
 *     NormBuffer__ReplaceLastStartBase @ 0x1800AFB0C (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800AFB94 (NormBuffer__ReplaceLastStartBasePair.c)
 * Callees:
 *     NormBuffer__SortBeforeSameClass @ 0x1800AFD60 (NormBuffer__SortBeforeSameClass.c)
 */

char __fastcall NormBuffer__AppendAndSortDecomposed(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // di

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)a2 >> 7)
                                                        + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL)) << 7)
                + *(_QWORD *)(*(_QWORD *)(a1 + 112) + 40LL)
                - 128);
  LOBYTE(a2) = v4 & 0x3F;
  NormBuffer__SortBeforeSameClass(a1, a2);
  return NormBuffer__InsertAtBlockedLocation(a1, v3, v4 & 0x3F, v4 & 0xC0);
}
