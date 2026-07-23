/*
 * XREFs of SymCryptFdefModSetPostMontgomeryMulxP384 @ 0x14056F310
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefModMulMontgomeryMulxP384Asm @ 0x14056A8A0 (SymCryptFdefModMulMontgomeryMulxP384Asm.c)
 */

unsigned __int64 __fastcall SymCryptFdefModSetPostMontgomeryMulxP384(__int64 a1, unsigned __int64 *a2)
{
  return SymCryptFdefModMulMontgomeryMulxP384Asm(a1, *(unsigned __int64 **)(a1 + 40), a2, a2);
}
