/*
 * XREFs of SymCryptIntIsLessThan @ 0x14052121C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140522BF8 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x140528410 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefIntIsLessThan @ 0x14052C750 (SymCryptFdefIntIsLessThan.c)
 */

__int64 SymCryptIntIsLessThan()
{
  return SymCryptFdefIntIsLessThan();
}
