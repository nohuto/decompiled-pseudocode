/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x1405324F8
 * Callers:
 *     ExpLimitDpcInsertEntry @ 0x1406CC218 (ExpLimitDpcInsertEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x1406CCCB4 (ExpTrackTableGetMoreLimit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E28440.Padding[1], (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)&stru_140E28440.Padding[3], 1, 0) )
    {
      unk_140E28910 = 0LL;
      unk_140E28908 = ExpPlProcessNotifications;
      stru_140E28440.Padding[4] = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140E28440.Padding[4], NormalWorkQueue);
    }
  }
}
