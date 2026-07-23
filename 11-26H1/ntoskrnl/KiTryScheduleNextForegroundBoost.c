/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x14048D9C4
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x14023B490 (KiScheduleNextForegroundBoost.c)
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
