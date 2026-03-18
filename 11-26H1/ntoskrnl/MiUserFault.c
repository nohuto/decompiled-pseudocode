/*
 * XREFs of MiUserFault @ 0x1403A3140
 * Callers:
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027DA30 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiReferenceVad @ 0x14027E890 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x14027E8D0 (MiLockVadShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetPrototypePteDirect @ 0x1402D0DC0 (MiGetPrototypePteDirect.c)
 *     MiCheckUserVirtualAddress @ 0x1402D1920 (MiCheckUserVirtualAddress.c)
 *     MiResolveDemandZeroFault @ 0x1402D4B40 (MiResolveDemandZeroFault.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402EB0D0 (MiPerformFaultClusterMaintenance.c)
 *     MiResolvePageTablePage @ 0x1402ECA70 (MiResolvePageTablePage.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiUnlockVadTree @ 0x140326440 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1403A5A20 (MiComputeMaximumFaultCluster.c)
 *     MiAccessCheck @ 0x1403A69D0 (MiAccessCheck.c)
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MiCanFlushMakeProgress @ 0x1403E0D04 (MiCanFlushMakeProgress.c)
 *     MiZeroFault @ 0x140422AB0 (MiZeroFault.c)
 *     MiCheckFatalAccessViolation @ 0x1404A08F4 (MiCheckFatalAccessViolation.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C97C0 (MiCheckHoldFaultForHotPatch.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C9904 (MiUnlockFaultWorkingSet.c)
 *     MiDelayFaultingThread @ 0x1405053C4 (MiDelayFaultingThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405327D4 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckForUserStackOverflow @ 0x140AA2744 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  _QWORD *v4; // r12
  unsigned int v5; // ebx
  _KPROCESS *Process; // r14
  unsigned int v7; // r15d
  unsigned __int64 p_Blink; // rdx
  _QWORD *v9; // rbp
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  __int64 v12; // r11
  __int64 *v13; // r10
  __int64 *v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // si
  __int64 *v19; // rsi
  unsigned __int8 v20; // bl
  __int64 *p_SchedulingGroup; // rcx
  unsigned int v22; // eax
  _DWORD *v23; // rbx
  unsigned int v24; // ebp
  unsigned __int8 CurrentIrql; // di
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  _DWORD *MmInternal; // rcx
  __int64 v29; // r14
  _KPROCESS *v30; // rcx
  struct _LIST_ENTRY *Address; // rax
  unsigned __int64 v32; // rdi
  struct _LIST_ENTRY *v33; // rbp
  _KPROCESS *v34; // r13
  int v35; // r15d
  struct _KTHREAD *v36; // r14
  unsigned __int64 v37; // rdi
  _KPROCESS *v38; // rsi
  _QWORD *v39; // r8
  __int64 v40; // r12
  ULONG_PTR v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  int valid; // ebx
  __int64 v45; // r8
  struct _KLOCK_ENTRIES *v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  void *AutoBoostState2; // rcx
  bool v50; // zf
  unsigned __int64 v51; // rcx
  int v52; // eax
  unsigned __int64 v53; // rsi
  ULONG_PTR v54; // r13
  unsigned __int64 v55; // rsi
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  _KPROCESS *v59; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  int v63; // eax
  __int64 PrototypePteDirect; // rdi
  __int64 v65; // r9
  unsigned __int64 v66; // r8
  _KPROCESS *v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rsi
  unsigned __int64 v72; // rdi
  __int64 v73; // rax
  _DWORD *v74; // r8
  signed __int32 v75; // eax
  signed __int32 v76; // ett
  _KPROCESS *v77; // r9
  __int64 Flink; // rbx
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rdx
  signed __int32 v81; // eax
  signed __int32 v82; // ett
  volatile signed __int32 *v83; // r8
  char v84; // r8
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // r8
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  _KPROCESS *v90; // [rsp+30h] [rbp-88h]
  __int64 v91; // [rsp+38h] [rbp-80h]
  __int64 v92; // [rsp+40h] [rbp-78h] BYREF
  ULONG_PTR v93; // [rsp+48h] [rbp-70h]
  _QWORD *v94; // [rsp+50h] [rbp-68h]
  _KPROCESS *v95; // [rsp+58h] [rbp-60h]
  __int64 v96; // [rsp+60h] [rbp-58h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  _QWORD *v98; // [rsp+C0h] [rbp+8h] BYREF
  int v99; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v100; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v101; // [rsp+D8h] [rbp+20h] BYREF

  v98 = a1;
  CurrentThread = KeGetCurrentThread();
  v99 = 0;
  v4 = a1;
  v91 = (__int64)CurrentThread;
  v94 = a1 + 7;
  v5 = 0;
  Process = CurrentThread->ApcState.Process;
  v7 = 2;
  p_Blink = (unsigned __int64)&Process[2].ReadyListHead.Blink;
  v90 = Process;
  a1[7] = (char *)Process + 1024;
  v93 = 0LL;
  v96 = 0LL;
  v92 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  if ( dword_140E35FD8 )
  {
    v5 = 10;
LABEL_27:
    MiDelayFaultingThread(v5);
    goto LABEL_28;
  }
  if ( LODWORD(Process[2].AvailableCpuState) > 0x10 && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
  {
    a3 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
    if ( *(_DWORD *)(a3 + 1300) == -1 || *(_KPROCESS **)(a3 + 2056) != Process )
    {
      v9 = *(_QWORD **)(stru_140E2EB88.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        v10 = v9[2] + 56320LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
        v11 = *(_QWORD *)(v10 + 3080) + *(_QWORD *)(v10 + 3088);
        if ( v11 >= 0x420 )
          goto LABEL_28;
        v12 = 0LL;
        v13 = MiPageSizes;
        v14 = (__int64 *)(v10 + 16);
        v15 = 3LL;
        do
        {
          v16 = *(v14 - 1);
          v17 = *v14;
          v14 += 128;
          a3 = *v13++;
          p_Blink = a3 * (v16 + v17);
          v12 += p_Blink;
          --v15;
        }
        while ( v15 );
        if ( v12 + v11 >= 0x420 )
          goto LABEL_28;
        CurrentThread = (struct _KTHREAD *)v91;
        Process = v90;
      }
      p_Blink = v9[2808];
      if ( p_Blink >= 0x420 )
        goto LABEL_28;
      v18 = 0;
      if ( CurrentThread[1].SavedApcStateFill[15] != 0xFF && (BYTE2(CurrentThread[1].Queue) & 1) == 0
        || BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) != 0xFF )
      {
        p_Blink += v9[2760];
        if ( p_Blink >= 0x420 )
          goto LABEL_28;
        v18 = 2;
      }
      if ( v9[2906] >= 1056 - p_Blink && (unsigned int)MiCanFlushMakeProgress(v9, 0LL, 1056 - p_Blink) )
      {
        LODWORD(Process[2].AvailableCpuState) = 0;
        if ( Process->BasePriority >= 9 || (v5 = 66036, Process[3].ProcessListEntry.Blink) )
          v5 = 65566;
        if ( (v18 & 2) != 0 )
          v5 |= 0x20000u;
      }
      if ( (_WORD)v5 )
        goto LABEL_27;
    }
  }
LABEL_28:
  v19 = &qword_140E37800;
  if ( (v90[2].ContextSwitches & 0xF) < 6 )
  {
    if ( (v90[2].ContextSwitches & 0xF) == 1 )
      p_SchedulingGroup = &qword_140E37800;
    else
      p_SchedulingGroup = (__int64 *)&v90[2].SchedulingGroup;
    v22 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v23 = (_DWORD *)(*p_SchedulingGroup + ((unsigned __int64)v22 << 6));
    v24 = v22;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw(v23);
      v27 = *v23 & 0x7FFFFFFF;
      v26 = _InterlockedCompareExchange(v23, v27 + 1, v27);
      if ( v27 != v26 )
      {
        while ( v26 >= 0 )
        {
          p_Blink = (unsigned int)v26;
          v26 = _InterlockedCompareExchange(v23, v26 + 1, v26);
          if ( v26 == (_DWORD)p_Blink )
            goto LABEL_48;
        }
        ExpWaitForSpinLockSharedAndAcquire(v23, CurrentIrql, a3);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v23, CurrentIrql);
    }
LABEL_48:
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v24;
    v20 = CurrentIrql;
  }
  else
  {
    v20 = KeGetCurrentIrql();
    if ( v20 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v20, 2LL);
  }
  *((_BYTE *)v4 + 68) = v20;
  v29 = (__int64)(v4 + 7);
  v30 = KeGetCurrentThread()->ApcState.Process;
  if ( (v30[2].ContextSwitches & 0xF) != 1 )
    v19 = (__int64 *)&v30[2].SchedulingGroup;
  if ( (HIBYTE(LODWORD(v30[2].ContextSwitches)) & 0x30) == 0x30
    && v19[4]
    && (unsigned __int64)v4 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1u, p_Blink, a3);
    Address = MiLocateAddress((unsigned __int64)v4);
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
      MiUnlockVadTree(1, 0x11u);
LABEL_72:
      valid = -1073741819;
      goto LABEL_100;
    }
    MiUnlockVadTree(1, 0x11u);
  }
  v32 = *v4;
  if ( *v4 >= 0x7FFFFFFF0000uLL && v32 < 0xFFFF800000000000uLL )
    goto LABEL_72;
  v33 = 0LL;
  v34 = KeGetCurrentThread()->ApcState.Process;
  v95 = v34;
  if ( v34[1].ActiveGroupsMask.Masks[1] )
  {
    v35 = 0;
    if ( v32 < 0x7FFFFFFF0000LL )
    {
      v36 = KeGetCurrentThread();
      v37 = v32 >> 12;
      v38 = v36->ApcState.Process;
      v39 = (_QWORD *)v38[1].ActiveGroupsMask.Masks[1];
      if ( v39 )
      {
        v40 = (__int64)v94;
        do
        {
          v41 = v39[1];
          if ( v37 < (*(unsigned int *)(v41 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v41 + 32) << 32))
            || v37 > (*(unsigned int *)(v41 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v41 + 33) << 32)) )
          {
            v39 = (_QWORD *)*v39;
          }
          else
          {
            if ( (struct _KTHREAD *)v39[2] == v36 )
              break;
            v35 = 1;
            if ( (*(_BYTE *)(v40 + 13) & 1) != 0 )
            {
              MiReferenceVad(v39[1]);
              MiUnlockWorkingSetExclusive((__int64)&v38[2].ReadyListHead.Blink, *(_BYTE *)(v40 + 12));
              MiLockVadShared((__int64)v36, v41, v45, v46);
              MiUnlockAndDereferenceVadShared(v41);
              MiLockWorkingSetExclusive((__int64)&v38[2].ReadyListHead.Blink, v47, v48);
            }
            else
            {
              MiUnlockFaultWorkingSet(v40);
              MiLockWorkingSetExclusive((__int64)&v38[2].ReadyListHead.Blink, v42, v43);
              *(_BYTE *)(v40 + 13) |= 1u;
            }
            v39 = (_QWORD *)v38[1].ActiveGroupsMask.Masks[1];
          }
        }
        while ( v39 );
        v34 = v95;
        v4 = v98;
        if ( v35 )
          goto LABEL_81;
      }
      v29 = (__int64)(v4 + 7);
    }
    v7 = 2;
  }
  AutoBoostState2 = v34[4].AutoBoostState2;
  if ( AutoBoostState2 && (unsigned int)MiCheckHoldFaultForHotPatch(AutoBoostState2, v4) )
  {
LABEL_81:
    valid = 0;
    goto LABEL_100;
  }
  v50 = (v4[1] & 2) == 0;
  v51 = *v4;
  *v4 = *v4;
  if ( !v50 && (v90[1].DirectoryTableBase & 0x1000000000LL) != 0 && v51 < 0xFFFF800000000000uLL )
    v7 = 6;
  if ( v51 < 0x7FFFFFFF0000LL )
    MiPerformFaultClusterMaintenance(v4, v91, 0LL);
  v52 = MiResolvePageTablePage((__int64)v4, 0);
  valid = v52;
  if ( v52 == -1073740748 )
  {
    valid = 0;
LABEL_90:
    v53 = v100;
    v54 = v93;
LABEL_91:
    if ( (v7 & 2) == 0 )
      return (unsigned int)valid;
    if ( (v7 & 1) != 0 && valid >= 0 && v53 >= v54 && (*(_BYTE *)(v29 + 13) & 1) == 0 )
    {
      v55 = ((__int64)(v53 - v54) >> 3) + 1;
      if ( MiComputeMaximumFaultCluster(v4, 0LL) > v55 )
      {
        if ( v7 >= 4 )
          v4[1] &= ~2uLL;
        MiDispatchFault(v4, v55, 0LL);
      }
    }
LABEL_100:
    MiReleaseFaultState((__int64)v94, 0x11u, 0LL);
    return (unsigned int)valid;
  }
  if ( v52 < 0 )
    goto LABEL_90;
  v54 = v4[3];
  v57 = *(_QWORD *)v54;
  v58 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v54 >= 0xFFFFF6FB7DBED000uLL && v54 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v57 & 1) != 0 && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      v59 = KeGetCurrentThread()->ApcState.Process;
      if ( v59->AddressPolicy != 1 )
      {
        if ( v59 )
        {
          KernelWaitTime = v59[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v61 = *(_QWORD *)(KernelWaitTime + 8 * ((v54 >> 3) & 0x1FF));
            if ( (v61 & 0x20) != 0 )
              v57 |= 0x20uLL;
            v62 = v57;
            v57 |= 0x42uLL;
            if ( (v61 & 0x42) == 0 )
              v57 = v62;
          }
        }
      }
    }
    v58 = 0xFFFFF6FB7DBED7F8uLL;
  }
  if ( (v57 & 1) != 0 )
  {
    valid = MiValidFault(v4, v57);
    v7 |= 1u;
    v53 = v54;
    goto LABEL_91;
  }
  if ( v7 >= 4 )
    v4[1] &= ~2uLL;
  if ( !v57 )
  {
    LOBYTE(v98) = 0;
    valid = MiZeroFault((_DWORD)v4, (unsigned int)&v98, (unsigned int)&v99, (unsigned int)&v92, (__int64)&v101);
    if ( (_BYTE)v98 )
    {
      if ( (_BYTE)v98 == 2 )
      {
        MiReleaseFaultState(v29, 0x11u, 0LL);
        v7 &= ~2u;
        v63 = MiCheckForUserStackOverflow(*v4, 1LL);
        v53 = v101;
        valid = v63;
      }
      else
      {
        v53 = v101;
        v7 |= 1u;
      }
      goto LABEL_91;
    }
    PrototypePteDirect = v92;
    LODWORD(v65) = v99;
    v53 = v101;
    goto LABEL_195;
  }
  v65 = (v57 >> 5) & 0x1F;
  if ( (v57 & 0x400) == 0 )
  {
    PrototypePteDirect = v96;
    v53 = v100;
    goto LABEL_195;
  }
  v66 = *(_QWORD *)v54;
  if ( v54 >= 0xFFFFF6FB7DBED000uLL
    && v54 <= 0xFFFFF6FB7DBED7F8uLL
    && (v66 & 1) != 0
    && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
  {
    v67 = MiPteHasShadow();
    if ( v67 )
    {
      v68 = v67[2].KernelWaitTime;
      if ( v68 )
      {
        v69 = *(_QWORD *)(v68 + 8 * ((v54 >> 3) & 0x1FF));
        if ( (v69 & 0x20) != 0 )
          v66 |= 0x20uLL;
        v70 = v66;
        v66 |= 0x42uLL;
        if ( (v69 & 0x42) == 0 )
          v66 = v70;
      }
    }
  }
  v71 = (v66 >> 5) & 0x1F;
  if ( (v66 & 0x400) == 0 || (v66 & 0x3FFFFFFFFFF000LL) != 0x3FFFFFFFFFF000LL )
  {
    LODWORD(v71) = 256;
    PrototypePteDirect = MiGetPrototypePteDirect(v66);
    if ( (v84 & 8) != 0 )
      LODWORD(v71) = 1;
    goto LABEL_192;
  }
  LODWORD(v98) = 0;
  v72 = (__int64)(v54 << 25) >> 16;
  if ( v72 < 0x7FFFFFFF0000LL )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
    {
      v73 = v72 & 0x7FFFFFFFF000LL;
      if ( (v72 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        PrototypePteDirect = qword_140E2D628;
        goto LABEL_192;
      }
      if ( v73 == qword_140E2D638 && v73 )
      {
        PrototypePteDirect = qword_140E2D630;
        goto LABEL_192;
      }
    }
    v74 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw(v74);
      v76 = *v74 & 0x7FFFFFFF;
      v75 = _InterlockedCompareExchange(v74, v76 + 1, v76);
      if ( v76 != v75 )
      {
        while ( v75 >= 0 )
        {
          v58 = (unsigned int)v75;
          v75 = _InterlockedCompareExchange(v74, v75 + 1, v75);
          if ( v75 == (_DWORD)v58 )
            goto LABEL_156;
        }
        LOBYTE(v58) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v74, v58, (__int64)v74);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v74, 0xFFu);
    }
LABEL_156:
    v77 = KeGetCurrentThread()->ApcState.Process;
    Flink = (__int64)v77[3].Header.WaitListHead.Flink;
    if ( !Flink )
    {
      Flink = 0LL;
      goto LABEL_177;
    }
    v79 = v72 >> 12;
    if ( v72 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
      || (v80 = *(unsigned int *)(Flink + 28), v79 > (v80 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32))) )
    {
      Flink = *(_QWORD *)&v77[3].Header.Lock;
      if ( !Flink )
        goto LABEL_167;
      do
      {
        v80 = *(unsigned int *)(Flink + 28);
        if ( v79 <= (v80 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
        {
          v80 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
          if ( v79 >= v80 )
            break;
          Flink = *(_QWORD *)Flink;
        }
        else
        {
          Flink = *(_QWORD *)(Flink + 8);
        }
      }
      while ( Flink );
      if ( !Flink )
      {
LABEL_167:
        Flink = 0LL;
LABEL_177:
        v83 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8]
            + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          _InterlockedAnd(v83, 0xBFFFFFFF);
          _InterlockedDecrement(v83);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v83, retaddr);
        }
        if ( !Flink )
          goto LABEL_182;
        PrototypePteDirect = MiCheckUserVirtualAddress((__int64)(v54 << 25) >> 16, Flink, 1, (int *)&v98);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          _InterlockedAnd((volatile signed __int32 *)(Flink + 64), 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(Flink + 64));
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)(Flink + 64), retaddr);
        }
        goto LABEL_192;
      }
      v77[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _m_prefetchw((const void *)(Flink + 64));
      v82 = *(_DWORD *)(Flink + 64) & 0x7FFFFFFF;
      v81 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v82 + 1, v82);
      if ( v82 != v81 )
      {
        while ( v81 >= 0 )
        {
          v80 = (unsigned int)v81;
          v81 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v81 + 1, v81);
          if ( v81 == (_DWORD)v80 )
            goto LABEL_177;
        }
        LOBYTE(v80) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(Flink + 64), v80, v79);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(Flink + 64), 0xFFu);
    }
    goto LABEL_177;
  }
  if ( v72 < 0xFFFFF68000000000uLL || v72 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_182:
    PrototypePteDirect = 0LL;
    goto LABEL_192;
  }
  PrototypePteDirect = 0LL;
LABEL_192:
  LODWORD(v65) = v71;
  v53 = v100;
  if ( !PrototypePteDirect )
  {
    valid = -1073741819;
    goto LABEL_91;
  }
LABEL_195:
  if ( (_DWORD)v65 != 256 )
  {
    v85 = MiAccessCheck(v54, v4[2], 0);
    valid = v85;
    if ( v85 )
    {
      if ( v85 == -1073741819 )
      {
        if ( *v4 < 0xFFFF800000000000uLL )
        {
          MiLockVadTree(1u, v86, v87);
          v33 = MiLocateAddress(*v4);
          MiUnlockVadTree(1, 0x11u);
        }
        MiCheckFatalAccessViolation(*v4);
        v4[11] = v33;
        MiReleaseFaultState(v29, 0x11u, 0LL);
        v7 &= ~2u;
      }
      else
      {
        if ( v85 != -2147483647 )
          goto LABEL_215;
        v88 = *(_QWORD *)v54;
        if ( v54 >= 0xFFFFF6FB7DBED000uLL && v54 <= 0xFFFFF6FB7DBED7F8uLL )
          LOWORD(v88) = MiReadPteShadow(v54, *(_QWORD *)v54);
        if ( (v88 & 1) != 0 )
          goto LABEL_215;
        if ( qword_140E2D740 && (v88 & 0x10) == 0 )
          LOWORD(v88) = qword_140E2D748 & v88;
        if ( (v88 & 0x400) != 0
          || (v88 & 0x800) != 0
          || (v88 & 8) != 0
          || (v89 = v4[2], (v89 & 1) != 0) && *(_BYTE *)(v89 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        {
LABEL_215:
          MiReleaseFaultState(v29, 0x11u, 0LL);
          v7 &= ~2u;
          if ( valid == -2147483647 )
            valid = MiCheckForUserStackOverflow(*v4, 0LL);
        }
        else
        {
          MiResolveDemandZeroFault(v4, v54, 0LL, v4[1] & 2, 0LL);
          MiReleaseFaultState(v29, 0x11u, 0LL);
          v7 &= ~2u;
          valid = MiCheckForUserStackOverflow(*v4, 0LL);
        }
      }
      goto LABEL_91;
    }
  }
  v4[13] = PrototypePteDirect;
  return 3221225494LL;
}
