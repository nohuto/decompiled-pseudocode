/*
 * XREFs of Normalization__CanCombineWithStartBase @ 0x14080D2FC
 * Callers:
 *     Normalization__IsNormalized @ 0x14080D734 (Normalization__IsNormalized.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x14080D18C (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x14080D414 (Normalization__GetFirstDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__CanCombineWithStartBase(__int64 a1, int *a2, unsigned int a3, int a4)
{
  int FirstDecomposedCharPlane0; // eax

  FirstDecomposedCharPlane0 = *a2;
  if ( !*a2 )
  {
    FirstDecomposedCharPlane0 = Normalization__GetFirstDecomposedCharPlane0(a1, a3);
    *a2 = FirstDecomposedCharPlane0;
  }
  return Normalization__CanCombinableCharactersCombine(a1, FirstDecomposedCharPlane0, a4);
}
