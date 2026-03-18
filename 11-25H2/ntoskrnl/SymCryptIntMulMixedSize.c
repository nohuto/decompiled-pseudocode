/*
 * XREFs of SymCryptIntMulMixedSize @ 0x14052124C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntMulMixedSize @ 0x14052C824 (SymCryptFdefIntMulMixedSize.c)
 */

__int64 __fastcall SymCryptIntMulMixedSize(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntMulMixedSize(a1, a2, a3, a4, a5);
}
