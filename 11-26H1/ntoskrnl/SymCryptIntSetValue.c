/*
 * XREFs of SymCryptIntSetValue @ 0x14055C3B4
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x14055CFB0 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreVerifyInput @ 0x14055EA90 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 *     SymCryptEcpointSetValue @ 0x1405645A0 (SymCryptEcpointSetValue.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntSetValue @ 0x140570CFC (SymCryptFdefIntSetValue.c)
 */

__int64 SymCryptIntSetValue()
{
  return SymCryptFdefIntSetValue();
}
