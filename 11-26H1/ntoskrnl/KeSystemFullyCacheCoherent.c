/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405F1010
 * Callers:
 *     HalpGetCacheCoherency @ 0x140780DA0 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
