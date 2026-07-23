/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x140309DBC
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 * Callees:
 *     KiIsThreadExemptFromForcePark @ 0x14023137C (KiIsThreadExemptFromForcePark.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140308BF0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x14050FE94 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 */

char __fastcall KiUpdateLocalReadyQueueStatisticsOnInsertion(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rax
  _WORD *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rcx
  char result; // al

  if ( ++*(_DWORD *)(a1 + 34420) == 1 && !*(_QWORD *)(a1 + 33840) )
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), *(_QWORD *)(a1 + 200));
  v4 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 1784) = v4;
  *(_QWORD *)(a1 + 34424) += v4;
  v5 = *(_QWORD *)(a1 + 36488);
  v6 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 1828) = *(_BYTE *)(a2 + 516);
  *(_DWORD *)(a2 + 1788) = v6;
  v7 = *(_DWORD *)(a2 + 80);
  if ( v7 <= v6 )
    v7 = v6;
  *(_BYTE *)(a2 + 1830) = v7 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1829) = *(_BYTE *)(a2 + 517);
  v8 = *(unsigned __int16 *)(v5 + 710);
  *(_OWORD *)(a2 + 1800) = 0LL;
  v9 = *(_WORD **)(a2 + 576);
  *(_WORD *)(a2 + 1808) = v8;
  if ( (unsigned __int16)v8 >= *v9 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&v9[4 * v8 + 4];
  *(_QWORD *)(a2 + 1800) = v10;
  if ( *(_DWORD *)(a2 + 1788) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 1788) = KeSoftParkedQueueThreshold;
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 768), 0LL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v5 + 768) );
  }
  *(_QWORD *)(a2 + 1792) = *(_QWORD *)(v5 + 776);
  ++*(_DWORD *)(v5 + 784);
  *(_QWORD *)(v5 + 792) += *(unsigned int *)(a2 + 1788);
  *(_QWORD *)(v5 + 1760) |= *(_QWORD *)(a2 + 1800);
  v12 = *(unsigned __int8 *)(a2 + 1829) + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
  *(_QWORD *)(v5 + 8 * v12 + 864) += *(unsigned int *)(a2 + 1788);
  result = KiScheduleSoftParkElectionIfNecessary(v5);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 768), 0LL);
  if ( KiForceParkingConfiguration )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    {
      result = KiIsThreadExemptFromForcePark(a2);
      if ( !result )
        return KiArmForceParkDutyCyclingForLocalReadyQueue(a1);
    }
  }
  return result;
}
