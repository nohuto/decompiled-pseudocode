/*
 * XREFs of SymCryptIntIsLessThan @ 0x14055C34C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x14055EA90 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x1405645A0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefIntIsLessThan @ 0x140568778 (SymCryptFdefIntIsLessThan.c)
 */

__int64 SymCryptIntIsLessThan()
{
  return SymCryptFdefIntIsLessThan();
}
