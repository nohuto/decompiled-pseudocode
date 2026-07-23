/*
 * XREFs of PoSetProcessorQos @ 0x140331A90
 * Callers:
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventVpQosChange @ 0x14052BCA4 (PpmEventVpQosChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmHvSetVirtualProcessorQos @ 0x140535098 (PpmHvSetVirtualProcessorQos.c)
 */

__int64 __fastcall PoSetProcessorQos(__int64 a1, int a2)
{
  __int64 v2; // rdi
  bool v3; // r14
  char v4; // r15
  unsigned __int8 v6; // bp
  __int64 v7; // rsi
  bool v8; // al
  volatile signed __int32 *v9; // rcx
  int v10; // eax
  bool v11; // zf
  __int64 v12; // r9
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v19; // eax
  __int64 v20; // rdx
  unsigned __int32 v21; // ett
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = 0;
  v4 = 0;
  v6 = 1;
  if ( a2 == *(_DWORD *)(a1 + 35408) )
    return 1LL;
  v7 = *(_QWORD *)(a1 + 35272);
  if ( v7 && *(_BYTE *)(v7 + 169) )
  {
    v4 = 1;
    v8 = KeDisableInterrupts();
    v9 = (volatile signed __int32 *)(v7 + 176);
    v3 = v8;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v9, 0LL) )
        KxWaitForSpinLockAndAcquire(v9);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v9);
    }
  }
  v10 = *(unsigned __int16 *)(a1 + 35416);
  if ( !_bittest(&v10, v2) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35392);
    if ( PpmPerfQosHysteresis[7 * v2 + *(int *)(a1 + 35408)] && v15 < *(_QWORD *)(a1 + 35400) && !*(_BYTE *)(a1 + 35358) )
    {
      v6 = 0;
      goto LABEL_11;
    }
    v16 = 2LL * *(_QWORD *)(a1 + 35400);
    *(LARGE_INTEGER *)(a1 + 35392) = PerformanceCounter;
    *(_BYTE *)(a1 + 35358) = v15 >= v16;
  }
  v11 = PpmPerfVmQosSupported == 0;
  *(_DWORD *)(a1 + 35408) = v2;
  if ( v11 )
  {
    PpmPerfArbitratorApplyProcessorState(a1, 1LL, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 35412) = v2;
    PpmHvSetVirtualProcessorQos(a1);
    PpmEventVpQosChange(a1);
  }
  *(_BYTE *)(a1 + 236) = v2;
LABEL_11:
  if ( v4 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 176), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v7 + 176), retaddr);
    if ( v3 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v19 = *SchedulerAssist;
        do
        {
          v20 = v19;
          LODWORD(v20) = v19 & 0xFFDFFFFF;
          v21 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v19 & 0xFFDFFFFF, v19);
        }
        while ( v21 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v20, SchedulerAssist, v12);
      }
      _enable();
    }
  }
  return v6;
}
