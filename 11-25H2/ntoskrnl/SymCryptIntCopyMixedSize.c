/*
 * XREFs of SymCryptIntCopyMixedSize @ 0x1405210A8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E8E8 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCalculatePrivateFields @ 0x14051EE0C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptCrtSolve @ 0x140526674 (SymCryptCrtSolve.c)
 *     SymCryptIntExtendedGcd @ 0x140526874 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntCopyMixedSize @ 0x140534A58 (SymCryptFdefIntCopyMixedSize.c)
 */

__int64 SymCryptIntCopyMixedSize()
{
  return SymCryptFdefIntCopyMixedSize();
}
