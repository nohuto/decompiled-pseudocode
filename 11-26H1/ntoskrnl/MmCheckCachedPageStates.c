/*
 * XREFs of MmCheckCachedPageStates @ 0x1402C8850
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026C7E0 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1402C8550 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1402C86B0 (CcMapAndRead.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x14048739C (CcMapDataForOverwrite.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlinkProtoPages @ 0x140296F60 (MiUnlinkProtoPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAreChargesNeededToLockPage @ 0x1402C7DC0 (MiAreChargesNeededToLockPage.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiMakeSystemCachePtesValid @ 0x1402C7F80 (MiMakeSystemCachePtesValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeForLockedPage @ 0x1402D7FE0 (MiChargeForLockedPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     MiIsAddressGlobal @ 0x140376AA0 (MiIsAddressGlobal.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x14040AEE0 (MiSpinForProtoPoolLock.c)
 *     MiUpdateShareCount @ 0x14041BF70 (MiUpdateShareCount.c)
 *     MiSetLeafPfnBuddy @ 0x14045C350 (MiSetLeafPfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCachedPageNotifyPf @ 0x140A69B20 (MiCachedPageNotifyPf.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  int v5; // r12d
  ULONG_PTR BugCheckParameter4; // r13
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int Number; // eax
  unsigned int v19; // eax
  _DWORD *v20; // rdi
  unsigned int v21; // r14d
  unsigned __int8 CurrentIrql; // si
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  _DWORD *MmInternal; // rcx
  unsigned __int64 v26; // rdx
  signed __int64 v27; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  char v29; // al
  unsigned int v30; // ecx
  volatile __int64 *v31; // r8
  _KSPIN_LOCK_QUEUE *volatile *v32; // rcx
  __int64 v33; // rcx
  __int64 HasShadow; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdx
  char v40; // di
  int v41; // r14d
  int v42; // r13d
  volatile signed __int32 *v43; // rsi
  unsigned __int32 v44; // edx
  int v45; // r12d
  bool v46; // zf
  signed __int32 v47; // eax
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdi
  unsigned __int64 ThreadLock; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  unsigned int v58; // edi
  __int64 v59; // r9
  __int64 v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r10
  __int64 v64; // rbx
  __int64 v65; // r9
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  _BYTE *v69; // rax
  unsigned __int64 v71; // rax
  _QWORD *v72; // rdx
  __int64 v73; // rax
  _QWORD *v74; // rax
  int v75; // eax
  ULONG_PTR v76; // rbx
  unsigned __int64 v77; // r13
  __int64 v78; // rcx
  ULONG_PTR v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  BOOL v83; // r8d
  unsigned __int64 v84; // r13
  volatile signed __int64 *v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // r12
  unsigned __int64 v88; // r14
  unsigned __int64 ContainingPageTable; // r14
  __int64 v90; // rcx
  struct _KPRCB *v91; // rdx
  char v92; // al
  __int64 v93; // rcx
  __int64 v94; // rcx
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // rdx
  char v97; // r8
  ULONG_PTR v98; // rdx
  __int64 v99; // rax
  signed __int64 v100; // rax
  __int64 v101; // rbx
  unsigned int v102; // r13d
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  signed __int64 i; // rcx
  signed __int64 v106; // rax
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // r9
  __int64 v110; // r8
  unsigned __int64 v111; // rbx
  unsigned __int64 v112; // rcx
  __int64 v113; // r14
  unsigned int v114; // r12d
  char v115; // cl
  __int64 v116; // rdx
  ULONG_PTR v117; // rbx
  unsigned __int64 v118; // rax
  ULONG_PTR v119; // r14
  _QWORD *v120; // r13
  int v121; // r12d
  int v122; // eax
  int v123; // r12d
  __int64 v124; // r8
  unsigned __int64 v125; // rbx
  unsigned __int64 v126; // rbx
  volatile signed __int64 *v127; // r10
  __int64 v128; // rax
  __int64 v129; // r9
  __int64 v130; // r10
  __int64 v131; // r8
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r9
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  int v140; // ecx
  signed __int32 v141; // eax
  __int64 LeafPfnBuddy; // rax
  _QWORD *v143; // rcx
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  unsigned __int64 v147; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  _BYTE v151[4]; // [rsp+70h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = a3;
  *(_DWORD *)(v4 + 8) = a3;
  *(_QWORD *)(v4 + 32) = a4;
  memset_0((void *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 224), 0, 0xC8uLL);
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 2LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 0LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = MiCachedPageCandidate;
  *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = MiCachedPageFinish;
  *(_BYTE *)v4 = 1;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = ((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 224;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = v5;
  v9 = 2LL;
  *(_OWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 0LL;
  v10 = (((a1 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v10;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL)
                                                                       - 0x98000000000LL;
  if ( v10 >= 0xFFFF800000000000uLL && byte_140E37BF0[((v10 >> 39) & 0x1FF) - 256] == 4 )
  {
    *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0LL;
    *(_OWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0LL;
    if ( (int)MiGetVirtualAddressState(
                v4 + 192,
                (((a1 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL,
                0) < 0 )
      KeBugCheckEx(
        0x1Au,
        0x530BuLL,
        (((a1 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL,
        1uLL,
        (((a1 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
    v9 = 2LL;
  }
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = ((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 296;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = ((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 328;
  v11 = ((a1 & 0xFFFFFFFFFFFFLL) >> 18) & 0x3FFFFFFFFFF8LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 64LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 64LL;
  v12 = *(_QWORD *)(48 * ((*(_QWORD *)(v11 - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 1;
  LODWORD(v12) = v12 & 0x7FFFFFFF;
  v13 = v12 | ((unsigned __int64)(*(_DWORD *)(48 * ((*(_QWORD *)(v11 - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                            - 0x220000000000LL
                                            + 36) & 0x3FF0000) << 15);
  if ( v13 )
  {
    if ( (unsigned __int64)(v13 - 0x10000000000LL) <= 1 )
    {
      if ( v13 == 0x10000000001LL && PsInitialSystemProcess )
        v13 = (__int64)PsInitialSystemProcess;
    }
    else
    {
      v13 = qword_140E37D10 + 16 * (v13 - 1);
    }
    if ( v13 )
      v13 += 40 * ((a1 >> 18) & 7);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_QWORD *)(v13 + 24) & 1) == 0 )
    v14 = *(_QWORD *)(v13 + 24);
  v15 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
  *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x115) |= 8u;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = &unk_140E3D680;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (dword_140E3D738 & 0xFu) > 5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v13);
    }
  }
  else
  {
    v17 = qword_140E3D740;
    Number = KeGetPcr()->Prcb.Number;
    if ( (dword_140E3D738 & 0xF) == 1 )
      v17 = qword_140E37980;
    v19 = (Number >> 1) & 3;
    v20 = (_DWORD *)(v17 + ((unsigned __int64)v19 << 6));
    v21 = v19;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v20);
      v23 = *v20 & 0x7FFFFFFF;
      while ( 1 )
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange(v20, v23 + 1, v23);
        if ( v24 == v23 )
          break;
        if ( v23 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v20, CurrentIrql, v9);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v20, CurrentIrql);
    }
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    if ( MmInternal )
      MmInternal[81] = v21;
  }
  *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114) = CurrentIrql;
  if ( v16 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v29 = dword_140E3D738 & 0xF;
    if ( (dword_140E3D738 & 0xF) != 0 )
    {
      if ( v29 == 7 )
      {
        v30 = 1;
      }
      else
      {
        v30 = 3;
        if ( v29 == 5 )
          v30 = 0;
      }
      v31 = (volatile __int64 *)((char *)&unk_140E2EA98 + 8 * v30);
    }
    else
    {
      v30 = 2;
      v31 = (volatile __int64 *)&unk_140E3D730;
    }
    v32 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v30 + v30;
    *((_QWORD *)v32 + 1) = v31;
    *v32 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v31, (__int64)v32) )
        KxWaitForLockOwnerShip(v32);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v32, v31);
    }
  }
  else if ( (dword_140E3D738 & 0xF) == 0
         && v16 >= 0xFFFFF6FB7DBED000uLL
         && v16 <= 0xFFFFF6FB7DBEDFFFuLL
         && (v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v33 + 4 * ((v16 >> 3) & 0x1FF)));
  }
  else if ( (dword_140E3D738 & 0xF) != 0 && v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    v38 = 2 * ((__int64)(v16 + 0x90482413000LL) >> 3);
    v39 = (unsigned __int64)v38 >> 5;
    v40 = v38 & 0x1F;
    LOBYTE(v38) = v38 & 0x1F;
    v41 = 1 << v38;
    v42 = 2 << v38;
    v43 = (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4 * v39 + 4];
    v44 = *v43;
    v45 = ~(2 << v38);
    do
    {
      while ( ((v44 >> v40) & 1) != 0 )
      {
        if ( ((v44 >> v40) & 2) != 0 )
        {
          do
          {
            KeYieldProcessorEx((_DWORD *)(v4 + 4));
            v44 = *v43;
          }
          while ( (((unsigned __int32)*v43 >> v40) & 1) != 0 );
        }
        else
        {
          v140 = v42 | v44;
          v141 = _InterlockedCompareExchange(v43, v42 | v44, v44);
          v46 = v44 == v141;
          v44 = v141;
          if ( v46 )
            v44 = v140;
        }
      }
      v47 = _InterlockedCompareExchange(v43, v45 & (v44 | v41), v44);
      v46 = v44 == v47;
      v44 = v47;
    }
    while ( !v46 );
    BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v5 = *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  else
  {
    v26 = *(_QWORD *)v16;
    *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 0xFFFFF6FB7DBED7F8uLL
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v26, v9);
      if ( HasShadow )
      {
        v35 = *(_QWORD *)(HasShadow + 1288);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 8 * ((v16 >> 3) & 0x1FF));
          if ( (v36 & 0x20) != 0 )
            v26 |= 0x20uLL;
          v37 = v26;
          v26 |= 0x42uLL;
          if ( (v36 & 0x42) == 0 )
            v26 = v37;
        }
      }
    }
    while ( (v26 & 1) != 0 )
    {
      if ( (v26 & 0x1000000000000000LL) != 0 )
      {
        if ( ((v26 >> 60) & 2) != 0 )
        {
          do
          {
            KeYieldProcessorEx((_DWORD *)(v4 + 4));
            v26 = *(_QWORD *)v16;
          }
          while ( (*(_QWORD *)v16 & 0x1000000000000000LL) != 0 );
        }
        else
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v100 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v26 | 0x2000000000000000LL, v26);
          if ( v26 == v100 )
            v26 |= 0x2000000000000000uLL;
          else
            v26 = v100;
        }
      }
      else
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        v27 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)v16,
                v26 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v26);
        if ( v26 == v27 )
          break;
        v26 = v27;
      }
    }
  }
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = v16;
  v48 = (__int64)(*(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) << 25) >> 16;
  v49 = *(_QWORD *)(48 * ((*(_QWORD *)(((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL) >> 1;
  LODWORD(v49) = v49 & 0x7FFFFFFF;
  v50 = v49 | ((unsigned __int64)(*(_DWORD *)(48
                                            * ((*(_QWORD *)(((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                            - 0x220000000000LL
                                            + 36) & 0x3FF0000) << 15);
  if ( v50 )
  {
    if ( (unsigned __int64)(v50 - 0x10000000000LL) <= 1 )
    {
      if ( v50 == 0x10000000001LL && PsInitialSystemProcess )
        v50 = (__int64)PsInitialSystemProcess;
    }
    else
    {
      v50 = qword_140E37D10 + 16 * (v50 - 1);
    }
    if ( v50 )
    {
      v48 = (v48 >> 18) & 7;
      v50 += 40LL * (unsigned int)v48;
    }
  }
  else
  {
    v50 = 0LL;
  }
  v51 = *(_QWORD *)(v50 + 24);
  v52 = v51 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v51 & 1) == 0 )
    v52 = v51;
  v53 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
  ThreadLock = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v52 + 60LL) & 0x3FF)) + 22592LL;
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = ThreadLock;
  if ( v53 > *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) )
    goto LABEL_79;
  v51 = 0x800000000000000LL;
  v48 = 0x1FFFFFFFFFF8LL;
  do
  {
    v55 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168);
    if ( v55 )
    {
      ThreadLock = (__int64)(v53 - v55) >> 3;
      if ( _bittest64(*(const signed __int64 **)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158), ThreadLock) )
        goto LABEL_78;
    }
    v56 = *(_QWORD *)v53;
    if ( (*(_QWORD *)v53 & 1) != 0 )
    {
      if ( (v5 & 4) != 0 )
      {
        v99 = (v56 & 0x42) != 0 || (v56 & 0x800) == 0 ? *(_QWORD *)&CLFS_LSN_NULL_EXT : v56 | 0x62;
        if ( (v99 & 1) != 0 )
        {
          MiWriteValidPteNewProtection(v53, v99);
          goto LABEL_169;
        }
      }
      goto LABEL_78;
    }
    v76 = BugCheckParameter4;
    v77 = *(_QWORD *)v53;
    if ( qword_140E2D8C0 )
    {
      v77 = v56 & 0xFFFFFFFFFFFFFFEFuLL;
      if ( (v56 & 0x10) == 0 )
        v77 = v56 & qword_140E2D8C8;
    }
    v78 = qword_140E37D10;
    if ( (v77 & 0x800000000000000LL) == 0 )
      v78 = qword_140E37D20;
    BugCheckParameter4 = v78 + ((v77 >> 9) & 0x1FFFFFFFFFF8LL);
    *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = BugCheckParameter4;
    while ( 1 )
    {
      v79 = *(_QWORD *)(v14 + 8);
      if ( BugCheckParameter4 >= v79 && BugCheckParameter4 < v79 + 8LL * *(unsigned int *)(v14 + 44) )
        break;
      v14 = *(_QWORD *)(v14 + 16);
    }
    v80 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8);
    if ( v80 != v14 )
    {
      if ( !v80 )
      {
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = v14;
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = v53;
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = BugCheckParameter4;
        v48 = *(_QWORD *)(v14 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) != 0 )
        {
          if ( BugCheckParameter4 < v48 || BugCheckParameter4 >= v48 + 8LL * *(unsigned int *)(v14 + 44) )
          {
            v98 = (BugCheckParameter4 << 9)
                - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v14, 0xFFFFFFFFLL, v14) + 72) << 9);
          }
          else
          {
            v48 <<= 9;
            v98 = (BugCheckParameter4 << 9) - v48;
          }
          v51 = ((unsigned __int64)*(unsigned int *)(v14 + 36) << 9) + (v98 & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          if ( v48 )
            v81 = (__int64)(BugCheckParameter4 - v48) >> 3 << 12;
          else
            v81 = 0LL;
          v51 = v81 + ((*(unsigned int *)(v14 + 36) | ((unsigned __int64)(*(_DWORD *)(v14 + 32) & 0xFFC0) << 26)) << 12);
        }
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = v51;
      }
      *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = v14;
    }
    v82 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
    if ( !v82 )
      goto LABEL_140;
    if ( ((BugCheckParameter4 ^ v76) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      LOBYTE(v51) = 17;
      MiUnlockProtoPoolPage(v82, v51, v48);
LABEL_140:
      v83 = BugCheckParameter4 >= 0xFFFF800000000000uLL
         && byte_140E37BF0[((BugCheckParameter4 >> 39) & 0x1FF) - 256] == 4;
      *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v83;
      v84 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v84;
      if ( !v83 )
      {
        v85 = (volatile signed __int64 *)0xFFFFF68000000000LL;
        v86 = 0xFFFFFFFFFFLL;
        goto LABEL_145;
      }
      ContainingPageTable = MiGetContainingPageTable(*(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      v87 = v84 >> 9;
LABEL_205:
      v101 = 48 * ContainingPageTable - 0x220000000000LL;
      v102 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v101 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v102 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v90, v51, v85) )
          {
            HvlNotifyLongSpinWait(v102);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v101 + 24) < 0 );
      }
      v84 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( !*(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
      {
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v84;
        v85 = (volatile signed __int64 *)0xFFFFF68000000000LL;
        v103 = *(_QWORD *)((v87 & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
        if ( (v103 & 1) == 0 || (v103 & 0x200) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v101 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_158;
        }
        v86 = 0xFFFFFFFFFFLL;
        if ( ContainingPageTable != ((v103 >> 12) & 0xFFFFFFFFFFLL) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v101 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_145:
          v87 = v84 >> 9;
          v51 = ((v84 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL;
          while ( 1 )
          {
            v88 = *(_QWORD *)v51;
            if ( (*(_QWORD *)v51 & 1) == 0 || (v88 & 0x200) != 0 )
              break;
            ContainingPageTable = (v88 >> 12) & 0xFFFFFFFFFFLL;
            if ( ContainingPageTable <= qword_140E2D920 )
            {
              v90 = 6 * ContainingPageTable;
              if ( (*(_QWORD *)(48 * ContainingPageTable - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                goto LABEL_205;
            }
          }
LABEL_158:
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
LABEL_159:
          MiReleaseCachedPageLocks(v4 + 224, v51, v85, v86);
          BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          MiAcquireCachedPageLocks(v4 + 224, BugCheckParameter4);
LABEL_160:
          v53 -= 8LL;
          goto LABEL_169;
        }
        if ( !MiAreChargesNeededToLockPage(48 * ContainingPageTable - 0x220000000000LL)
          || (unsigned int)MiChargeForLockedPage(48 * ContainingPageTable - 0x220000000000LL, 1LL) )
        {
          *(_DWORD *)(v101 + 32) ^= (unsigned __int16)(*(_DWORD *)(v101 + 32) ^ (*(_DWORD *)(v101 + 32) + 1));
        }
      }
      memset_0((void *)(v4 + 128), 0, 0x40uLL);
      if ( (*(_BYTE *)(v101 + 34) & 0x20) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
        LeafPfnBuddy = MiGetLeafPfnBuddy(v101, 1LL);
        if ( LeafPfnBuddy )
        {
          v143 = *(_QWORD **)(LeafPfnBuddy + 8);
          if ( *v143 != LeafPfnBuddy )
            goto LABEL_315;
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v143;
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = LeafPfnBuddy;
          *v143 = v4 + 128;
          *(_QWORD *)(LeafPfnBuddy + 8) = v4 + 128;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = ((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                               + 128;
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                               + 128;
          *(_QWORD *)v101 = ((v4 + 128) >> 3) & 0x1FFFFFFFFFFFFFFELL ^ (*(_QWORD *)v101 ^ ((v4 + 128) >> 3) & 0x1FFFFFFFFFFFFFFELL) & 0xFFFFF00000000001uLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v101 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiSpinForProtoPoolLock(v4 + 128);
        *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v101 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)(v4 + 4));
          while ( *(__int64 *)(v101 + 24) < 0 );
        }
      }
      else
      {
        *(_DWORD *)(v101 + 32) |= 0x200000u;
      }
      if ( (*(_QWORD *)(v101 + 24) & 0x4000000000000000LL) == 0 && (*(_QWORD *)(v101 + 40) & 0x10000000000LL) == 0 )
      {
        v104 = (__int64)(*(_QWORD *)(v101 + 8) << 25) >> 16;
        if ( v104 < 0xFFFF800000000000uLL || byte_140E37BF0[((v104 >> 39) & 0x1FF) - 256] != 4 )
        {
          v85 = (volatile signed __int64 *)(*(_QWORD *)(v101 + 8) | 0x8000000000000000uLL);
          if ( (*v85 & 0x20) == 0 )
          {
            for ( i = *v85; ; i = v106 )
            {
              v51 = i | 0x20;
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v106 = _InterlockedCompareExchange64(v85, v51, i);
              if ( i == v106 )
                break;
            }
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v101 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = v101;
      if ( 48 * ContainingPageTable == 0x220000000000LL )
        goto LABEL_159;
      BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    v107 = *(_QWORD *)BugCheckParameter4;
    if ( (*(_QWORD *)BugCheckParameter4 & 1) == 0 )
    {
      if ( (*(_QWORD *)BugCheckParameter4 & 0xC00LL) != 0x800 )
        goto LABEL_279;
      v108 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8);
      if ( v53 + 8 < v108
        && *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) < 2u
        && !*(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) )
      {
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = v53;
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = BugCheckParameter4;
        v51 = BugCheckParameter4 + 8 * ((__int64)(v108 - v53) >> 3) + 8;
        if ( v51 > (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v51 = (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        v134 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8);
        v135 = *(_QWORD *)(v134 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v134 + 44) - *(_DWORD *)(v134 + 52));
        if ( v51 <= v135 )
          v135 = v51;
        v136 = (__int64)(v135 - BugCheckParameter4) >> 3;
        if ( v136 > 1 )
        {
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v134;
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = BugCheckParameter4;
          *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v135;
          *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) = 1;
          v137 = MiUnlinkProtoPages((_QWORD *)(v4 + 40));
          ThreadLock = *(unsigned __int8 *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C);
          v138 = v137;
          LOBYTE(ThreadLock) = ThreadLock + 1;
          *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) = 0;
          v46 = *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) == 0;
          *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) = ThreadLock;
          if ( v46 || *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18E) )
          {
            LOBYTE(ThreadLock) = ThreadLock + 1;
            *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) = ThreadLock;
          }
          v139 = 0LL;
          if ( v138 == v136 )
            v139 = v138;
          v53 = v53 + 8 * v139 - 8;
          goto LABEL_169;
        }
      }
    }
    _mm_lfence();
    *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) = 0;
    while ( 2 )
    {
      v109 = 0xFFFFDE0000000000uLL;
      v110 = 0xFFFFFFFFFFLL;
      while ( 1 )
      {
        v111 = *(_QWORD *)BugCheckParameter4;
        if ( (*(_QWORD *)BugCheckParameter4 & 1) != 0 )
        {
          v112 = *(_QWORD *)BugCheckParameter4;
          goto LABEL_244;
        }
        if ( (*(_QWORD *)BugCheckParameter4 & 0xC00LL) != 0x800 )
        {
          v107 = *(_QWORD *)BugCheckParameter4;
          goto LABEL_279;
        }
        if ( !v111 || !qword_140E2D8C0 || (qword_140E2D8C0 & v111) != 0 )
        {
          v112 = *(_QWORD *)BugCheckParameter4;
          if ( qword_140E2D8C0 )
          {
            v112 = v111 & 0xFFFFFFFFFFFFFFEFuLL;
            if ( (v111 & 0x10) == 0 )
              v112 = qword_140E2D8C8 & v111;
          }
LABEL_244:
          ThreadLock = (v112 >> 12) & 0xFFFFFFFFFFLL;
          if ( ThreadLock <= qword_140E2D920 )
          {
            v113 = 48 * ThreadLock - 0x220000000000LL;
            if ( (*(_QWORD *)(v113 + 40) & 0x40000000000000LL) != 0 )
              break;
          }
        }
      }
      v114 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v114 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ThreadLock, v51, v110) )
          {
            HvlNotifyLongSpinWait(v114);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v113 + 24) < 0 );
      }
      if ( *(_QWORD *)BugCheckParameter4 != v111 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        continue;
      }
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v113 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      v113 = MiLockSpecialPurposeMemoryCachedPage(v113, 2);
    v107 = *(_QWORD *)BugCheckParameter4;
    if ( !v113 )
    {
LABEL_279:
      if ( (int)MiResolveCachedPageHardFault(
                  (int)v4 + 224,
                  *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                  v53,
                  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8),
                  BugCheckParameter4,
                  v107) >= 0 )
      {
LABEL_271:
        v129 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
        v130 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170);
        v131 = 0LL;
        v132 = v129;
        if ( v129 == v14 )
          goto LABEL_167;
        do
        {
          v133 = *(unsigned int *)(v132 + 44);
          if ( v132 == v129 )
            v133 = (*(_QWORD *)(v132 + 8) + 8 * v133 - v130) >> 3;
          v132 = *(_QWORD *)(v132 + 16);
          v131 += v133;
        }
        while ( v132 != v14 );
        if ( v132 == v129 )
LABEL_167:
          v95 = (__int64)(BugCheckParameter4 - v130) >> 3;
        else
          v95 = ((__int64)(BugCheckParameter4 - *(_QWORD *)(v132 + 8)) >> 3) + v131;
        v96 = v95 >> 3;
        v97 = v95 & 7;
        *(_BYTE *)(*(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) + v96) |= 1 << v97;
        ++*(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
        ThreadLock = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158);
        *(_BYTE *)(ThreadLock + v96) |= 1 << v97;
        ++*(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160);
      }
      else
      {
        *(_BYTE *)v4 = 0;
      }
      goto LABEL_169;
    }
    if ( (v107 & 1) != 0 )
    {
      if ( (*(_DWORD *)(v113 + 32) & 0x40000000) == 0 )
      {
        MiUpdateShareCount(v113, 1LL, v110, v109);
LABEL_270:
        _InterlockedAnd64(v127, 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_271;
      }
LABEL_370:
      _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_169;
    }
    v46 = qword_140E2D8C0 == 0;
    *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = v53;
    *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = BugCheckParameter4;
    *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = v113;
    if ( !v46 )
    {
      v115 = v107;
      v116 = v107 & qword_140E2D8C8;
      v107 &= ~0x10uLL;
      if ( (v115 & 0x10) == 0 )
        v107 = v116;
    }
    v117 = 48 * ((v107 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    ThreadLock = stru_140E2ED08.ThreadLock;
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v117 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) )
        goto LABEL_370;
      v150 = MiHandleSpecialPurposeMemoryCachedFault(
               0LL,
               (__int64)(v53 << 25) >> 16,
               (unsigned __int64 *)BugCheckParameter4,
               v117);
      v117 = v150;
      if ( v150 )
      {
        *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = v150;
        goto LABEL_257;
      }
      goto LABEL_160;
    }
LABEL_257:
    if ( (*(_BYTE *)(v117 + 34) & 0x20) != 0 || (*(_DWORD *)(v117 + 32) & 0x40000000) != 0 )
      goto LABEL_370;
    v118 = *(_QWORD *)(v117 + 16);
    ThreadLock = v118 >> 2;
    if ( (v118 & 0x400) == 0 )
      ThreadLock = v118 >> 16;
    if ( (ThreadLock & 1) != 0 && !*(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) )
    {
      if ( *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) )
      {
        *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) = 1;
        goto LABEL_370;
      }
      *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18E) = 1;
      if ( (int)MiCachedPagesMakeHot(v4 + 224, v117) < 0 )
        goto LABEL_160;
    }
    if ( (unsigned __int16)*(_DWORD *)(v117 + 32)
      && *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) )
    {
      MiUnlinkPageFromListEx(v117);
    }
    v119 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
    if ( (MiUnlinkPageFromListEx(v119) & 3) == 0 )
    {
      v120 = (_QWORD *)(*(_QWORD *)(v119 + 8) | 0x8000000000000000uLL);
      *(_DWORD *)(v119 + 32) ^= (unsigned __int16)(*(_DWORD *)(v119 + 32) ^ (*(_DWORD *)(v119 + 32) + 1));
      *(_DWORD *)(v119 + 32) = *(_DWORD *)(v119 + 32) & 0xFFF8FFFF | 0x60000;
      v121 = (*(_DWORD *)(v119 + 16) >> 5) & 7;
      v122 = (*(_DWORD *)(v119 + 32) >> 22) & 3;
      if ( v122 != 1 )
      {
        if ( v122 )
        {
          if ( v122 == 2 )
            v121 |= 0x18u;
        }
        else
        {
          v121 |= 8u;
        }
      }
      v123 = v121 | 0x20000000;
      v124 = v123 & 0x1F;
      *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v124;
      v125 = MmProtectToPteMask[v124] & 0xFFF0000000000E7FuLL | ((((__int64)(v119 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) | 0x21;
      if ( v53 < 0xFFFFF68000000000uLL || v53 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v126 = MmProtectToPteMask[v124] & 0xFFF0000000000E7FuLL | ((((__int64)(v119 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) | 0x121;
      }
      else
      {
        if ( v53 >= 0xFFFFF6FB40000000uLL && v53 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          v125 = v53 == 0xFFFFF6FB7DBEDF68uLL
               ? MmProtectToPteMask[v124] & 0xFFF0000000000E7FuLL | ((((__int64)(v119 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) | 0x8000000000000021uLL
               : MmProtectToPteMask[v124] & 0x7FF0000000000E7FLL | ((((__int64)(v119 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | 0x21;
          if ( (unsigned int)MiUserPdeOrAbove(v53) )
            v125 |= 4uLL;
        }
        v147 = (__int64)(v53 << 25) >> 16;
        if ( v147 < 0x7FFFFFFF0000LL )
          v125 |= 4uLL;
        IsAddressGlobal = MiIsAddressGlobal(v147, v125);
        v126 = v125 | 0x100;
        if ( !IsAddressGlobal )
          v126 = v149;
      }
      v127 = (volatile signed __int64 *)(v119 + 24);
      v128 = v126 | 0x42;
      if ( v123 >= 0 || (v124 & 5) != 4 )
        v128 = v126;
      *v120 = (unsigned __int16)(BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ v128) & 0xFAFFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
      BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      *(_QWORD *)(v119 + 24) = *v127 & 0xC000000000000000uLL | 1;
      goto LABEL_270;
    }
    MiRestoreTransitionPte(v119);
    *(_QWORD *)(v119 + 24) &= 0xFFFFFF0000000000uLL;
    MiClearPfnReuseFields(v119, v144, v145, v146);
    *(_QWORD *)(v119 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList((__int64)(v119 + 0x220000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v119 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v53 -= 8LL;
LABEL_169:
    v51 = 0x800000000000000LL;
    v48 = 0x1FFFFFFFFFF8LL;
LABEL_78:
    v5 = *(_DWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v53 += 8LL;
  }
  while ( v53 <= *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) );
LABEL_79:
  v57 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
  if ( !v57 )
    goto LABEL_91;
  v58 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v58 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ThreadLock, v51, v48) )
      {
        HvlNotifyLongSpinWait(v58);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v57 + 24) < 0 );
  }
  v59 = 0x10000000000LL;
  if ( (*(_QWORD *)v57 & 0xFFFFFFFFFFELL) == 0 )
  {
    v60 = 0LL;
    *(_DWORD *)(v57 + 32) &= ~0x200000u;
    goto LABEL_84;
  }
  v71 = *(_QWORD *)v57 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL;
  v72 = *(_QWORD **)(8 * v71);
  v60 = 8 * v71;
  if ( v72 == (_QWORD *)(8 * v71) )
  {
    MiSetLeafPfnBuddy(v57, 0LL);
    goto LABEL_84;
  }
  v73 = *v72;
  if ( v72[1] != v60 || *(_QWORD **)(v73 + 8) != v72 )
LABEL_315:
    __fastfail(3u);
  *(_QWORD *)v60 = v73;
  *(_QWORD *)(v73 + 8) = v60;
  if ( *(_QWORD *)v60 == v60 )
  {
    *v72 = v72;
    v74 = v72;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v60 + 8LL) = v72;
    v74 = *(_QWORD **)(v60 + 8);
    *v74 = v72;
  }
  v72[1] = v74;
  MiSetLeafPfnBuddy(v57, v72);
LABEL_84:
  if ( (*(_QWORD *)(v57 + 40) & v59) == 0 )
  {
    v61 = (__int64)(*(_QWORD *)(v57 + 8) << 25) >> 16;
    if ( v61 < 0xFFFF800000000000uLL || byte_140E37BF0[((v61 >> 39) & 0x1FF) - 256] != 4 )
      MiRemoveLockedPageChargeAndDecRef(v57, v51, v48);
  }
  if ( v60 )
    *(_DWORD *)(v60 + 16) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
LABEL_91:
  MiMakeSystemCachePtesValid(v4 + 224);
  v62 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
  v63 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
  v64 = v63;
  if ( v62 )
  {
    if ( *(_WORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x112) )
    {
      v65 = 2 * ((*(unsigned __int8 *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x115) >> 1) & 1u);
      v66 = ((unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) << 12)
          + (v62 << 25 >> 16 << 25 >> 16);
      if ( v66 < 0xFFFFF68000000000uLL || v66 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v65 = (unsigned int)v65 | 5;
      }
      else
      {
        v75 = *(_DWORD *)(v63 + 184);
        v63 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
        if ( (v75 & 0xF) == 0 )
          v65 = (unsigned int)v65 | 4;
      }
      MiAddWorkingSetEntries(
        v63,
        v66,
        *(unsigned __int16 *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x112),
        v65);
      v62 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
      *(_WORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x112) = 0;
    }
    if ( v62 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v91 = KeGetCurrentPrcb();
      v92 = *(_DWORD *)(v64 + 184) & 0xF;
      if ( v92 )
      {
        if ( v92 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v91->SelfmapLockHandle[1]);
          goto LABEL_103;
        }
        v93 = 3LL;
        if ( v92 == 5 )
          v93 = 0LL;
      }
      else
      {
        v93 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v91->SelfmapLockHandle[v93]);
      goto LABEL_103;
    }
    if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0
      || (v67 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118), v67 < 0xFFFFF6FB7DBED000uLL)
      || v67 > 0xFFFFF6FB7DBEDFFFuLL
      || (v94 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      v68 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
      if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0 && v68 >= 0xFFFFF6FB7DBED000uLL && v68 <= 0xFFFFF6FB7DBEDFFFuLL )
        _InterlockedAnd(
          (volatile signed __int32 *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                                       * ((unsigned __int64)(2
                                                                                           * (unsigned int)((__int64)(v68 + 0x90482413000LL) >> 3)) >> 5)
                                                                       + 4],
          ~(2 << ((2 * ((__int64)(v68 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                  * ((__int64)(v68 + 0x90482413000LL) >> 3)) & 0x1F)));
      else
        _InterlockedAnd64((volatile signed __int64 *)v68, 0xCFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v94
                                                                        + 4
                                                                        * ((*(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0x118) >> 3) & 0x1FFLL)));
    }
LABEL_103:
    *(_BYTE *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x115) |= 4u;
    v63 = *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
    *(_QWORD *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = 0LL;
  }
  MiUnlockWorkingSetShared(v63, *(unsigned __int8 *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114));
  if ( LODWORD(stru_140E67200.ThreadLock) )
    MiCachedPageNotifyPf(v4 + 224);
  v69 = *(_BYTE **)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( v69 )
    *v69 = *(_BYTE *)v4;
  return *(unsigned int *)(((unsigned __int64)v151 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188);
}
