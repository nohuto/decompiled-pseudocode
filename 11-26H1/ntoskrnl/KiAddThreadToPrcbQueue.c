/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1403096A0
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14043E8C0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     KiIsThreadExemptFromForcePark @ 0x14023137C (KiIsThreadExemptFromForcePark.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140308BF0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     KiArmForceParkDutyCyclingForLocalReadyQueue @ 0x14050FE94 (KiArmForceParkDutyCyclingForLocalReadyQueue.c)
 *     KiArmForceParkDutyCyclingForSharedReadyQueue @ 0x14052B5F8 (KiArmForceParkDutyCyclingForSharedReadyQueue.c)
 */

int *__fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, int *a6)
{
  __int64 v7; // r15
  __int64 v10; // rcx
  _WORD *v11; // rdx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  _WORD *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // esi
  __int64 v32; // rcx
  bool v33; // bl
  _KERNEL_SHADOW_STACK_LIMIT **v34; // rax
  _QWORD *ExtendedFeatureDisableMask; // rdx
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // rax
  _WORD *v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int8 v47; // dl
  int *result; // rax
  __int64 v49; // rcx
  __int128 v50; // [rsp+30h] [rbp-38h] BYREF
  int v51; // [rsp+78h] [rbp+10h] BYREF

  v7 = (int)a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    v33 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.WpsFeedback);
      v34 = (_KERNEL_SHADOW_STACK_LIMIT **)(a2 + 1008);
      if ( *(_QWORD *)(a2 + 1008) == 1LL )
      {
        ExtendedFeatureDisableMask = (_QWORD *)KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask;
        v33 = KiSupervisorXStateFeaturesLock.KernelShadowStackLimit.AllFields == (_QWORD)&KiSupervisorXStateFeaturesLock.KernelShadowStackLimit;
        if ( *(struct _KTHREAD **)KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask != (struct _KTHREAD *)&KiSupervisorXStateFeaturesLock.KernelShadowStackLimit )
          goto LABEL_15;
        *v34 = &KiSupervisorXStateFeaturesLock.KernelShadowStackLimit;
        *(_QWORD *)(a2 + 1016) = ExtendedFeatureDisableMask;
        *ExtendedFeatureDisableMask = v34;
        KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask = a2 + 1008;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)&KiSupervisorXStateFeaturesLock.WpsFeedback);
      if ( v33 )
        KiInsertQueueDpc((ULONG_PTR)&KiSupervisorXStateFeaturesLock.Spare35[1], 0LL, 0LL, 0LL, 0);
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) != 0 && (v10 = *(_QWORD *)(a1 + 36480)) != 0 )
  {
    v11 = *(_WORD **)(a2 + 576);
    v12 = 0;
    v13 = *(unsigned __int8 *)(a1 + 208);
    if ( (unsigned __int16)v13 >= *v11 )
      v14 = 0LL;
    else
      v14 = *(_QWORD *)&v11[4 * v13 + 4];
    if ( (v10 & v14) == v10 && !a5 )
    {
      v15 = *(_QWORD *)(a1 + 36488);
      v16 = (_QWORD *)(v15 + 16 * (v7 + 4));
      v50 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v50 + 1) = v15;
        *(_QWORD *)&v50 = 0LL;
        v17 = _InterlockedExchange64((volatile __int64 *)v15, (__int64)&v50);
        if ( v17 )
          KxWaitForLockOwnerShip((volatile signed __int64)&v50, v17, a3);
      }
      else
      {
        v51 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
        {
          do
            KeYieldProcessorEx(&v51);
          while ( *(_QWORD *)v15 );
        }
      }
      v18 = (_QWORD *)(a2 + 216);
      if ( !a4 )
      {
        v19 = (_QWORD *)v16[1];
        if ( (_QWORD *)*v19 != v16 )
          goto LABEL_15;
        *v18 = v16;
        *(_QWORD *)(a2 + 224) = v19;
        *v19 = v18;
        v16[1] = v18;
LABEL_51:
        *(_DWORD *)(v15 + 8) |= 1 << v7;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        if ( ++*(_DWORD *)(v15 + 12) == 1 )
          _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v15 + 720) + 392LL), *(_QWORD *)(v15 + 712));
        v36 = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1784) = v36;
        *(_QWORD *)(v15 + 16) += v36;
        v37 = *(_DWORD *)(a2 + 84);
        *(_BYTE *)(a2 + 1828) = *(_BYTE *)(a2 + 516);
        *(_DWORD *)(a2 + 1788) = v37;
        v38 = *(_DWORD *)(a2 + 80);
        if ( v38 <= v37 )
          v38 = v37;
        *(_BYTE *)(a2 + 1830) = v38 >= KiDynamicHeteroCpuPolicyExpectedCycles;
        *(_BYTE *)(a2 + 1829) = *(_BYTE *)(a2 + 517);
        v39 = *(unsigned __int16 *)(v15 + 710);
        *(_OWORD *)(a2 + 1800) = 0LL;
        v40 = *(_WORD **)(a2 + 576);
        *(_WORD *)(a2 + 1808) = v39;
        if ( (unsigned __int16)v39 >= *v40 )
          v41 = 0LL;
        else
          v41 = *(_QWORD *)&v40[4 * v39 + 4];
        *(_QWORD *)(a2 + 1800) = v41;
        if ( *(_DWORD *)(a2 + 1788) > (unsigned int)KeSoftParkedQueueThreshold )
          *(_DWORD *)(a2 + 1788) = KeSoftParkedQueueThreshold;
        v42 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 768), 0LL) )
        {
          do
          {
            if ( (++v42 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v42);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v15 + 768) );
        }
        *(_QWORD *)(a2 + 1792) = *(_QWORD *)(v15 + 776);
        ++*(_DWORD *)(v15 + 784);
        *(_QWORD *)(v15 + 792) += *(unsigned int *)(a2 + 1788);
        *(_QWORD *)(v15 + 1760) |= *(_QWORD *)(a2 + 1800);
        v43 = *(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828);
        v44 = *(unsigned __int8 *)(a2 + 1829) + 8 * v43;
        *(_QWORD *)(v15 + 8 * v44 + 864) += *(unsigned int *)(a2 + 1788);
        if ( KeSoftParkedQueueThreshold )
        {
          if ( *(_QWORD *)(v15 + 792) > (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold )
          {
            v45 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)*(unsigned __int16 *)(v15 + 710)].Flink
                                               + *(unsigned __int8 *)(v15 + 705))]
                            + 192);
            v43 = ~*(_QWORD *)(v45 + 80);
            if ( (v43 & *(_QWORD *)(v45 + 96)) != 0 && !*(_BYTE *)(v15 + 788) )
            {
              *(_BYTE *)(v15 + 788) = 1;
              KiInsertQueueDpc(v15 + 800, 0LL, 0LL, 0LL, 0);
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 768), 0LL);
        if ( KiForceParkingConfiguration && (*(_BYTE *)(a1 + 35) & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a2) )
          KiArmForceParkDutyCyclingForSharedReadyQueue(a1, v15);
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          _m_prefetchw(&v50);
          v46 = v50;
          if ( (_QWORD)v50 )
            goto LABEL_76;
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v50 + 1),
                             0LL,
                             (signed __int64)&v50) != &v50 )
          {
            v46 = KxWaitForLockChainValid((__int64 *)&v50, v43, a3);
LABEL_76:
            *(_QWORD *)&v50 = 0LL;
            v47 = BYTE8(v50);
            if ( ((v47 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v46 + 8), *((__int64 *)&v50 + 1))) & 4) != 0 )
              KeWakeAddressAll();
          }
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
        }
        v12 = 1;
        goto LABEL_79;
      }
      v20 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) == v16 )
      {
        *v18 = v20;
        *(_QWORD *)(a2 + 224) = v16;
        *(_QWORD *)(v20 + 8) = v18;
        *v16 = v18;
        _bittestandreset((signed __int32 *)(a1 + 33756), v7);
        goto LABEL_51;
      }
