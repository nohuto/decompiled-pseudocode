/*
 * XREFs of SymCryptIntBitsizeOfValue @ 0x14055C178
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x14055E8B4 (SymCryptRsaCoreEnc.c)
 *     SymCryptFdefIntToDivisor @ 0x140568AC4 (SymCryptFdefIntToDivisor.c)
 *     SymCryptFdefDecideModulusType @ 0x14056EF38 (SymCryptFdefDecideModulusType.c)
 *     HashpVerifyPkcs1Signature @ 0x1408ABEDC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntBitsizeOfValue @ 0x1405709A4 (SymCryptFdefIntBitsizeOfValue.c)
 */

__int64 SymCryptIntBitsizeOfValue()
{
  return SymCryptFdefIntBitsizeOfValue();
}
