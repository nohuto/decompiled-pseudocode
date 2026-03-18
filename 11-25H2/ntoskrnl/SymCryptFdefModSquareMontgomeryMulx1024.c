/*
 * XREFs of SymCryptFdefModSquareMontgomeryMulx1024 @ 0x1405343A0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquareMulx1024 @ 0x140531300 (SymCryptFdefRawSquareMulx1024.c)
 *     SymCryptFdefMontgomeryReduceMulx1024 @ 0x1405321A0 (SymCryptFdefMontgomeryReduceMulx1024.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomeryMulx1024(__int64 a1, unsigned __int64 *a2, __m128i *a3, __m128i *a4)
{
  SymCryptFdefRawSquareMulx1024(a2, *(unsigned int *)(a1 + 4), (__int64)a4);
  return SymCryptFdefMontgomeryReduceMulx1024(a1, a4, a3);
}