LABEL_15:
      __fastfail(3u);
    }
  }
  else
  {
    v12 = 0;
  }
  v21 = (_QWORD *)(a2 + 216);
  v22 = (_QWORD *)(a1 + 16 * (v7 + 2116));
  if ( a4 )
  {
    v32 = *v22;
    if ( *(_QWORD **)(*v22 + 8LL) != v22 )
      goto LABEL_15;
    *v21 = v32;
    *(_QWORD *)(a2 + 224) = v22;
    *(_QWORD *)(v32 + 8) = v21;
    *v22 = v21;
    _bittestandset((signed __int32 *)(a1 + 33756), v7);
  }
  else
  {
    v23 = (_QWORD *)v22[1];
    if ( (_QWORD *)*v23 != v22 )
      goto LABEL_15;
    *v21 = v22;
    *(_QWORD *)(a2 + 224) = v23;
    *v23 = v21;
    v22[1] = v21;
  }
  *(_DWORD *)(a1 + 33752) |= 1 << v7;
  if ( ++*(_DWORD *)(a1 + 34420) == 1 && !*(_QWORD *)(a1 + 33840) )
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), *(_QWORD *)(a1 + 200));
  v24 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 1784) = v24;
  *(_QWORD *)(a1 + 34424) += v24;
  v25 = *(_QWORD *)(a1 + 36488);
  v26 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 1828) = *(_BYTE *)(a2 + 516);
  *(_DWORD *)(a2 + 1788) = v26;
  v27 = *(_DWORD *)(a2 + 80);
  if ( v27 <= v26 )
    v27 = v26;
  *(_BYTE *)(a2 + 1830) = v27 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1829) = *(_BYTE *)(a2 + 517);
  v28 = *(unsigned __int16 *)(v25 + 710);
  *(_OWORD *)(a2 + 1800) = 0LL;
  v29 = *(_WORD **)(a2 + 576);
  *(_WORD *)(a2 + 1808) = v28;
  if ( (unsigned __int16)v28 >= *v29 )
    v30 = 0LL;
  else
    v30 = *(_QWORD *)&v29[4 * v28 + 4];
  *(_QWORD *)(a2 + 1800) = v30;
  if ( *(_DWORD *)(a2 + 1788) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 1788) = KeSoftParkedQueueThreshold;
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 768), 0LL) )
  {
    do
    {
      if ( (++v31 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v31);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v25 + 768) );
  }
  *(_QWORD *)(a2 + 1792) = *(_QWORD *)(v25 + 776);
  ++*(_DWORD *)(v25 + 784);
  *(_QWORD *)(v25 + 792) += *(unsigned int *)(a2 + 1788);
  *(_QWORD *)(v25 + 1760) |= *(_QWORD *)(a2 + 1800);
  v49 = *(unsigned __int8 *)(a2 + 1829) + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
  *(_QWORD *)(v25 + 8 * v49 + 864) += *(unsigned int *)(a2 + 1788);
  KiScheduleSoftParkElectionIfNecessary(v25);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 768), 0LL);
  if ( KiForceParkingConfiguration && (*(_BYTE *)(a1 + 35) & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a2) )
    KiArmForceParkDutyCyclingForLocalReadyQueue(a1);
LABEL_79:
  result = a6;
  *a6 = v12;
  return result;
}
