/*
 * XREFs of StorAsyncNotificationDeferred @ 0x14007A8A0
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 */

char __fastcall StorAsyncNotificationDeferred(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdx

  v5 = a2 + 1744;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 16), 134684676, 134684677) != 134684677 || !v5 )
    return 0;
  *(_DWORD *)(v5 + 32) = 12;
  *(_QWORD *)(v5 + 40) = a2 + 1992;
  *(_DWORD *)(v5 + 36) = a3;
  *(_QWORD *)(a2 + 2000) = a4;
  RaidQueueDeferredItem((char *)(a1 + 1072), (struct _SLIST_ENTRY *)v5);
  return 1;
}
