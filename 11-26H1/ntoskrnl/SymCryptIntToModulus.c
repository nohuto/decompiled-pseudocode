/*
 * XREFs of SymCryptIntToModulus @ 0x14055C4A8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeySetValueInternal @ 0x14055A418 (SymCryptRsakeySetValueInternal.c)
 *     SymCryptEcurveInitialize @ 0x14055ADA4 (SymCryptEcurveInitialize.c)
 * Callees:
 *     SymCryptFdefIntToModulus @ 0x14056F104 (SymCryptFdefIntToModulus.c)
 */

__int64 __fastcall SymCryptIntToModulus(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToModulus(a1, a2, a3, a4, a5, a6);
}
