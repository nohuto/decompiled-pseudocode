/*
 * XREFs of SymCryptIntSetValue @ 0x14055E89C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055C930 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14055D2B8 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x14055F498 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140560FB4 (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 *     SymCryptEcpointSetValue @ 0x140566990 (SymCryptEcpointSetValue.c)
 *     HashpVerifyPkcs1Signature @ 0x1408B2320 (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntSetValue @ 0x14056FEDC (SymCryptFdefIntSetValue.c)
 */

__int64 SymCryptIntSetValue()
{
  return SymCryptFdefIntSetValue();
}
