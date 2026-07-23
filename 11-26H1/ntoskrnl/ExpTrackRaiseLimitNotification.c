/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x140534998
 * Callers:
 *     ExpLimitDpcInsertEntry @ 0x1406D0248 (ExpLimitDpcInsertEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x1406D0CE4 (ExpTrackTableGetMoreLimit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&stru_140E285C0.Padding[1], (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)&stru_140E285C0.Padding[3], 1, 0) )
    {
      unk_140E28A90 = 0LL;
      unk_140E28A88 = ExpPlProcessNotifications;
      stru_140E285C0.Padding[4] = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140E285C0.Padding[4], NormalWorkQueue);
    }
  }
}
