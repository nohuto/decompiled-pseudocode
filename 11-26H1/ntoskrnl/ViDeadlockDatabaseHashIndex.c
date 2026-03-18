/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x140C373DC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406470F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14064725C (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
