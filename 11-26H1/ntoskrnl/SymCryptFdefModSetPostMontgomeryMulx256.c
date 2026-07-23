/*
 * XREFs of SymCryptFdefModSetPostMontgomeryMulx256 @ 0x14056F2F0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefModMulMontgomeryMulx256Asm @ 0x14056A430 (SymCryptFdefModMulMontgomeryMulx256Asm.c)
 */

unsigned __int64 __fastcall SymCryptFdefModSetPostMontgomeryMulx256(__int64 a1, unsigned __int64 *a2)
{
  return SymCryptFdefModMulMontgomeryMulx256Asm(a1, *(unsigned __int64 **)(a1 + 40), a2, a2);
}
