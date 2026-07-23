/*
 * XREFs of SymCryptDivisorFromModulus @ 0x14055E5E8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14055BD68 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x14055DDB4 (SymCryptEckeySetValue.c)
 *     SymCryptRsaCoreDecCrt @ 0x140560900 (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefDivisorFromModulus @ 0x14056E234 (SymCryptFdefDivisorFromModulus.c)
 */

__int64 SymCryptDivisorFromModulus()
{
  return SymCryptFdefDivisorFromModulus();
}
