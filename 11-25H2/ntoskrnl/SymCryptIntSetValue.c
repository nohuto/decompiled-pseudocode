/*
 * XREFs of SymCryptIntSetValue @ 0x140521284
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14051F3F0 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521E48 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140522BF8 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 *     SymCryptEcpointSetValue @ 0x140528410 (SymCryptEcpointSetValue.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntSetValue @ 0x140534CB4 (SymCryptFdefIntSetValue.c)
 */

__int64 SymCryptIntSetValue()
{
  return SymCryptFdefIntSetValue();
}
