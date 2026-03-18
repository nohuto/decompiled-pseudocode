/*
 * XREFs of KeCheckAndApplyBamQos @ 0x140330350
 * Callers:
 *     KeUpdateThreadTag @ 0x1402C4800 (KeUpdateThreadTag.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     KeSetThreadSchedulerAssist @ 0x1403BFAB8 (KeSetThreadSchedulerAssist.c)
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14032FC60 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x140330628 (KeUpdatePendingQosRequest.c)
 *     PpmEventVpQosChange @ 0x140529810 (PpmEventVpQosChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140532BF8 (PpmHvSetVirtualProcessorQos.c)
 */

void __fastcall KeCheckAndApplyBamQos(__int64 a1)
{
  bool v2; // al
  LARGE_INTEGER v3; // r9
  __int64 v4; // r8
  int v5; // r13d
  bool v6; // r12
  __int64 v7; // rsi
  int v8; // edi
  char v9; // bp
  bool v10; // r14
  __int64 v11; // r15
  bool v12; // al
  volatile signed __int32 *v13; // rcx
  int v14; // eax
  bool v15; // zf
  char v16; // si
  volatile signed __int64 *v17; // rcx
  struct _KPRCB *v18; // rcx
  unsigned __int32 *v19; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  unsigned __int32 v27; // ett
  unsigned __int32 v28; // eax
  __int64 v29; // rdx
  unsigned __int32 v30; // ett
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !KeHeteroSystemQos )
    return;
  v2 = KeDisableInterrupts();
  v5 = *(unsigned __int8 *)(v4 + 516);
  v6 = v2;
  v7 = *(unsigned __int8 *)(v4 + 516);
  if ( v5 != (unsigned __int8)*(_DWORD *)(a1 + 236) )
  {
    v8 = *(_DWORD *)(a1 + 236) & 0x100;
    v9 = 0;
    v10 = 0;
    if ( (_DWORD)v7 == *(_DWORD *)(a1 + 35408) )
      goto LABEL_19;
    v11 = *(_QWORD *)(a1 + 35272);
    if ( v11 && *(_BYTE *)(v11 + 169) )
    {
      v9 = 1;
      v12 = KeDisableInterrupts();
      v13 = (volatile signed __int32 *)(v11 + 176);
      v10 = v12;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        if ( _interlockedbittestandset64(v13, 0LL) )
          KxWaitForSpinLockAndAcquire(v13);
      }
      else
      {
        KiAcquireSpinLockInstrumented(v13);
      }
    }
    v14 = *(unsigned __int16 *)(a1 + 35416);
    if ( !_bittest(&v14, v7) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v21 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35392);
      v3 = PerformanceCounter;
      if ( PpmPerfQosHysteresis[7 * v7 + *(int *)(a1 + 35408)]
        && v21 < *(_QWORD *)(a1 + 35400)
        && !*(_BYTE *)(a1 + 35358) )
      {
        v16 = 0;
LABEL_14:
        if ( v9 )
        {
          v17 = (volatile signed __int64 *)(v11 + 176);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
            _InterlockedAnd64(v17, 0LL);
          else
            KiReleaseSpinLockInstrumented(v17, retaddr);
          if ( v10 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v28 = *SchedulerAssist;
              do
              {
                v29 = v28;
                LODWORD(v29) = v28 & 0xFFDFFFFF;
                v30 = v28;
                v28 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v28 & 0xFFDFFFFF, v28);
              }
              while ( v30 != v28 );
              if ( (v28 & 0x200000) != 0 )
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiRemoveSystemWorkPriorityKick)(
                  CurrentPrcb,
                  v29,
                  SchedulerAssist,
                  (LARGE_INTEGER)v3.QuadPart);
            }
            _enable();
          }
        }
        if ( !v16 )
        {
          *(_DWORD *)(a1 + 236) |= 0x100u;
LABEL_20:
          if ( (v8 != 0) != ((*(_DWORD *)(a1 + 236) >> 8) & 1) )
            KeUpdatePendingQosRequest(a1);
          goto LABEL_22;
        }
LABEL_19:
        *(_DWORD *)(a1 + 236) &= ~0x100u;
        goto LABEL_20;
      }
      v22 = 2LL * *(_QWORD *)(a1 + 35400);
      *(LARGE_INTEGER *)(a1 + 35392) = v3;
      *(_BYTE *)(a1 + 35358) = v21 >= v22;
    }
    v15 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35408) = v7;
    if ( v15 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1u, 0);
    }
    else
    {
      *(_DWORD *)(a1 + 35412) = v7;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)(a1 + 236) = v5;
    v16 = 1;
    goto LABEL_14;
  }
LABEL_22:
  if ( v6 )
  {
    v18 = KeGetCurrentPrcb();
    v19 = (unsigned __int32 *)v18->SchedulerAssist;
    if ( v19 )
    {
      _m_prefetchw(v19);
      v25 = *v19;
      do
      {
        v26 = v25;
        LODWORD(v26) = v25 & 0xFFDFFFFF;
        v27 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v25 & 0xFFDFFFFF, v25);
      }
      while ( v27 != v25 );
      if ( (v25 & 0x200000) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiRemoveSystemWorkPriorityKick)(
          v18,
          v26,
          v19,
          (LARGE_INTEGER)v3.QuadPart);
    }
    _enable();
  }
}
