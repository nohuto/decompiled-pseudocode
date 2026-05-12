/*
 * XREFs of RaidAdapterRequestTimerDeferred @ 0x140029A14
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 */

char __fastcall RaidAdapterRequestTimerDeferred(__int64 a1, __int64 a2, int a3)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1216), 134684676, 134684677) != 134684677
    || a1 == -1200 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 1232) = 1;
    *(_QWORD *)(a1 + 1240) = a2;
    *(_DWORD *)(a1 + 1248) = a3;
    RaidQueueDeferredItem((PVOID)(a1 + 1072));
    return 1;
  }
}
