/*
 * XREFs of ArbLibraryInitialize @ 0x140788ED0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ArbRegReadMmConfigRanges @ 0x140789500 (ArbRegReadMmConfigRanges.c)
 */

__int64 ArbLibraryInitialize()
{
  return ArbRegReadMmConfigRanges();
}
