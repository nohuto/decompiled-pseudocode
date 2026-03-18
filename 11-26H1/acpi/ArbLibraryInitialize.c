/*
 * XREFs of ArbLibraryInitialize @ 0x1400BF260
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x1400BF928 (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
