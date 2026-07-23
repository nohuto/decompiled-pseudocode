/*
 * XREFs of KeAccumulateTicks @ 0x140221310
 * Callers:
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiCheckForTimerExpiration @ 0x140220830 (KiCheckForTimerExpiration.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 *     KiQueryEffectivePriorityThread @ 0x140380E90 (KiQueryEffectivePriorityThread.c)
 *     KiCheckKeepAlive @ 0x140453C14 (KiCheckKeepAlive.c)
 *     KiDpcWatchdogCounterReset @ 0x140473AC0 (KiDpcWatchdogCounterReset.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x140473B50 (EtwTraceDpcProfilingStackBegin.c)
 *     KiDpcWatchdogCaptureStack @ 0x140473C20 (KiDpcWatchdogCaptureStack.c)
 *     EtwTraceDpcProfilingStack @ 0x140473CC8 (EtwTraceDpcProfilingStack.c)
 *     HvlInvokeHypervisorDebugger @ 0x140473D58 (HvlInvokeHypervisorDebugger.c)
 *     KiUpdateInterruptRate @ 0x14047E49C (KiUpdateInterruptRate.c)
 *     KdCheckForDebugBreak @ 0x14048198C (KdCheckForDebugBreak.c)
 *     KiDeferDpcWatchdogViolation @ 0x14050FA58 (KiDeferDpcWatchdogViolation.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140530224 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall KeAccumulateTicks(__int64 a1, int a2, int a3, unsigned __int8 a4, char a5, unsigned int a6)
{
  _DWORD *v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // rdx
  int v13; // esi
  ULONG_PTR v14; // rsi
  char v15; // r8
  ULONG_PTR v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // esi
  unsigned int v20; // r12d
  unsigned int v21; // r14d
  unsigned int v22; // r13d
  int v23; // r15d
  bool v24; // zf
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int *v27; // rcx
  ULONG_PTR v28; // r9
  unsigned int v29; // ecx
  int v30; // esi
  unsigned int v31; // r8d
  int v32; // r14d
  unsigned int v33; // edx
  ULONG_PTR v34; // r12
  ULONG_PTR v35; // r13
  unsigned int v36; // r10d
  __int16 v37; // cx
  unsigned int v38; // ecx
  ULONG_PTR v39; // r10
  __int64 v40; // r8
  _QWORD *v41; // rcx
  int v42; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-38h]
  ULONG_PTR *BugCheckParameter4; // [rsp+70h] [rbp+8h]
  int v45; // [rsp+98h] [rbp+30h]

  if ( a6 != 4 )
    KiCheckForTimerExpiration((_BYTE *)a1, a6);
  v10 = *(_DWORD **)(a1 + 8);
  if ( KiTickAccumulationFromAccountingPeriods && (v10[29] & 0x400) == 0 )
    v10[275] = a5 | (2 * v10[275]);
  *(_DWORD *)(a1 + 14528) = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( KiForceIdleDisabled || KiForceIdleState != 4 )
      return;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( !--KiClockPollCycle )
    {
      v14 = (unsigned __int8)KiClockCheckSlot;
      v15 = 0;
      KiClockPollCycle = KiClockKeepAliveCycle;
      v16 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      if ( (unsigned int)(unsigned __int8)KiClockCheckSlot + 1 < (unsigned int)KeNumberProcessors_0 )
        v15 = KiClockCheckSlot + 1;
      KiClockCheckSlot = v15;
      if ( (unsigned __int8)KiCheckKeepAlive(v16) )
      {
        if ( !*(_DWORD *)(v16 + 33696)
          && KeEnableWatchdogTimeout
          && ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, v14);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v16, v14);
        }
        *(_DWORD *)(v16 + 33696) = 0;
      }
    }
  }
  if ( a5 )
  {
    if ( !KiTickAccumulationFromAccountingPeriods )
    {
      *(_DWORD *)(a1 + 34376) += v11;
      v10[183] += v11;
    }
    ++*(_DWORD *)(a1 + 33772);
    KiDpcWatchdogCounterReset(a1);
    goto LABEL_15;
  }
  v13 = 0;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    if ( *(_BYTE *)(a1 + 32) == 2 && *(_BYTE *)(a1 + 14522) )
    {
      ++*(_DWORD *)(a1 + 34396);
      v13 = 1;
    }
  }
  else
  {
    v24 = *(_BYTE *)(a1 + 32) == 2;
    *(_DWORD *)(a1 + 34372) += v11;
    if ( v24 && *(_BYTE *)(a1 + 14522) )
    {
      *(_DWORD *)(a1 + 34380) += v11;
      v13 = 1;
      ++*(_DWORD *)(a1 + 34396);
    }
    else if ( *(_BYTE *)(a1 + 32) <= 1u )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 652LL) += v11;
    }
    else
    {
      *(_DWORD *)(a1 + 34384) += v11;
    }
  }
  if ( a4 >= 2u )
  {
    ++*(_DWORD *)(a1 + 33708);
LABEL_37:
    v18 = *(_DWORD *)(a1 + 34624);
    v19 = v18;
    if ( !v18 || v18 > *(_DWORD *)(a1 + 33716) )
      v19 = *(_DWORD *)(a1 + 33716);
    if ( v19 )
    {
      v20 = *(_DWORD *)(a1 + 34396);
      v21 = v20;
      v22 = *(_DWORD *)(a1 + 33708);
      if ( v20 <= v22 )
        v21 = *(_DWORD *)(a1 + 33708);
      if ( v19 == v21 )
        EtwTraceDpcProfilingStackBegin(*(_DWORD *)(a1 + 33772), v19, v20, v22, 0);
      if ( v18 && v18 == v20 )
        EtwTraceDpcProfilingStackBegin(*(_DWORD *)(a1 + 33772), v20, v20, v22, 1);
      if ( v19 <= v21 )
      {
        KiDpcWatchdogCaptureStack(a1);
        EtwTraceDpcProfilingStack(*(unsigned int *)(a1 + 33772), v21);
      }
      v23 = 0;
      if ( v19 < 0x20 )
        v24 = v21 == 16;
      else
        v24 = v21 == v19 >> 1;
      LOBYTE(v23) = v24;
    }
    else
    {
      v23 = 0;
    }
    v25 = *(_DWORD *)(a1 + 14540);
    v26 = *(_DWORD *)(a1 + 34396);
    v27 = (unsigned int *)(a1 + 34396);
    if ( v25 )
    {
      if ( v26 >= v25 )
      {
        v39 = *(_QWORD *)(a1 + 14544);
        if ( v39 )
        {
          v40 = *(_QWORD *)(a1 + 14432);
          if ( v40 )
          {
            v41 = (_QWORD *)(v40 + 24);
            if ( *(_DWORD *)(v39 + 72) )
            {
              if ( *(_QWORD *)(v39 + 64) == *v41 )
                *(_DWORD *)(v39 + 72) = v26;
              v27 = (unsigned int *)(a1 + 34396);
            }
            else
            {
              *(_DWORD *)(v39 + 72) = v26;
              *(_QWORD *)(v39 + 64) = *v41;
              KiInsertQueueDpc(v39, 0);
              v27 = (unsigned int *)(a1 + 34396);
            }
          }
        }
      }
    }
    v28 = *v27;
    v29 = *(_DWORD *)(a1 + 33704);
    v30 = 0;
    v31 = *(_DWORD *)(a1 + 33708);
    v32 = 0;
    v33 = *(_DWORD *)(a1 + 34400);
    v34 = 0LL;
    v35 = 0LL;
    v45 = 0;
    v36 = 0;
    BugCheckParameter3 = 0LL;
    BugCheckParameter4 = 0LL;
    if ( v29 )
    {
      LOBYTE(v30) = v31 == v29 >> 1;
      if ( v31 >= v29 )
      {
        v32 = 1;
        BugCheckParameter4 = 0LL;
        v34 = 1LL;
        BugCheckParameter3 = (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock;
        v35 = v29;
        v36 = 2;
      }
    }
    if ( v33 && (unsigned int)v28 >= v33 )
    {
      v45 = 1;
      v34 = 0LL;
      v35 = v28;
      BugCheckParameter3 = *(unsigned int *)(a1 + 34400);
      BugCheckParameter4 = &KeDpcWatchdogProfileGlobalTriageBlock;
      v36 = 3;
    }
    else if ( !v32 )
    {
LABEL_60:
      if ( v23 | v30 )
        KiInsertQueueDpc(a1 + 35624, 0);
      goto LABEL_15;
    }
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(v36, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KiForceBugcheckForDpcWatchdog )
      {
        if ( !v45 || SLODWORD(KsepShimDbLock.QueueListEntry.Flink) <= 0 )
          KeBugCheckEx(0x133u, v34, v35, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        KiDeferDpcWatchdogViolation();
LABEL_90:
        *(_DWORD *)(a1 + 34396) = 0;
        KiResetGlobalDpcWatchdogProfiler(a1);
LABEL_91:
        if ( v32 )
        {
          KiDpcWatchdogCounterReset(a1);
          ++*(_DWORD *)(a1 + 33772);
        }
        goto LABEL_60;
      }
      v42 = v45;
      if ( v45 )
        __int2c();
      if ( v32 )
        __int2c();
    }
    else
    {
      v42 = v45;
    }
    if ( !v42 )
      goto LABEL_91;
    goto LABEL_90;
  }
  KiDpcWatchdogCounterReset(a1);
  ++*(_DWORD *)(a1 + 33772);
  if ( v13 )
    goto LABEL_37;
LABEL_15:
  if ( !KiTickAccumulationFromAccountingPeriods
    && v10 != *(_DWORD **)(a1 + 24)
    && *(_BYTE *)(a1 + 32) <= 1u
    && (int)KiQueryEffectivePriorityThread(v10, a1) < 8 )
  {
    *(_DWORD *)(a1 + 34412) += v11;
  }
  KiUpdateInterruptRate(a1, v11);
  v12 = *(unsigned int *)(a1 + 14428);
  *(_DWORD *)(a1 + 14508) = (unsigned int)(*(_DWORD *)(a1 + 14508) + *(_DWORD *)(a1 + 14428) - *(_DWORD *)(a1 + 14516)) >> v11;
  *(_DWORD *)(a1 + 14516) = v12;
  if ( !*(_DWORD *)(a1 + 14424) || (v37 = *(_WORD *)(a1 + 14524), (v37 & 3) != 0) )
  {
    v24 = (*(_DWORD *)(a1 + 34388))-- == 1;
    if ( v24 )
    {
      *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
      v17 = *(_DWORD *)(a1 + 14504);
      if ( v17 < KiMaximumDpcQueueDepth )
        *(_DWORD *)(a1 + 14504) = v17 + 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
    if ( (v37 & 0xAF) == 0 )
    {
      LOBYTE(v12) = 2;
      KiRequestSoftwareInterrupt(a1, v12);
    }
    v38 = *(_DWORD *)(a1 + 14504);
    if ( *(_DWORD *)(a1 + 14508) < (unsigned int)KiIdealDpcRate && v38 > 1 )
      *(_DWORD *)(a1 + 14504) = v38 - 1;
  }
LABEL_18:
  if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) && KiPollSlot == *(_DWORD *)(a1 + 36) )
    KdCheckForDebugBreak();
}
