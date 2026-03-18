/*
 * XREFs of PpmCheckQueuePhaseActions @ 0x140252698
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140252E50 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfApplyProcessorStates @ 0x140259FC0 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportParkedCores @ 0x14025A2F0 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x14025B3A0 (PpmParkReportUnparkedCores.c)
 *     PpmParkUnblockIdle @ 0x1404A1F80 (PpmParkUnblockIdle.c)
 * Callees:
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     PpmCheckBeginNewAccountingPeriod @ 0x140256C34 (PpmCheckBeginNewAccountingPeriod.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmCheckQueuePhaseActions(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rsi
  unsigned __int16 i; // bx
  unsigned __int64 v8; // rdx
  __int64 Prcb; // rdx
  int v10; // ett

  result = RtlCountSetBitsAffinityEx((unsigned __int16 *)a1);
  v5 = result;
  if ( (_DWORD)result )
  {
    result = PpmCheckBeginNewAccountingPeriod(PopSleepstudySessionLock.SavedApcState.ApcListHead[0].Flink);
    _InterlockedAdd((volatile signed __int32 *)&PopSleepstudySessionLock.ApcStateFill[8], v5);
    v6 = *(_QWORD *)(a1 + 8);
    for ( i = 0; ; v6 = *(_QWORD *)(a1 + 8LL * i + 8) )
    {
      while ( v6 )
      {
        _BitScanForward64(&v8, v6);
        v6 &= ~(1LL << v8);
        Prcb = KeGetPrcb(*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                         + 64 * i
                         + (unsigned int)(unsigned __int8)v8));
        _m_prefetchw((const void *)(Prcb + 35240));
        LODWORD(result) = *(_DWORD *)(Prcb + 35240);
        do
        {
          v10 = result;
          result = (unsigned int)_InterlockedCompareExchange(
                                   (volatile signed __int32 *)(Prcb + 35240),
                                   (1 << a2) | result,
                                   result);
        }
        while ( v10 != (_DWORD)result );
        if ( !(_DWORD)result )
          result = KiInsertQueueDpc(Prcb + 35176, 0);
      }
      if ( ++i >= *(_WORD *)a1 )
        break;
      result = i;
    }
  }
  return result;
}
