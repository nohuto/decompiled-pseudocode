/*
 * XREFs of WheapWorkQueueAddItem @ 0x1403DE370
 * Callers:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     WheapReportBootError @ 0x1406D49AC (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1406D4A54 (WheapReportPersistedErrorRecord.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
    else
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
  }
}
