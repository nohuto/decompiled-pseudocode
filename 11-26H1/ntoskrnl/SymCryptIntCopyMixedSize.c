/*
 * XREFs of SymCryptIntCopyMixedSize @ 0x14055C1D8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x1405598D8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x140559E18 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtSolve @ 0x140562634 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140562838 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntCopyMixedSize @ 0x140570A9C (SymCryptFdefIntCopyMixedSize.c)
 */

__int64 SymCryptIntCopyMixedSize()
{
  return SymCryptFdefIntCopyMixedSize();
}
