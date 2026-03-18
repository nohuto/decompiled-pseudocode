/*
 * XREFs of CmpFreeBootRegistry @ 0x1406E3154
 * Callers:
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 * Callees:
 *     MmFreeBootRegistry @ 0x140863DA8 (MmFreeBootRegistry.c)
 */

__int64 CmpFreeBootRegistry()
{
  return MmFreeBootRegistry();
}
