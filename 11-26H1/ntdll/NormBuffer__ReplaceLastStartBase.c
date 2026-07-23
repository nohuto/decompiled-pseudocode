/*
 * XREFs of NormBuffer__ReplaceLastStartBase @ 0x1800AFB0C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800AE3FC (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800AFCE0 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__GetSecondAndThirdDecomposedCharPlane0 @ 0x1800AFEF4 (Normalization__GetSecondAndThirdDecomposedCharPlane0.c)
 */

char __fastcall NormBuffer__ReplaceLastStartBase(__int64 a1, int a2, char a3, char a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rax
  char result; // al
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 80);
  v9 = 0;
  v8 = 0;
  *(_WORD *)(v6 - 2) = a2;
  *(_DWORD *)(a1 + 88) = a2;
  *(_BYTE *)(a1 + 92) = a3;
  *(_BYTE *)(a1 + 93) = a4;
  *(_QWORD *)(a1 + 96) = 0LL;
  Normalization__GetSecondAndThirdDecomposedCharPlane0(*(_QWORD *)(a1 + 112), v4, &v9, &v8);
  if ( !v8 || (result = NormBuffer__AppendAndSortDecomposed(a1)) != 0 )
  {
    if ( v9 )
      return NormBuffer__AppendAndSortDecomposed(a1);
    else
      return 1;
  }
  return result;
}
