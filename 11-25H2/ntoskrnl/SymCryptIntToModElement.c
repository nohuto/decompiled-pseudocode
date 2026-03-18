/*
 * XREFs of SymCryptIntToModElement @ 0x140521358
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaTruncateHash @ 0x140521E48 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405224E0 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x140526470 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 * Callees:
 *     SymCryptFdefIntToModElement @ 0x14053305C (SymCryptFdefIntToModElement.c)
 */

__int64 __fastcall SymCryptIntToModElement(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntToModElement(a1, a2, a3, a4, a5);
}
