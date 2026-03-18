/*
 * XREFs of NormBuffer__LastStartBasePair @ 0x14061F1BC
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x140808518 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__LastStartBase @ 0x14061F190 (NormBuffer__LastStartBase.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1408076EC (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x140807B84 (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBasePair(__int64 a1)
{
  __int64 result; // rax
  unsigned int SecondDecomposedCharPlane0; // eax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int StartBase; // eax

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
