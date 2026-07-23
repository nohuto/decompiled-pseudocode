/*
 * XREFs of SymCryptFdefModMulMontgomeryMulx1024 @ 0x14056F0D0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMulMulx1024 @ 0x14056AE60 (SymCryptFdefRawMulMulx1024.c)
 *     SymCryptFdefMontgomeryReduceMulx1024 @ 0x14056D3A0 (SymCryptFdefMontgomeryReduceMulx1024.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomeryMulx1024(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __m128i *a4,
        __m128i *a5)
{
  SymCryptFdefRawMulMulx1024(a2, a3, *(unsigned int *)(a1 + 4), (__int64)a5);
  return SymCryptFdefMontgomeryReduceMulx1024(a1, a5, a4);
}
