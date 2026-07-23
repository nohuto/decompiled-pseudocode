/*
 * XREFs of ArbLibraryInitialize @ 0x14078BA00
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x14078C030 (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
