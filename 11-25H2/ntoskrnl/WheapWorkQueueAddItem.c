/*
 * XREFs of WheapWorkQueueAddItem @ 0x14035455C
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x14064FAA4 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14064FB48 (WheapReportPersistedErrorRecord.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x140354630 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
    else
      KeInsertQueueDpc((PRKDPC)(a1 + 32), 0LL, 0LL);
  }
}
