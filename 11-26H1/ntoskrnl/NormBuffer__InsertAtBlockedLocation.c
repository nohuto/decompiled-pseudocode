/*
 * XREFs of NormBuffer__InsertAtBlockedLocation @ 0x14062213C
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140621EE0 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x140621F3C (NormBuffer__AppendEx.c)
 *     NormBuffer__Insert @ 0x140622070 (NormBuffer__Insert.c)
 */

char __fastcall NormBuffer__InsertAtBlockedLocation(_QWORD *a1, int a2, char a3, char a4)
{
  __int16 *v5; // r8

  v5 = (__int16 *)a1[13];
  if ( v5 == (__int16 *)a1[5] )
    return NormBuffer__AppendEx((__int64)a1, a2, a3, a4);
  else
    return NormBuffer__Insert(a1, a2, v5);
}
