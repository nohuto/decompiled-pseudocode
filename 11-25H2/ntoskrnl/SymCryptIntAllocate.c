/*
 * XREFs of SymCryptIntAllocate @ 0x140521018
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140526F7C (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptFdefIntAllocate @ 0x1405348EC (SymCryptFdefIntAllocate.c)
 */

__int64 SymCryptIntAllocate()
{
  return SymCryptFdefIntAllocate();
}
