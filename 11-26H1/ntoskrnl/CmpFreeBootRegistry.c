/*
 * XREFs of CmpFreeBootRegistry @ 0x1406E7E00
 * Callers:
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x14086A188 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
