/*
 * XREFs of PopGetIdleTimesCallback @ 0x14021A720
 * Callers:
 *     PoGetIdleTimes @ 0x14021A3C0 (PoGetIdleTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1402F7C90 (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *v3; // rdi
  __int64 v5; // r15
  BOOL v6; // ecx
  unsigned int v7; // eax
  char v8; // bl
  signed __int64 IdleSequenceNumber; // rax
  signed __int64 v10; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int IdleTimeIdleTicks; // ebp
  unsigned __int64 v13; // r14
  unsigned int IdleTimeKernelTicks; // r12d
  LARGE_INTEGER v15; // r13
  BOOL v16; // eax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned int v19; // edi
  int v20; // eax
  unsigned int i; // r13d
  unsigned int StateCount; // ecx
  __int64 v25; // rax
  bool v26; // zf
  _DWORD *v27; // rdx
  _QWORD *v28; // r15
  unsigned __int64 v29; // r8
  __int64 v30; // rbx
  BOOL v31; // [rsp+20h] [rbp-A8h]
  unsigned int v32; // [rsp+24h] [rbp-A4h]
  unsigned int KernelTime; // [rsp+28h] [rbp-A0h]
  unsigned int v34; // [rsp+2Ch] [rbp-9Ch]
  ULONG SpareLong0; // [rsp+30h] [rbp-98h]
  _PROC_IDLE_ACCOUNTING *IdleAccounting; // [rsp+38h] [rbp-90h]
  _PPM_IDLE_STATES *IdleStates; // [rsp+40h] [rbp-88h]
  signed __int64 v38; // [rsp+48h] [rbp-80h]
  volatile unsigned __int64 IdleTimeSequenceLast; // [rsp+50h] [rbp-78h]
  unsigned __int64 IdleTimeEntry; // [rsp+58h] [rbp-70h]
  _QWORD *v41; // [rsp+60h] [rbp-68h]
  _DWORD *v42; // [rsp+68h] [rbp-60h]
  volatile unsigned __int64 IdleTimeUnaccountedTickTime; // [rsp+70h] [rbp-58h]
  LARGE_INTEGER v44; // [rsp+80h] [rbp-48h]
  char v47; // [rsp+E8h] [rbp+20h]

  v3 = a1;
  v5 = a3;
  v6 = KeGetCurrentPrcb() != a1;
  v7 = 0;
  v31 = v6;
  v8 = 0;
  v38 = 0LL;
  v47 = 0;
  IdleTimeSequenceLast = 0LL;
  while ( 1 )
  {
    do
    {
      if ( v7 >= 5 )
        return (unsigned int)-1073741823;
      v32 = v7 + 1;
      IdleTimeEntry = 0LL;
      v42 = 0LL;
      v41 = 0LL;
      if ( v6 )
      {
        IdleTimeSequenceLast = v3->PowerState.IdleTimeSequenceLast;
        _m_prefetchw((const void *)&v3->PowerState.IdleSequenceNumber);
        IdleSequenceNumber = v3->PowerState.IdleSequenceNumber;
        do
        {
          v10 = IdleSequenceNumber;
          IdleSequenceNumber = _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v3->PowerState.IdleSequenceNumber,
                                 IdleSequenceNumber,
                                 IdleSequenceNumber);
        }
        while ( v10 != IdleSequenceNumber );
        v8 = IdleSequenceNumber & 1;
        v38 = IdleSequenceNumber;
        v47 = IdleSequenceNumber & 1;
        IdleTimeEntry = v3->PowerState.IdleTimeEntry;
      }
      IdleAccounting = v3->PowerState.IdleAccounting;
      IdleStates = v3->PowerState.IdleStates;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      IdleTimeIdleTicks = v3->PowerState.IdleTimeIdleTicks;
      v13 = 0LL;
      IdleTimeKernelTicks = v3->PowerState.IdleTimeKernelTicks;
      v15 = PerformanceCounter;
      v44 = PerformanceCounter;
      v16 = v31;
      v34 = IdleTimeKernelTicks;
      KernelTime = v3->KernelTime;
      SpareLong0 = v3->IdleThread->SchedulerApc.SpareLong0;
      if ( !v31 || v8 )
      {
        IdleTimeIdleTicks = v3->IdleThread->SchedulerApc.SpareLong0;
        IdleTimeKernelTicks = v3->KernelTime;
      }
      IdleTimeUnaccountedTickTime = v3->PowerState.IdleTimeUnaccountedTickTime;
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_OWORD *)(a2 + 32) = 0LL;
        if ( IdleAccounting )
        {
          if ( IdleStates )
          {
            for ( i = 0; ; ++i )
            {
              StateCount = IdleAccounting->StateCount;
              if ( IdleAccounting->StateCount >= IdleStates->ProcessorIdleCount )
                StateCount = IdleStates->ProcessorIdleCount;
              if ( i >= StateCount )
              {
                v3 = a1;
                v13 = 0LL;
                v8 = v47;
                v5 = a3;
                v15 = v44;
                *(_QWORD *)a2 = PpmConvertTimeTo(IdleAccounting->PriorIdleTime, 10000000LL);
                v16 = v31;
                break;
              }
              v25 = i;
              if ( IdleStates->State[v25].StateType )
              {
                if ( IdleStates->State[v25].StateType == 1 )
                  goto LABEL_58;
                v26 = IdleStates->State[v25].StateType == 2;
              }
              else
              {
                if ( !i )
                {
LABEL_58:
                  v27 = (_DWORD *)(a2 + 32);
                  v28 = (_QWORD *)(a2 + 8);
                  goto LABEL_59;
                }
                v26 = i == 1;
              }
              if ( v26 )
              {
                v27 = (_DWORD *)(a2 + 36);
                v28 = (_QWORD *)(a2 + 16);
              }
              else
              {
                v27 = (_DWORD *)(a2 + 40);
                v28 = (_QWORD *)(a2 + 24);
              }
LABEL_59:
              if ( i == IdleStates->ActualState )
              {
                v41 = v28;
                v42 = v27;
              }
              v29 = (unsigned __int64)i << 10;
              if ( v27 && v28 )
              {
                *v27 += *(unsigned int *)((char *)&IdleAccounting->State[0].FailureCount + v29)
                      + *(unsigned int *)((char *)&IdleAccounting->State[0].SuccessCount + v29);
                v30 = *v28;
                *v28 = v30
                     + PpmConvertTimeTo(
                         *(unsigned __int64 *)((char *)&IdleAccounting->State[0].TotalTime + v29),
                         10000000LL);
              }
            }
          }
        }
      }
      if ( v5 )
      {
        if ( !v16 )
          ((void (__fastcall *)(_QWORD, _QWORD))PpmContinueActiveTimeAccumulation)(v3, (LARGE_INTEGER)v15.QuadPart);
        *(_QWORD *)(v5 + 8) = PpmConvertTimeTo(v3->PowerState.PerfFeedback.StallTime, 10000000LL);
      }
      if ( !v31 )
        goto LABEL_23;
      _m_prefetchw((const void *)&v3->PowerState.IdleSequenceNumber);
      v17 = v3->PowerState.IdleSequenceNumber;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)&v3->PowerState.IdleSequenceNumber, v17, v17);
      }
      while ( v18 != v17 );
      v6 = v31;
      v26 = v38 == v17;
      v7 = v32;
    }
    while ( !v26 );
    if ( v8 )
      break;
    v6 = v31;
    if ( IdleTimeSequenceLast == v38 )
    {
      v19 = KernelTime;
      v13 = PpmConvertTimeTo(IdleTimeUnaccountedTickTime, 10000000LL);
      goto LABEL_20;
    }
  }
  if ( v15.QuadPart > IdleTimeEntry )
  {
    v13 = PpmConvertTimeTo(v15.QuadPart - IdleTimeEntry, 10000000LL);
    if ( v41 )
    {
      if ( v42 )
      {
        ++*v42;
        *v41 += v13;
      }
    }
  }
  v19 = KernelTime;
  if ( v34 == KernelTime )
    v13 += PpmConvertTimeTo(IdleTimeUnaccountedTickTime, 10000000LL);
LABEL_20:
  if ( v13 > KeMaximumIncrement )
  {
    v20 = v13 / KeMaximumIncrement - 1;
    IdleTimeIdleTicks += v20;
    IdleTimeKernelTicks += v20;
  }
  if ( !v8 && v19 > IdleTimeKernelTicks )
  {
    IdleTimeKernelTicks = v19;
    if ( IdleTimeIdleTicks <= SpareLong0 )
      IdleTimeIdleTicks = SpareLong0;
  }
LABEL_23:
  if ( a2 )
  {
    if ( IdleAccounting && IdleStates )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = IdleTimeIdleTicks * (unsigned __int64)KeMaximumIncrement;
  }
  if ( v5 )
  {
    *(_DWORD *)v5 = IdleTimeIdleTicks;
    *(_DWORD *)(v5 + 4) = IdleTimeKernelTicks;
  }
  return 0;
}
