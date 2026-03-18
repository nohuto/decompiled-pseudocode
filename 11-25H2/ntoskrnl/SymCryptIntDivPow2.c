/*
 * XREFs of SymCryptIntDivPow2 @ 0x140521104
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521E48 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x14053692C (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140536A88 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x14052C5D4 (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
