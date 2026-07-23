/*
 * XREFs of KeSystemFullyCacheCoherent @ 0x1405F3980
 * Callers:
 *     HalpGetCacheCoherency @ 0x1407838A0 (HalpGetCacheCoherency.c)
 * Callees:
 *     <none>
 */

__int64 KeSystemFullyCacheCoherent()
{
  return (unsigned int)KiSystemFullyCoherent;
}
