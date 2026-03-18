/*
 * XREFs of NormBuffer__LastStartBase @ 0x14061F190
 * Callers:
 *     NormBuffer__LastStartBasePair @ 0x14061F1BC (NormBuffer__LastStartBasePair.c)
 *     Normalization__NormalizeCharacter @ 0x140808518 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x140807974 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall NormBuffer__LastStartBase(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 96);
  if ( !(_DWORD)result )
  {
    result = Normalization__GetFirstDecomposedCharPlane0(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    *(_DWORD *)(a1 + 96) = result;
  }
  return result;
}
