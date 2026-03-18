/*
 * XREFs of MiGetSlabCurrentTime @ 0x1402073A0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiFreeUnusedSlabPages @ 0x1402A7510 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x1402A76DC (MiFreeSlabEntries.c)
 *     MiSlabUpdateRecentFailure @ 0x1402A7900 (MiSlabUpdateRecentFailure.c)
 *     MiCheckMdlSlabFragmentation @ 0x1402A793C (MiCheckMdlSlabFragmentation.c)
 *     MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E5C8C (MiSlabDemotionLowMemoryConditionUpdate.c)
 *     MiInsertSlabEntry @ 0x1404C33F4 (MiInsertSlabEntry.c)
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207BF0 (KeQueryUnbiasedInterruptTimePrecise.c)
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
