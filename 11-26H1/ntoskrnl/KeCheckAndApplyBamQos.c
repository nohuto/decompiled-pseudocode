/*
 * XREFs of KeCheckAndApplyBamQos @ 0x140332380
 * Callers:
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     PspUpdateContainerImpersonation @ 0x14037FEA0 (PspUpdateContainerImpersonation.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     PpmEventVpQosChange @ 0x14052BCA4 (PpmEventVpQosChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140535098 (PpmHvSetVirtualProcessorQos.c)
 */

void __fastcall KeCheckAndApplyBamQos(__int64 a1)
{
  bool v2; // al
  __int64 v3; // rdx
  LARGE_INTEGER v4; // r9
  __int64 v5; // r8
  int v6; // r13d
  bool v7; // r12
  __int64 v8; // rsi
  int v9; // edi
  char v10; // bp
  bool v11; // r14
  __int64 v12; // r15
  bool v13; // al
  volatile signed __int32 *v14; // rcx
  int v15; // eax
  bool v16; // zf
  char v17; // si
  volatile signed __int64 *v18; // rcx
  struct _KPRCB *v19; // rcx
  unsigned __int32 *v20; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v26; // eax
  __int64 v27; // rdx
  unsigned __int32 v28; // ett
  unsigned __int32 v29; // eax
  unsigned __int32 v30; // ett
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !KeHeteroSystemQos )
    return;
  v2 = KeDisableInterrupts();
  v6 = *(unsigned __int8 *)(v5 + 516);
  v7 = v2;
  v8 = *(unsigned __int8 *)(v5 + 516);
  if ( v6 != (unsigned __int8)*(_DWORD *)(a1 + 236) )
  {
    v9 = *(_DWORD *)(a1 + 236) & 0x100;
    v10 = 0;
    v11 = 0;
    if ( (_DWORD)v8 == *(_DWORD *)(a1 + 35408) )
      goto LABEL_19;
    v12 = *(_QWORD *)(a1 + 35272);
    if ( v12 && *(_BYTE *)(v12 + 169) )
    {
      v10 = 1;
      v13 = KeDisableInterrupts();
      v14 = (volatile signed __int32 *)(v12 + 176);
      v11 = v13;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64(v14, 0LL) )
          KxWaitForSpinLockAndAcquire(v14);
      }
      else
      {
        KiAcquireSpinLockInstrumented(v14);
      }
    }
    v15 = *(unsigned __int16 *)(a1 + 35416);
    if ( !_bittest(&v15, v8) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v22 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35392);
      v4 = PerformanceCounter;
      v3 = *(int *)(a1 + 35408) + 7 * v8;
      if ( PpmPerfQosHysteresis[v3] && v22 < *(_QWORD *)(a1 + 35400) && !*(_BYTE *)(a1 + 35358) )
      {
        v17 = 0;
LABEL_14:
        if ( v10 )
        {
          v18 = (volatile signed __int64 *)(v12 + 176);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            _InterlockedAnd64(v18, 0LL);
          else
            KiReleaseSpinLockInstrumented(v18, retaddr);
          if ( v11 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v29 = *SchedulerAssist;
              do
              {
                v3 = v29;
                LODWORD(v3) = v29 & 0xFFDFFFFF;
                v30 = v29;
                v29 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v29 & 0xFFDFFFFF, v29);
              }
              while ( v30 != v29 );
              if ( (v29 & 0x200000) != 0 )
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiRemoveSystemWorkPriorityKick)(
                  CurrentPrcb,
                  v3,
                  SchedulerAssist,
                  (LARGE_INTEGER)v4.QuadPart);
            }
            _enable();
          }
        }
        if ( !v17 )
        {
          *(_DWORD *)(a1 + 236) |= 0x100u;
LABEL_20:
          if ( (v9 != 0) != ((*(_DWORD *)(a1 + 236) >> 8) & 1) )
            KeUpdatePendingQosRequest(a1, v3);
          goto LABEL_22;
        }
LABEL_19:
        *(_DWORD *)(a1 + 236) &= ~0x100u;
        goto LABEL_20;
      }
      v23 = 2LL * *(_QWORD *)(a1 + 35400);
      *(LARGE_INTEGER *)(a1 + 35392) = v4;
      *(_BYTE *)(a1 + 35358) = v22 >= v23;
    }
    v16 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 35408) = v8;
    if ( v16 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1u, 0);
    }
    else
    {
      *(_DWORD *)(a1 + 35412) = v8;
      PpmHvSetVirtualProcessorQos(a1);
      PpmEventVpQosChange(a1);
    }
    *(_BYTE *)(a1 + 236) = v6;
    v17 = 1;
    goto LABEL_14;
  }
LABEL_22:
  if ( v7 )
  {
    v19 = KeGetCurrentPrcb();
    v20 = (unsigned __int32 *)v19->SchedulerAssist;
    if ( v20 )
    {
      _m_prefetchw(v20);
      v26 = *v20;
      do
      {
        v27 = v26;
        LODWORD(v27) = v26 & 0xFFDFFFFF;
        v28 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)v20, v26 & 0xFFDFFFFF, v26);
      }
      while ( v28 != v26 );
      if ( (v26 & 0x200000) != 0 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiRemoveSystemWorkPriorityKick)(
          v19,
          v27,
          v20,
          (LARGE_INTEGER)v4.QuadPart);
    }
    _enable();
  }
}
