/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x14032F7F0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x14072E930 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14072EA70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14072EB20 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14072EBC0 (KiInterruptSubDispatchNoLockNoEtw.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402F8398 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiProcessDeferredDpcWatchdogViolation @ 0x14032F218 (KiProcessDeferredDpcWatchdogViolation.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiResetForceIdle @ 0x1403389B4 (KiResetForceIdle.c)
 *     KiCheckAndRearmForceIdle @ 0x140338EAC (KiCheckAndRearmForceIdle.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  volatile signed __int32 *v11; // rcx
  char v13; // di
  volatile signed __int64 *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int DpcWatchdogSequenceNumber; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 88);
  if ( v3 >= 0x30 && !KiForceIdleDisabled && v3 <= 0xCF )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
    return (unsigned __int8)guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 48), a3) != 0;
  v6 = *(_QWORD *)(a1 + 272);
  if ( v6
    && *(_BYTE *)(v6 + 16)
    && (v19 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + KeGetPcr()->Prcb.Number),
        a3 = v19 >> 6,
        (((_DWORD)a3 == *(unsigned __int16 *)(*(_QWORD *)(a1 + 272) + 8LL)) & (unsigned int)(*(_QWORD *)v6 >> v19)) == 0) )
  {
    FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(unsigned __int64 **)(a1 + 272));
    KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity, *(_DWORD *)(a1 + 88));
    return 2;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IsrDpcStats = CurrentPrcb->IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 1;
    CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
    v9 = __rdtsc();
    *(_QWORD *)(a1 + 184) = v9;
    v10 = v9;
    if ( a2 )
    {
      v11 = *(volatile signed __int32 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _interlockedbittestandset64(v11, 0LL) )
          KxWaitForSpinLockAndAcquire(v11);
      }
      else
      {
        KiAcquireSpinLockInstrumented(v11);
      }
      v13 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 48), a3);
      v14 = *(volatile signed __int64 **)(a1 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v14, 0LL);
      else
        KiReleaseSpinLockInstrumented(v14, retaddr);
    }
    else
    {
      v13 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a1 + 48), a3);
    }
    v15 = __rdtsc();
    DpcWatchdogSequenceNumber = CurrentPrcb->DpcWatchdogSequenceNumber;
    v17 = v15 - *(_QWORD *)(a1 + 184);
    if ( DpcWatchdogSequenceNumber != *(_DWORD *)(a1 + 232) )
    {
      *(_DWORD *)(a1 + 232) = DpcWatchdogSequenceNumber;
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_QWORD *)(a1 + 248) = 0LL;
      *(_QWORD *)(a1 + 256) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
    }
    *(_QWORD *)(a1 + 176) += v17;
    *(_QWORD *)(a1 + 240) += v17;
    ++*(_QWORD *)(a1 + 192);
    ++*(_QWORD *)(a1 + 248);
    if ( IsrDpcStats != (_QWORD *)1 )
    {
      v18 = v15 - v10;
      if ( *((_BYTE *)IsrDpcStats + 48) )
        IsrDpcStats[1] += v18;
      else
        IsrDpcStats[4] += v18;
    }
    CurrentPrcb->IsrDpcStats = IsrDpcStats;
    *(_BYTE *)(a1 + 224) = 0;
    if ( CurrentPrcb == *(struct _KPRCB **)&KsepShimDbLock.PriorityFloorCounts[16] && CurrentPrcb->NestingLevel == 2 )
    {
      if ( CurrentPrcb->DpcRoutineActive )
        KiProcessDeferredDpcWatchdogViolation(*(_QWORD *)(a1 + 136));
    }
    return v13 != 0;
  }
}
