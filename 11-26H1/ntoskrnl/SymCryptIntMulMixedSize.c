/*
 * XREFs of SymCryptIntMulMixedSize @ 0x14055C37C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtSolve @ 0x140562634 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntMulMixedSize @ 0x14056884C (SymCryptFdefIntMulMixedSize.c)
 */

__int64 __fastcall SymCryptIntMulMixedSize(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntMulMixedSize(a1, a2, a3, a4, a5);
}
