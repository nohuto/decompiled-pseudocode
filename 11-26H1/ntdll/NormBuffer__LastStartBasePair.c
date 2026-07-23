/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x1800AF9E8
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800AF660 (Normalization__CanCombinableCharactersCombine.c)
 *     NormBuffer__LastStartBase @ 0x180120B30 (NormBuffer__LastStartBase.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x180121688 (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBasePair(__int64 a1)
{
  __int64 result; // rax
  int SecondDecomposedCharPlane0; // eax
  __int64 v4; // rdi
  int v5; // ebx
  int StartBase; // eax

  result = *(unsigned int *)(a1 + 100);
  if ( !(_DWORD)result )
  {
    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(
                                   *(_QWORD *)(a1 + 112),
                                   *(unsigned int *)(a1 + 88));
    v4 = *(_QWORD *)(a1 + 112);
    v5 = SecondDecomposedCharPlane0;
    StartBase = NormBuffer__LastStartBase(a1);
    result = Normalization__CanCombinableCharactersCombine(v4, StartBase, v5);
    *(_DWORD *)(a1 + 100) = result;
  }
  return result;
}
