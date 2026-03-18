/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x140493E74
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x140239B30 (KiScheduleNextForegroundBoost.c)
 */

void __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  char v1; // dl

  if ( KiSchedulerForegroundBoostDecayPolicy )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) != 0 )
    {
      v1 = *(_BYTE *)(a1 + 195);
      if ( v1 < 16 && (*(_DWORD *)(a1 + 120) & 8) == 0 && v1 > 0 )
        KiScheduleNextForegroundBoost(a1);
    }
  }
}
