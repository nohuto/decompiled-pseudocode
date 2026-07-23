/*
 * XREFs of PpmPerfSetProcessorIdle @ 0x1402F7A14
 * Callers:
 *     PoIdle @ 0x1402F6ED0 (PoIdle.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x140331C90 (PpmPerfArbitratorApplyProcessorState.c)
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PpmPerfSetProcessorIdle(__int64 a1, LARGE_INTEGER PerformanceCounter, __int64 a3)
{
  char v3; // r12
  char v4; // r15
  char v5; // bp
  char v6; // r14
  __int64 v7; // rdi
  char *QuadPart; // rsi
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
  QuadPart = (char *)PerformanceCounter.QuadPart;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(a1 + 35408) != 5 )
  {
    v7 = *(_QWORD *)(a1 + 35272);
    if ( v7 && *(_BYTE *)(v7 + 169) )
    {
      v5 = 1;
      v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KeDisableInterrupts)(
             a1,
             (LARGE_INTEGER)PerformanceCounter.QuadPart,
             a3);
      KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 176));
    }
    if ( (*(_BYTE *)(a1 + 35416) & 0x20) == 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v10 = PerformanceCounter.QuadPart - *(_QWORD *)(a1 + 35392);
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
          ((void (__fastcall *)(_QWORD, _QWORD))KeUpdatePendingQosRequest)(
            a1,
            (LARGE_INTEGER)PerformanceCounter.QuadPart);
          goto LABEL_17;
        }
        goto LABEL_17;
      }
      *(LARGE_INTEGER *)(a1 + 35392) = PerformanceCounter;
      *(_BYTE *)(a1 + 35358) = v10 >= 2 * v11;
    }
    *(_DWORD *)(a1 + 35408) = 5;
    LOBYTE(PerformanceCounter.LowPart) = 1;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmPerfArbitratorApplyProcessorState)(
      a1,
      (LARGE_INTEGER)PerformanceCounter.QuadPart,
      0LL);
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
  if ( QuadPart )
    *QuadPart = v3;
  return v4;
}
