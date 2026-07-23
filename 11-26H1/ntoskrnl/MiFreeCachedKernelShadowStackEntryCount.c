/*
 * XREFs of MiFreeCachedKernelShadowStackEntryCount @ 0x140703E58
 * Callers:
 *     MiCreatePartitionOffsets @ 0x14086F090 (MiCreatePartitionOffsets.c)
 * Callees:
 *     <none>
 */

__int64 MiFreeCachedKernelShadowStackEntryCount()
{
  return 1536LL * (unsigned __int16)KeNumberNodes;
}
