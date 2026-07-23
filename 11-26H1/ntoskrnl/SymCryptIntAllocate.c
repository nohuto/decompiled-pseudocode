/*
 * XREFs of SymCryptIntAllocate @ 0x14055E630
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140565454 (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptFdefIntAllocate @ 0x14056FB14 (SymCryptFdefIntAllocate.c)
 */

__int64 SymCryptIntAllocate()
{
  return SymCryptFdefIntAllocate();
}
