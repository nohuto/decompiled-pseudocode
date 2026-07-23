/*
 * XREFs of HalpTscAdvSynchLeader @ 0x140585B70
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x140586560 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     HalpTscAdvSynchToLeader @ 0x1404BE28C (HalpTscAdvSynchToLeader.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x140585A84 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x140585D94 (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTscAdvSynchToTarget @ 0x140585E50 (HalpTscAdvSynchToTarget.c)
 *     HalpTscTraceStatus @ 0x14058682C (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x1405868CC (HalpTscTraceSynchronizationSummary.c)
 */

__int64 __fastcall HalpTscAdvSynchLeader(__int64 a1)
{
  __int64 Number; // r15
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 TimeStamp; // r12
  unsigned int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int i; // esi
  unsigned int v11; // eax
  unsigned __int64 v12; // r14
  ULONG_PTR *Timer; // rax
  ULONG_PTR *v14; // rsi
  __int64 result; // rax
  unsigned __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-10h]
  unsigned int v18; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h] BYREF

  Number = KeGetCurrentPrcb()->Number;
  v3 = 0;
  TimeStamp = HalpTscAdvSynchReadTimeStamp(Number);
  if ( HalpTscRequestedSynchronization )
  {
    if ( !HalpTscRequestedIterations )
      HalpTscRequestedIterations = 500;
    if ( *(_BYTE *)(a1 + 34) )
    {
      HalpTscAdvSynchToLeader(*(_DWORD *)(a1 + 36));
    }
    else
    {
      v20 = 0LL;
      v19 = 0LL;
      v6 = *(_DWORD *)(a1 + 40);
      v18 = KeGetCurrentPrcb()->Number;
      HalpTscAdvSynchCalculateRemoteDeltas(&v20, &v19, &v18, v4, v17, v6);
      v7 = v18;
      if ( v18 != KeGetCurrentPrcb()->Number )
      {
        HalpTscAdvSynchReadTimeStamp((unsigned int)Number);
        LODWORD(Number) = v7;
        v8 = HalpTscAdvSynchReadTimeStamp(v7);
        TimeStamp += v8 - v9;
        HalpTscAdvSynchToTarget(v7);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      {
        if ( i != KeGetCurrentPrcb()->Number && i != v7 )
          HalpTscAdvSynchToLeader(i);
      }
    }
  }
  v20 = 0LL;
  v19 = 0LL;
  v11 = *(_DWORD *)(a1 + 40);
  v18 = KeGetCurrentPrcb()->Number;
  HalpTscAdvSynchCalculateRemoteDeltas(&v20, &v19, &v18, v4, v17, v11);
  v12 = (unsigned __int64)(1000000 * (HalpTscAdvSynchReadTimeStamp((unsigned int)Number) - TimeStamp))
      / *(_QWORD *)KeGetPcr()->HalReserved;
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  v14 = Timer;
  HalpTscMaximumComputedSpread = v19 - v20;
  if ( v19 - v20 <= (unsigned __int64)(unsigned int)HalpTscMaximumCounterSyncSpread )
  {
    result = HalpTscTraceSynchronizationSummary(KeGetCurrentPrcb()->Number, v18, v19, v20, v12);
    *((_DWORD *)v14 + 46) |= 0x20u;
  }
  else
  {
    *((_DWORD *)Timer + 46) &= ~0x20u;
    HalpTscSynchronizationFailureFallback = 1;
    result = HalpTscTraceStatus(&HAL_ETW_EVENT_TIMER_SYNCH_FAILED);
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
    {
      result = (__int64)KeGetCurrentPrcb();
      if ( v3 != *(_DWORD *)(result + 36) )
      {
        v16 = (unsigned __int64)v3 << 7;
        _InterlockedExchange((volatile __int32 *)(v16 + TscRequest), 7);
        result = *(unsigned int *)(v16 + TscRequest);
        if ( (_DWORD)result == 7 )
        {
          do
          {
            _mm_pause();
            result = TscRequest;
          }
          while ( *(_DWORD *)(v16 + TscRequest) == 7 );
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 40) );
  }
  return result;
}
