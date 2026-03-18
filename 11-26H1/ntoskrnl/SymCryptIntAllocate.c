/*
 * XREFs of SymCryptIntAllocate @ 0x14055C148
 * Callers:
 *     SymCryptEcDsaSelftest @ 0x140562F44 (SymCryptEcDsaSelftest.c)
 * Callees:
 *     SymCryptFdefIntAllocate @ 0x140570934 (SymCryptFdefIntAllocate.c)
 */

__int64 SymCryptIntAllocate()
{
  return SymCryptFdefIntAllocate();
}
