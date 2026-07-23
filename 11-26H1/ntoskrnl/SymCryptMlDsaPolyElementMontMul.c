/*
 * XREFs of SymCryptMlDsaPolyElementMontMul @ 0x140572604
 * Callers:
 *     SymCryptMlDsaMatrixVectorMontMul @ 0x140571EAC (SymCryptMlDsaMatrixVectorMontMul.c)
 *     SymCryptMlDsaVectorPolyElementMontMul @ 0x1405738E0 (SymCryptMlDsaVectorPolyElementMontMul.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMlDsaPolyElementMontMul(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r11
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  __int64 result; // rax

  v3 = a1 - (_QWORD)a2;
  v4 = 256LL;
  v5 = a3 - (_QWORD)a2;
  do
  {
    v6 = *a2 * (unsigned __int64)*(unsigned int *)((char *)a2 + v3);
    v7 = HIDWORD(v6) - ((8380417 * (unsigned __int64)(unsigned int)(58728449 * v6)) >> 32);
    result = (unsigned int)v7 + (HIDWORD(v7) & 0x7FE001);
    *(unsigned int *)((char *)a2++ + v5) = result;
    --v4;
  }
  while ( v4 );
  return result;
}
