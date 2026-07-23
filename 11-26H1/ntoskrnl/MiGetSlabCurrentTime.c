/*
 * XREFs of MiGetSlabCurrentTime @ 0x140207480
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiFreeUnusedSlabPages @ 0x1402A6920 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x1402A6AEC (MiFreeSlabEntries.c)
 *     MiSlabUpdateRecentFailure @ 0x1402A6D10 (MiSlabUpdateRecentFailure.c)
 *     MiCheckMdlSlabFragmentation @ 0x1402A6D4C (MiCheckMdlSlabFragmentation.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E8E7C (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiInsertSlabEntry @ 0x1404BCC44 (MiInsertSlabEntry.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 */

ULONG64 MiGetSlabCurrentTime()
{
  ULONG64 result; // rax
  unsigned __int64 QpcTimeStamp; // [rsp+30h] [rbp+8h] BYREF

  result = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  if ( !result )
    return 1LL;
  return result;
}
