/*
 * XREFs of PpmPerfSetProcessorIdle @ 0x1403EAB34
 * Callers:
 *     PoIdle @ 0x1403E9FF0 (PoIdle.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14032FC60 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x140330628 (KeUpdatePendingQosRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PpmPerfSetProcessorIdle(__int64 a1, __int64 QuadPart, __int64 a3)
{
  char v3; // r12
  char v4; // r15
  char v5; // bp
  bool v6; // r14
  __int64 v7; // rdi
  _BYTE *v8; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v18; // eax
  __int64 v19; // rdx
  unsigned __int32 v20; // ett

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = (_BYTE *)QuadPart;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(a1 + 35408) != 5 )
  {
    v7 = *(_QWORD *)(a1 + 35272);
    if ( v7 && *(_BYTE *)(v7 + 169) )
    {
      v5 = 1;
      v6 = KeDisableInterrupts();
      KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 176));
    }
    if ( (*(_BYTE *)(a1 + 35416) & 0x20) == 0 )
    {
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
      v10 = QuadPart - *(_QWORD *)(a1 + 35392);
      v11 = *(_QWORD *)(a1 + 35400);
      if ( v10 < v11 && !*(_BYTE *)(a1 + 35358) )
      {
        v12 = *(_DWORD *)(a1 + 236);
        v3 = 1;
        if ( (v12 & 0x100) == 0 )
        {
          v4 = 1;
          v13 = v12 | 0x100;
LABEL_16:
          *(_DWORD *)(a1 + 236) = v13;
          KeUpdatePendingQosRequest(a1, QuadPart, a3);
          goto LABEL_17;
        }
        goto LABEL_17;
      }
      *(_QWORD *)(a1 + 35392) = QuadPart;
      *(_BYTE *)(a1 + 35358) = v10 >= 2 * v11;
    }
    *(_DWORD *)(a1 + 35408) = 5;
    PpmPerfArbitratorApplyProcessorState(a1, 1u, 0);
    *(_BYTE *)(a1 + 236) = 5;
  }
  v14 = *(_DWORD *)(a1 + 236);
  if ( (v14 & 0x100) != 0 )
  {
    v13 = v14 & 0xFFFFFEFF;
    goto LABEL_16;
  }
LABEL_17:
  if ( v5 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 176));
    if ( v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v18 = *SchedulerAssist;
        do
        {
          v19 = v18;
          LODWORD(v19) = v18 & 0xFFDFFFFF;
          v20 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
        }
        while ( v20 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v19, SchedulerAssist, v15);
      }
      _enable();
    }
  }
  if ( v8 )
    *v8 = v3;
  return v4;
}
