/*
 * XREFs of SymCryptIntDivPow2 @ 0x14055C234
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x14055CFB0 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x140574C80 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140574DE0 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x1405685FC (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
