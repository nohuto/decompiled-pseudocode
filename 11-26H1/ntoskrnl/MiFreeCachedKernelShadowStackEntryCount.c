/*
 * XREFs of MiFreeCachedKernelShadowStackEntryCount @ 0x1406FF188
 * Callers:
 *     MiCreatePartitionOffsets @ 0x140868CB0 (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

__int64 MiFreeCachedKernelShadowStackEntryCount()
{
  return 1536LL * (unsigned __int16)KeNumberNodes;
}
