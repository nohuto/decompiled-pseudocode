/*
 * XREFs of SymCryptFdefModMulMontgomeryMulx @ 0x14056FE90
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMulMulx @ 0x1405691B0 (SymCryptFdefRawMulMulx.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x14056A2A0 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomeryMulx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __m128i *a4,
        __m128i *a5)
{
  SymCryptFdefRawMulMulx(a2, *(_DWORD *)(a1 + 4), a3, *(unsigned int *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduceMulx(a1, a5, a4);
}
