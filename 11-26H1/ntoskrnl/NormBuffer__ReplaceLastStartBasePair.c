/*
 * XREFs of NormBuffer__ReplaceLastStartBasePair @ 0x14062243C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x14080DFB8 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140621EE0 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__GetThirdAndLastDecomposedCharPlane0 @ 0x14080D698 (Normalization__GetThirdAndLastDecomposedCharPlane0.c)
 */

int __fastcall NormBuffer__ReplaceLastStartBasePair(__int64 a1, int a2, char a3, char a4)
{
  unsigned int ThirdAndLastDecomposedCharPlane0; // eax

  ThirdAndLastDecomposedCharPlane0 = Normalization__GetThirdAndLastDecomposedCharPlane0(
                                       *(_QWORD *)(a1 + 112),
                                       *(unsigned int *)(a1 + 88));
  *(_WORD *)(*(_QWORD *)(a1 + 80) - 2LL) = a2;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( ThirdAndLastDecomposedCharPlane0 )
    return NormBuffer__AppendAndSortDecomposed(a1, ThirdAndLastDecomposedCharPlane0);
  else
    return 1;
}
