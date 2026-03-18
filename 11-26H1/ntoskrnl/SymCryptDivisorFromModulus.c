/*
 * XREFs of SymCryptDivisorFromModulus @ 0x14055C100
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x14055B8D0 (SymCryptEckeySetValue.c)
 *     SymCryptRsaCoreDecCrt @ 0x14055E3DC (SymCryptRsaCoreDecCrt.c)
 * Callees:
 *     SymCryptFdefDivisorFromModulus @ 0x14056F054 (SymCryptFdefDivisorFromModulus.c)
 */

__int64 SymCryptDivisorFromModulus()
{
  return SymCryptFdefDivisorFromModulus();
}
