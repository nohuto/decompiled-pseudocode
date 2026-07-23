/*
 * XREFs of MiUserFault @ 0x1403A4EA0
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiResolvePageTablePage @ 0x1402CEAB0 (MiResolvePageTablePage.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1403A7780 (MiComputeMaximumFaultCluster.c)
 *     MiAccessCheck @ 0x1403A8730 (MiAccessCheck.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiCanFlushMakeProgress @ 0x1403E3EF4 (MiCanFlushMakeProgress.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 *     MiCheckFatalAccessViolation @ 0x14049A444 (MiCheckFatalAccessViolation.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C31E0 (MiCheckHoldFaultForHotPatch.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C3324 (MiUnlockFaultWorkingSet.c)
 *     MiDelayFaultingThread @ 0x1404FED04 (MiDelayFaultingThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140534C74 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckForUserStackOverflow @ 0x140AA4214 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThread; // r9
  _QWORD *v4; // r12
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // r11
  __int64 *v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // si
  __int64 *p_SchedulingGroup; // rsi
  unsigned __int8 v18; // bl
  __int64 *v19; // rcx
  unsigned int v20; // eax
  _DWORD *v21; // rbx
  unsigned int v22; // ebp
  unsigned __int8 CurrentIrql; // di
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  _DWORD *MmInternal; // rcx
  __int64 v27; // r14
  _KPROCESS *Process; // rcx
  struct _LIST_ENTRY *Address; // rax
  unsigned __int64 v30; // rdi
  struct _LIST_ENTRY *v31; // rbp
  _KPROCESS *v32; // r13
  int v33; // r15d
  struct _KTHREAD *v34; // r14
  unsigned __int64 v35; // rdi
  _KPROCESS *v36; // rsi
  _QWORD *v37; // r8
  __int64 v38; // r12
  ULONG_PTR v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  int valid; // ebx
  __int64 v43; // r8
  struct _KLOCK_ENTRIES *v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  void *AutoBoostState2; // rcx
  bool v48; // zf
  unsigned __int64 v49; // rcx
  int v50; // eax
  unsigned __int64 v51; // rsi
  ULONG_PTR v52; // r13
  unsigned __int64 v53; // rsi
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  _KPROCESS *v57; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  int v61; // eax
  __int64 PrototypePteDirect; // rdi
  unsigned __int64 v63; // r8
  _KPROCESS *v64; // rax
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // rsi
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  _DWORD *v71; // r8
  signed __int32 v72; // eax
  signed __int32 v73; // ett
  _KPROCESS *v74; // r9
  __int64 Flink; // rbx
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // rdx
  signed __int32 v78; // eax
  signed __int32 v79; // ett
  volatile signed __int32 *v80; // r8
  char v81; // r8
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // [rsp+30h] [rbp-88h]
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
  CurrentThread = (__int64)KeGetCurrentThread();
  v99 = 0;
  v4 = a1;
  v91 = CurrentThread;
  v94 = a1 + 7;
  v5 = 0;
  v6 = *(_QWORD *)(CurrentThread + 184);
  v7 = 2;
  v8 = v6 + 1024;
  v90 = v6;
  a1[7] = v6 + 1024;
  v93 = 0LL;
  v96 = 0LL;
  v92 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  if ( dword_140E36158 )
  {
    v5 = 10;
LABEL_27:
    MiDelayFaultingThread(v5);
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v6 + 1360) > 0x10u && (*(_DWORD *)(v6 + 1532) & 0x1000) == 0 )
  {
    a3 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v6 + 1198));
    if ( *(_DWORD *)(a3 + 1300) == -1 || *(_QWORD *)(a3 + 2056) != v6 )
    {
      v9 = *(_QWORD **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v6 + 1198));
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        CurrentThread = v9[2] + 56320LL * KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
        v10 = *(_QWORD *)(CurrentThread + 3080) + *(_QWORD *)(CurrentThread + 3088);
        if ( v10 >= 0x420 )
          goto LABEL_28;
        v11 = 0LL;
        v12 = MiPageSizes;
        CurrentThread += 16LL;
        v13 = 3LL;
        do
        {
          v14 = *(_QWORD *)(CurrentThread - 8);
          v15 = *(_QWORD *)CurrentThread;
          CurrentThread += 1024LL;
          a3 = *v12++;
          v8 = a3 * (v14 + v15);
          v11 += v8;
          --v13;
        }
        while ( v13 );
        if ( v11 + v10 >= 0x420 )
          goto LABEL_28;
        CurrentThread = v91;
        v6 = v90;
      }
      v8 = v9[2808];
      if ( v8 >= 0x420 )
        goto LABEL_28;
      v16 = 0;
      if ( *(_BYTE *)(CurrentThread + 1831) != 0xFF && (*(_BYTE *)(CurrentThread + 1450) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 1774LL) != 0xFF )
      {
        v8 += v9[2760];
        if ( v8 >= 0x420 )
          goto LABEL_28;
        v16 = 2;
      }
      if ( v9[2906] >= 1056 - v8 && (unsigned int)MiCanFlushMakeProgress(v9, 0LL, 1056 - v8) )
      {
        *(_DWORD *)(v6 + 1360) = 0;
        if ( *(char *)(v6 + 144) >= 9 || (v5 = 66036, *(_QWORD *)(v6 + 1648)) )
          v5 = 65566;
        if ( (v16 & 2) != 0 )
          v5 |= 0x20000u;
      }
      if ( (_WORD)v5 )
        goto LABEL_27;
    }
  }
LABEL_28:
  p_SchedulingGroup = &qword_140E37980;
  if ( (*(_DWORD *)(v90 + 1208) & 0xFu) < 6 )
  {
    if ( (*(_DWORD *)(v90 + 1208) & 0xF) == 1 )
      v19 = &qword_140E37980;
    else
      v19 = (__int64 *)(v90 + 1216);
    v20 = (KeGetPcr()->Prcb.Number >> 1) & 3;
    v21 = (_DWORD *)(*v19 + ((unsigned __int64)v20 << 6));
    v22 = v20;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v21);
      v25 = *v21 & 0x7FFFFFFF;
      v24 = _InterlockedCompareExchange(v21, v25 + 1, v25);
      if ( v25 != v24 )
      {
        while ( v24 >= 0 )
        {
          v8 = (unsigned int)v24;
          v24 = _InterlockedCompareExchange(v21, v24 + 1, v24);
          if ( v24 == (_DWORD)v8 )
            goto LABEL_48;
        }
        ExpWaitForSpinLockSharedAndAcquire(v21, CurrentIrql, a3);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v21, CurrentIrql);
    }
LABEL_48:
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v22;
    v18 = CurrentIrql;
  }
  else
  {
    v18 = KeGetCurrentIrql();
    if ( v18 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v18, 2LL);
  }
  *((_BYTE *)v4 + 68) = v18;
  v27 = (__int64)(v4 + 7);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ContextSwitches & 0xF) != 1 )
    p_SchedulingGroup = (__int64 *)&Process[2].SchedulingGroup;
  if ( (HIBYTE(LODWORD(Process[2].ContextSwitches)) & 0x30) == 0x30
    && p_SchedulingGroup[4]
    && (unsigned __int64)v4 < 0xFFFF800000000000uLL )
  {
    MiLockVadTree(1u, v8, a3);
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
  v30 = *v4;
  if ( *v4 >= 0x7FFFFFFF0000uLL && v30 < 0xFFFF800000000000uLL )
    goto LABEL_72;
  v31 = 0LL;
  v32 = KeGetCurrentThread()->ApcState.Process;
  v95 = v32;
  if ( v32[1].ActiveGroupsMask.Masks[1] )
  {
    v33 = 0;
    if ( v30 < 0x7FFFFFFF0000LL )
    {
      v34 = KeGetCurrentThread();
      v35 = v30 >> 12;
      v36 = v34->ApcState.Process;
      v37 = (_QWORD *)v36[1].ActiveGroupsMask.Masks[1];
      if ( v37 )
      {
        v38 = (__int64)v94;
        do
        {
          v39 = v37[1];
          if ( v35 < (*(unsigned int *)(v39 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 32) << 32))
            || v35 > (*(unsigned int *)(v39 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v39 + 33) << 32)) )
          {
            v37 = (_QWORD *)*v37;
          }
          else
          {
            if ( (struct _KTHREAD *)v37[2] == v34 )
              break;
            v33 = 1;
            if ( (*(_BYTE *)(v38 + 13) & 1) != 0 )
            {
              MiReferenceVad(v37[1]);
              MiUnlockWorkingSetExclusive((__int64)&v36[2].ReadyListHead.Blink, *(_BYTE *)(v38 + 12));
              MiLockVadShared((__int64)v34, v39, v43, v44);
              MiUnlockAndDereferenceVadShared(v39);
              MiLockWorkingSetExclusive((__int64)&v36[2].ReadyListHead.Blink, v45, v46);
            }
            else
            {
              MiUnlockFaultWorkingSet(v38);
              MiLockWorkingSetExclusive((__int64)&v36[2].ReadyListHead.Blink, v40, v41);
              *(_BYTE *)(v38 + 13) |= 1u;
            }
            v37 = (_QWORD *)v36[1].ActiveGroupsMask.Masks[1];
          }
        }
        while ( v37 );
        v32 = v95;
        v4 = v98;
        if ( v33 )
          goto LABEL_81;
      }
      v27 = (__int64)(v4 + 7);
    }
    v7 = 2;
  }
  AutoBoostState2 = v32[4].AutoBoostState2;
  if ( AutoBoostState2 && (unsigned int)MiCheckHoldFaultForHotPatch(AutoBoostState2, v4) )
  {
LABEL_81:
    valid = 0;
    goto LABEL_100;
  }
  v48 = (v4[1] & 2) == 0;
  v49 = *v4;
  *v4 = *v4;
  if ( !v48 && (*(_DWORD *)(v90 + 500) & 0x10) != 0 && v49 < 0xFFFF800000000000uLL )
    v7 = 6;
  if ( v49 < 0x7FFFFFFF0000LL )
    MiPerformFaultClusterMaintenance(v4, v91, 0LL);
  v50 = MiResolvePageTablePage((__int64)v4, 0);
  valid = v50;
  if ( v50 == -1073740748 )
  {
    valid = 0;
LABEL_90:
    v51 = v100;
    v52 = v93;
LABEL_91:
    if ( (v7 & 2) == 0 )
      return (unsigned int)valid;
    if ( (v7 & 1) != 0 && valid >= 0 && v51 >= v52 && (*(_BYTE *)(v27 + 13) & 1) == 0 )
    {
      v53 = ((__int64)(v51 - v52) >> 3) + 1;
      if ( MiComputeMaximumFaultCluster(v4, 0LL) > v53 )
      {
        if ( v7 >= 4 )
          v4[1] &= ~2uLL;
        MiDispatchFault(v4, v53, 0LL);
      }
    }
LABEL_100:
    MiReleaseFaultState((__int64)v94, 0x11u, 0LL, CurrentThread);
    return (unsigned int)valid;
  }
  if ( v50 < 0 )
    goto LABEL_90;
  v52 = v4[3];
  v55 = *(_QWORD *)v52;
  v56 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v55 & 1) != 0 && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      v57 = KeGetCurrentThread()->ApcState.Process;
      if ( v57->AddressPolicy != 1 )
      {
        if ( v57 )
        {
          KernelWaitTime = v57[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v59 = *(_QWORD *)(KernelWaitTime + 8 * ((v52 >> 3) & 0x1FF));
            if ( (v59 & 0x20) != 0 )
              v55 |= 0x20uLL;
            v60 = v55;
            v55 |= 0x42uLL;
            if ( (v59 & 0x42) == 0 )
              v55 = v60;
          }
        }
      }
    }
    v56 = 0xFFFFF6FB7DBED7F8uLL;
  }
  if ( (v55 & 1) != 0 )
  {
    valid = MiValidFault(v4, v55);
    v7 |= 1u;
    v51 = v52;
    goto LABEL_91;
  }
  if ( v7 >= 4 )
    v4[1] &= ~2uLL;
  if ( !v55 )
  {
    LOBYTE(v98) = 0;
    valid = MiZeroFault((_DWORD)v4, (unsigned int)&v98, (unsigned int)&v99, (unsigned int)&v92, (__int64)&v101);
    if ( (_BYTE)v98 )
    {
      if ( (_BYTE)v98 == 2 )
      {
        MiReleaseFaultState(v27, 0x11u, 0LL, CurrentThread);
        v7 &= ~2u;
        v61 = MiCheckForUserStackOverflow(*v4, 1LL);
        v51 = v101;
        valid = v61;
      }
      else
      {
        v51 = v101;
        v7 |= 1u;
      }
      goto LABEL_91;
    }
    PrototypePteDirect = v92;
    LODWORD(CurrentThread) = v99;
    v51 = v101;
    goto LABEL_195;
  }
  CurrentThread = (v55 >> 5) & 0x1F;
  if ( (v55 & 0x400) == 0 )
  {
    PrototypePteDirect = v96;
    v51 = v100;
    goto LABEL_195;
  }
  v63 = *(_QWORD *)v52;
  if ( v52 >= 0xFFFFF6FB7DBED000uLL
    && v52 <= 0xFFFFF6FB7DBED7F8uLL
    && (v63 & 1) != 0
    && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
  {
    v64 = MiPteHasShadow();
    if ( v64 )
    {
      v65 = v64[2].KernelWaitTime;
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 8 * ((v52 >> 3) & 0x1FF));
        if ( (v66 & 0x20) != 0 )
          v63 |= 0x20uLL;
        v67 = v63;
        v63 |= 0x42uLL;
        if ( (v66 & 0x42) == 0 )
          v63 = v67;
      }
    }
  }
  v68 = (v63 >> 5) & 0x1F;
  if ( (v63 & 0x400) == 0 || (v63 & 0x3FFFFFFFFFF000LL) != 0x3FFFFFFFFFF000LL )
  {
    LODWORD(v68) = 256;
    PrototypePteDirect = MiGetPrototypePteDirect(v63);
    if ( (v81 & 8) != 0 )
      LODWORD(v68) = 1;
    goto LABEL_192;
  }
  LODWORD(v98) = 0;
  v69 = (__int64)(v52 << 25) >> 16;
  if ( v69 < 0x7FFFFFFF0000LL )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
    {
      v70 = v69 & 0x7FFFFFFFF000LL;
      if ( (v69 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
      {
        PrototypePteDirect = qword_140E2D7A8;
        goto LABEL_192;
      }
      if ( v70 == qword_140E2D7B8 && v70 )
      {
        PrototypePteDirect = qword_140E2D7B0;
        goto LABEL_192;
      }
    }
    v71 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v71);
      v73 = *v71 & 0x7FFFFFFF;
      v72 = _InterlockedCompareExchange(v71, v73 + 1, v73);
      if ( v73 != v72 )
      {
        while ( v72 >= 0 )
        {
          v56 = (unsigned int)v72;
          v72 = _InterlockedCompareExchange(v71, v72 + 1, v72);
          if ( v72 == (_DWORD)v56 )
            goto LABEL_156;
        }
        LOBYTE(v56) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v71, v56, (__int64)v71);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v71, 0xFFu);
    }
LABEL_156:
    v74 = KeGetCurrentThread()->ApcState.Process;
    Flink = (__int64)v74[3].Header.WaitListHead.Flink;
    if ( !Flink )
    {
      Flink = 0LL;
      goto LABEL_177;
    }
    v76 = v69 >> 12;
    if ( v69 >> 12 < (*(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32))
      || (v77 = *(unsigned int *)(Flink + 28), v76 > (v77 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32))) )
    {
      Flink = *(_QWORD *)&v74[3].Header.Lock;
      if ( !Flink )
        goto LABEL_167;
      do
      {
        v77 = *(unsigned int *)(Flink + 28);
        if ( v76 <= (v77 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
        {
          v77 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
          if ( v76 >= v77 )
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
        v80 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8]
            + 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v80, 0xBFFFFFFF);
          _InterlockedDecrement(v80);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v80, retaddr);
        }
        if ( !Flink )
          goto LABEL_182;
        PrototypePteDirect = MiCheckUserVirtualAddress((__int64)(v52 << 25) >> 16, Flink, 1, (int *)&v98);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
      v74[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw((const void *)(Flink + 64));
      v79 = *(_DWORD *)(Flink + 64) & 0x7FFFFFFF;
      v78 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v79 + 1, v79);
      if ( v79 != v78 )
      {
        while ( v78 >= 0 )
        {
          v77 = (unsigned int)v78;
          v78 = _InterlockedCompareExchange((volatile signed __int32 *)(Flink + 64), v78 + 1, v78);
          if ( v78 == (_DWORD)v77 )
            goto LABEL_177;
        }
        LOBYTE(v77) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)(Flink + 64), v77, v76);
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented((_DWORD *)(Flink + 64), 0xFFu);
    }
    goto LABEL_177;
  }
  if ( v69 < 0xFFFFF68000000000uLL || v69 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_182:
    PrototypePteDirect = 0LL;
    goto LABEL_192;
  }
  PrototypePteDirect = 0LL;
LABEL_192:
  CurrentThread = (unsigned int)v68;
  v51 = v100;
  if ( !PrototypePteDirect )
  {
    valid = -1073741819;
    goto LABEL_91;
  }
LABEL_195:
  if ( (_DWORD)CurrentThread != 256 )
  {
    v82 = MiAccessCheck(v52, v4[2], 0);
    valid = v82;
    if ( v82 )
    {
      if ( v82 == -1073741819 )
      {
        if ( *v4 < 0xFFFF800000000000uLL )
        {
          MiLockVadTree(1u, v83, v84);
          v31 = MiLocateAddress(*v4);
          MiUnlockVadTree(1, 0x11u);
        }
        MiCheckFatalAccessViolation(*v4);
        v4[11] = v31;
        MiReleaseFaultState(v27, 0x11u, 0LL, v86);
        v7 &= ~2u;
      }
      else
      {
        if ( v82 != -2147483647 )
          goto LABEL_215;
        v87 = *(_QWORD *)v52;
        if ( v52 >= 0xFFFFF6FB7DBED000uLL && v52 <= 0xFFFFF6FB7DBED7F8uLL )
          LOWORD(v87) = MiReadPteShadow(v52, *(_QWORD *)v52);
        if ( (v87 & 1) != 0 )
          goto LABEL_215;
        if ( qword_140E2D8C0 && (v87 & 0x10) == 0 )
          LOWORD(v87) = qword_140E2D8C8 & v87;
        if ( (v87 & 0x400) != 0
          || (v87 & 0x800) != 0
          || (v87 & 8) != 0
          || (v88 = v4[2], (v88 & 1) != 0) && *(_BYTE *)(v88 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
        {
LABEL_215:
          MiReleaseFaultState(v27, 0x11u, 0LL, v85);
          v7 &= ~2u;
          if ( valid == -2147483647 )
            valid = MiCheckForUserStackOverflow(*v4, 0LL);
        }
        else
        {
          MiResolveDemandZeroFault(v4, v52, 0LL, v4[1] & 2, 0LL);
          MiReleaseFaultState(v27, 0x11u, 0LL, v89);
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
