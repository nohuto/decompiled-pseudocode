/*
 * XREFs of MmCheckCachedPageStates @ 0x1402E6810
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14026D270 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1402E6510 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1402E6670 (CcMapAndRead.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x14048D85C (CcMapDataForOverwrite.c)
 * Callees:
 *     MiGetVirtualAddressState @ 0x14024D274 (MiGetVirtualAddressState.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlinkProtoPages @ 0x140297A00 (MiUnlinkProtoPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029BC90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUserPdeOrAbove @ 0x1402A1440 (MiUserPdeOrAbove.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAreChargesNeededToLockPage @ 0x1402E5D80 (MiAreChargesNeededToLockPage.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiMakeSystemCachePtesValid @ 0x1402E5F40 (MiMakeSystemCachePtesValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402EE000 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeForLockedPage @ 0x1402F5F60 (MiChargeForLockedPage.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiWriteValidPteNewProtection @ 0x140300450 (MiWriteValidPteNewProtection.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiClearPfnReuseFields @ 0x14031A250 (MiClearPfnReuseFields.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiGetSharedProtos @ 0x140372BD8 (MiGetSharedProtos.c)
 *     MiIsAddressGlobal @ 0x140374CF0 (MiIsAddressGlobal.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiGetLeafPfnBuddy @ 0x140416870 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x1404168D0 (MiSpinForProtoPoolLock.c)
 *     MiUpdateShareCount @ 0x14042F060 (MiUpdateShareCount.c)
 *     MiSetLeafPfnBuddy @ 0x140463390 (MiSetLeafPfnBuddy.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiCachedPagesMakeHot @ 0x1406F5980 (MiCachedPagesMakeHot.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiCachedPageNotifyPf @ 0x140A5CB60 (MiCachedPageNotifyPf.c)
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
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 HasShadow; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  char v41; // di
  int v42; // r14d
  int v43; // r13d
  volatile signed __int32 *v44; // rsi
  unsigned __int32 v45; // edx
  int v46; // r12d
  bool v47; // zf
  signed __int32 v48; // eax
  unsigned __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdi
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
  ULONG_PTR v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  __int64 v84; // rcx
  BOOL v85; // r8d
  unsigned __int64 v86; // r13
  volatile signed __int64 *v87; // r8
  __int64 v88; // r9
  unsigned __int64 v89; // r12
  unsigned __int64 *v90; // rdx
  unsigned __int64 v91; // r14
  unsigned __int64 ContainingPageTable; // r14
  struct _KPRCB *v93; // rdx
  char v94; // al
  __int64 v95; // rcx
  __int64 v96; // rcx
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // rdx
  char v99; // r8
  ULONG_PTR v100; // rdx
  __int64 v101; // rax
  signed __int64 v102; // rax
  __int64 v103; // rbx
  unsigned int v104; // r13d
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  signed __int64 i; // rcx
  signed __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // r9
  __int64 v112; // r8
  unsigned __int64 v113; // rbx
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rcx
  __int64 v116; // r14
  unsigned int v117; // r12d
  char v118; // cl
  __int64 v119; // rdx
  ULONG_PTR v120; // rbx
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rcx
  ULONG_PTR v123; // r14
  _QWORD *v124; // r13
  int v125; // r12d
  int v126; // eax
  int v127; // r12d
  __int64 v128; // r8
  unsigned __int64 v129; // rbx
  unsigned __int64 v130; // rbx
  volatile signed __int64 *v131; // r10
  __int64 v132; // rax
  __int64 v133; // r9
  __int64 v134; // r10
  __int64 v135; // r8
  __int64 v136; // rdx
  __int64 v137; // rcx
  unsigned __int64 v138; // rdx
  __int64 v139; // r9
  unsigned __int64 v140; // r8
  unsigned __int64 v141; // rbx
  __int64 v142; // rdx
  char v143; // cl
  __int64 v144; // rax
  int v145; // ecx
  signed __int32 v146; // eax
  __int64 LeafPfnBuddy; // rax
  _QWORD *v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  unsigned __int64 v152; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v154; // rdx
  __int64 v155; // rax
  _BYTE v156[4]; // [rsp+70h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL;
  v5 = a3;
  *(_DWORD *)(v4 + 8) = a3;
  *(_QWORD *)(v4 + 32) = a4;
  memset_0((void *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 224), 0, 0xC8uLL);
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 2LL;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 0LL;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = MiCachedPageCandidate;
  *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 0;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = MiCachedPageFinish;
  *(_BYTE *)v4 = 1;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = ((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                       + 224;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = v5;
  v9 = 2LL;
  *(_OWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = 0LL;
  v10 = (((a1 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v10;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL)
                                                                       - 0x98000000000LL;
  if ( v10 >= 0xFFFF800000000000uLL && byte_140E37A70[((v10 >> 39) & 0x1FF) - 256] == 4 )
  {
    *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 0LL;
    *(_OWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0LL;
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
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = ((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 296;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) = ((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 328;
  v11 = ((a1 & 0xFFFFFFFFFFFFLL) >> 18) & 0x3FFFFFFFFFF8LL;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 64LL;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 64LL;
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
      v13 = qword_140E37B90 + 16 * (v13 - 1);
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
  v15 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
  *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x115) |= 8u;
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = &unk_140E3D500;
  v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (dword_140E3D5B8 & 0xFu) > 5 )
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
    v17 = qword_140E3D5C0;
    Number = KeGetPcr()->Prcb.Number;
    if ( (dword_140E3D5B8 & 0xF) == 1 )
      v17 = qword_140E37800;
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
  *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114) = CurrentIrql;
  if ( v16 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v29 = dword_140E3D5B8 & 0xF;
    if ( (dword_140E3D5B8 & 0xF) != 0 )
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
      v31 = (volatile __int64 *)((char *)&unk_140E2E918 + 8 * v30);
    }
    else
    {
      v30 = 2;
      v31 = (volatile __int64 *)&unk_140E3D5B0;
    }
    v32 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v30 + v30;
    *((_QWORD *)v32 + 1) = v31;
    *v32 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v33 = _InterlockedExchange64(v31, (__int64)v32);
      if ( v33 )
        KxWaitForLockOwnerShip((volatile signed __int64)v32, v33, (__int64)v31);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v32, v31);
    }
  }
  else if ( (dword_140E3D5B8 & 0xF) == 0
         && v16 >= 0xFFFFF6FB7DBED000uLL
         && v16 <= 0xFFFFF6FB7DBEDFFFuLL
         && (v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v34 + 4 * ((v16 >> 3) & 0x1FF)));
  }
  else if ( (dword_140E3D5B8 & 0xF) != 0 && v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    v39 = 2 * ((__int64)(v16 + 0x90482413000LL) >> 3);
    v40 = (unsigned __int64)v39 >> 5;
    v41 = v39 & 0x1F;
    LOBYTE(v39) = v39 & 0x1F;
    v42 = 1 << v39;
    v43 = 2 << v39;
    v44 = (volatile signed __int32 *)&stru_140E2D930.PriorityFloorCounts[4 * v40 + 4];
    v45 = *v44;
    v46 = ~(2 << v39);
    do
    {
      while ( ((v45 >> v41) & 1) != 0 )
      {
        if ( ((v45 >> v41) & 2) != 0 )
        {
          do
          {
            KeYieldProcessorEx((_DWORD *)(v4 + 4));
            v45 = *v44;
          }
          while ( (((unsigned __int32)*v44 >> v41) & 1) != 0 );
        }
        else
        {
          v145 = v43 | v45;
          v146 = _InterlockedCompareExchange(v44, v43 | v45, v45);
          v47 = v45 == v146;
          v45 = v146;
          if ( v47 )
            v45 = v145;
        }
      }
      v48 = _InterlockedCompareExchange(v44, v46 & (v45 | v42), v45);
      v47 = v45 == v48;
      v45 = v48;
    }
    while ( !v47 );
    BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v5 = *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  else
  {
    v26 = *(_QWORD *)v16;
    *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL
      && v16 <= 0xFFFFF6FB7DBED7F8uLL
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v26, v9);
      if ( HasShadow )
      {
        v36 = *(_QWORD *)(HasShadow + 1288);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * ((v16 >> 3) & 0x1FF));
          if ( (v37 & 0x20) != 0 )
            v26 |= 0x20uLL;
          v38 = v26;
          v26 |= 0x42uLL;
          if ( (v37 & 0x42) == 0 )
            v26 = v38;
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
          v102 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v26 | 0x2000000000000000LL, v26);
          if ( v26 == v102 )
            v26 |= 0x2000000000000000uLL;
          else
            v26 = v102;
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
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = v16;
  v49 = (__int64)(*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) << 25) >> 16;
  v50 = *(_QWORD *)(48 * ((*(_QWORD *)(((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL) >> 1;
  LODWORD(v50) = v50 & 0x7FFFFFFF;
  v51 = v50 | ((unsigned __int64)(*(_DWORD *)(48
                                            * ((*(_QWORD *)(((v49 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                                            - 0x220000000000LL
                                            + 36) & 0x3FF0000) << 15);
  if ( v51 )
  {
    if ( (unsigned __int64)(v51 - 0x10000000000LL) <= 1 )
    {
      if ( v51 == 0x10000000001LL && PsInitialSystemProcess )
        v51 = (__int64)PsInitialSystemProcess;
    }
    else
    {
      v51 = qword_140E37B90 + 16 * (v51 - 1);
    }
    if ( v51 )
    {
      v49 = (v49 >> 18) & 7;
      v51 += 40LL * (unsigned int)v49;
    }
  }
  else
  {
    v51 = 0LL;
  }
  v52 = *(_QWORD *)(v51 + 24);
  v53 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v52 & 1) == 0 )
    v53 = v52;
  v54 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = *(_QWORD *)(stru_140E2EB88.ThreadLock
                                                                                    + 8LL
                                                                                    * (*(_DWORD *)(*(_QWORD *)v53 + 60LL) & 0x3FF))
                                                                        + 22592LL;
  if ( v54 > *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) )
    goto LABEL_79;
  v52 = 0x800000000000000LL;
  v49 = 0x1FFFFFFFFFF8LL;
  do
  {
    v55 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168);
    if ( v55
      && _bittest64(
           *(const signed __int64 **)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158),
           (__int64)(v54 - v55) >> 3) )
    {
      goto LABEL_78;
    }
    v56 = *(_QWORD *)v54;
    if ( (*(_QWORD *)v54 & 1) != 0 )
    {
      if ( (v5 & 4) != 0 )
      {
        v101 = (v56 & 0x42) != 0 || (v56 & 0x800) == 0 ? *(_QWORD *)&CLFS_LSN_NULL_EXT : v56 | 0x62;
        if ( (v101 & 1) != 0 )
        {
          MiWriteValidPteNewProtection(v54, v101);
          goto LABEL_169;
        }
      }
      goto LABEL_78;
    }
    v76 = BugCheckParameter4;
    v77 = *(_QWORD *)v54;
    if ( qword_140E2D740 )
    {
      v77 = v56 & 0xFFFFFFFFFFFFFFEFuLL;
      if ( (v56 & 0x10) == 0 )
        v77 = v56 & qword_140E2D748;
    }
    v78 = qword_140E37B90;
    if ( (v77 & 0x800000000000000LL) == 0 )
      v78 = qword_140E37BA0;
    BugCheckParameter4 = v78 + ((v77 >> 9) & 0x1FFFFFFFFFF8LL);
    *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = BugCheckParameter4;
    while ( 1 )
    {
      v79 = *(_QWORD *)(v14 + 8);
      if ( BugCheckParameter4 >= v79 && BugCheckParameter4 < v79 + 8LL * *(unsigned int *)(v14 + 44) )
        break;
      v14 = *(_QWORD *)(v14 + 16);
    }
    v80 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8);
    if ( v80 != v14 )
    {
      if ( !v80 )
      {
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = v14;
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = v54;
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = BugCheckParameter4;
        v81 = *(_QWORD *)(v14 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)v14 + 56LL) & 0x20) != 0 )
        {
          if ( BugCheckParameter4 < v81 || BugCheckParameter4 >= v81 + 8LL * *(unsigned int *)(v14 + 44) )
            v100 = (BugCheckParameter4 << 9)
                 - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v14, 0xFFFFFFFFLL, v14) + 72) << 9);
          else
            v100 = (BugCheckParameter4 << 9) - (v81 << 9);
          v83 = ((unsigned __int64)*(unsigned int *)(v14 + 36) << 9) + (v100 & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          if ( v81 )
            v82 = (__int64)(BugCheckParameter4 - v81) >> 3 << 12;
          else
            v82 = 0LL;
          v83 = v82 + ((*(unsigned int *)(v14 + 36) | ((unsigned __int64)(*(_DWORD *)(v14 + 32) & 0xFFC0) << 26)) << 12);
        }
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = v83;
      }
      *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = v14;
    }
    v84 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
    if ( !v84 )
      goto LABEL_140;
    if ( ((BugCheckParameter4 ^ v76) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiUnlockProtoPoolPage(v84, 0x11u);
LABEL_140:
      v85 = BugCheckParameter4 >= 0xFFFF800000000000uLL
         && byte_140E37A70[((BugCheckParameter4 >> 39) & 0x1FF) - 256] == 4;
      *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v85;
      v86 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v86;
      if ( !v85 )
      {
        v87 = (volatile signed __int64 *)0xFFFFF68000000000LL;
        v88 = 0xFFFFFFFFFFLL;
        goto LABEL_145;
      }
      ContainingPageTable = MiGetContainingPageTable(*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      v89 = v86 >> 9;
LABEL_205:
      v103 = 48 * ContainingPageTable - 0x220000000000LL;
      v104 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v103 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v104 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v104);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v103 + 24) < 0 );
      }
      v86 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( !*(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
      {
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v86;
        v87 = (volatile signed __int64 *)0xFFFFF68000000000LL;
        v105 = *(_QWORD *)((v89 & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
        if ( (v105 & 1) == 0 || (v105 & 0x200) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_158;
        }
        v88 = 0xFFFFFFFFFFLL;
        if ( ContainingPageTable != ((v105 >> 12) & 0xFFFFFFFFFFLL) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_145:
          v89 = v86 >> 9;
          v90 = (unsigned __int64 *)(((v86 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
          while ( 1 )
          {
            v91 = *v90;
            if ( (*v90 & 1) == 0 || (v91 & 0x200) != 0 )
              break;
            ContainingPageTable = (v91 >> 12) & 0xFFFFFFFFFFLL;
            if ( ContainingPageTable <= qword_140E2D7A0
              && (*(_QWORD *)(48 * ContainingPageTable - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
            {
              goto LABEL_205;
            }
          }
LABEL_158:
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
LABEL_159:
          MiReleaseCachedPageLocks(v4 + 224, v90, v87, v88);
          BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          MiAcquireCachedPageLocks(v4 + 224, BugCheckParameter4);
LABEL_160:
          v54 -= 8LL;
          goto LABEL_169;
        }
        if ( !MiAreChargesNeededToLockPage(48 * ContainingPageTable - 0x220000000000LL)
          || (unsigned int)MiChargeForLockedPage(48 * ContainingPageTable - 0x220000000000LL, 1LL) )
        {
          *(_DWORD *)(v103 + 32) ^= (unsigned __int16)(*(_DWORD *)(v103 + 32) ^ (*(_DWORD *)(v103 + 32) + 1));
        }
      }
      memset_0((void *)(v4 + 128), 0, 0x40uLL);
      if ( (*(_BYTE *)(v103 + 34) & 0x20) != 0 )
      {
        *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0;
        LeafPfnBuddy = MiGetLeafPfnBuddy(v103, 1LL);
        if ( LeafPfnBuddy )
        {
          v148 = *(_QWORD **)(LeafPfnBuddy + 8);
          if ( *v148 != LeafPfnBuddy )
            goto LABEL_315;
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v148;
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = LeafPfnBuddy;
          *v148 = v4 + 128;
          *(_QWORD *)(LeafPfnBuddy + 8) = v4 + 128;
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = ((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                               + 128;
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                               + 128;
          *(_QWORD *)v103 = ((v4 + 128) >> 3) & 0x1FFFFFFFFFFFFFFELL ^ (*(_QWORD *)v103 ^ ((v4 + 128) >> 3) & 0x1FFFFFFFFFFFFFFELL) & 0xFFFFF00000000001uLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiSpinForProtoPoolLock(v4 + 128);
        *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v103 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx((_DWORD *)(v4 + 4));
          while ( *(__int64 *)(v103 + 24) < 0 );
        }
      }
      else
      {
        *(_DWORD *)(v103 + 32) |= 0x200000u;
      }
      if ( (*(_QWORD *)(v103 + 24) & 0x4000000000000000LL) == 0 && (*(_QWORD *)(v103 + 40) & 0x10000000000LL) == 0 )
      {
        v106 = (__int64)(*(_QWORD *)(v103 + 8) << 25) >> 16;
        if ( v106 < 0xFFFF800000000000uLL || byte_140E37A70[((v106 >> 39) & 0x1FF) - 256] != 4 )
        {
          v87 = (volatile signed __int64 *)(*(_QWORD *)(v103 + 8) | 0x8000000000000000uLL);
          if ( (*v87 & 0x20) == 0 )
          {
            for ( i = *v87; ; i = v108 )
            {
              v90 = (unsigned __int64 *)(i | 0x20);
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v108 = _InterlockedCompareExchange64(v87, (signed __int64)v90, i);
              if ( i == v108 )
                break;
            }
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = v103;
      if ( 48 * ContainingPageTable == 0x220000000000LL )
        goto LABEL_159;
      BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    v109 = *(_QWORD *)BugCheckParameter4;
    if ( (*(_QWORD *)BugCheckParameter4 & 1) == 0 )
    {
      if ( (*(_QWORD *)BugCheckParameter4 & 0xC00LL) != 0x800 )
        goto LABEL_279;
      v110 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8);
      if ( v54 + 8 < v110
        && *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) < 2u
        && !*(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) )
      {
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = v54;
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = BugCheckParameter4;
        v138 = BugCheckParameter4 + 8 * ((__int64)(v110 - v54) >> 3) + 8;
        if ( v138 > (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v138 = (BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        v139 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8);
        v140 = *(_QWORD *)(v139 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v139 + 44) - *(_DWORD *)(v139 + 52));
        if ( v138 <= v140 )
          v140 = v138;
        v141 = (__int64)(v140 - BugCheckParameter4) >> 3;
        if ( v141 > 1 )
        {
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v139;
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = BugCheckParameter4;
          *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v140;
          *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) = 1;
          v142 = MiUnlinkProtoPages((_QWORD *)(v4 + 40));
          v143 = *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) + 1;
          *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) = 0;
          v47 = *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) == 0;
          *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) = v143;
          if ( v47 || *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18E) )
            *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18C) = v143 + 1;
          v144 = 0LL;
          if ( v142 == v141 )
            v144 = v142;
          v54 = v54 + 8 * v144 - 8;
          goto LABEL_169;
        }
      }
    }
    _mm_lfence();
    *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) = 0;
    while ( 2 )
    {
      v111 = 0xFFFFDE0000000000uLL;
      v112 = 0xFFFFFFFFFFLL;
      while ( 1 )
      {
        v113 = *(_QWORD *)BugCheckParameter4;
        if ( (*(_QWORD *)BugCheckParameter4 & 1) != 0 )
        {
          v114 = *(_QWORD *)BugCheckParameter4;
          goto LABEL_244;
        }
        if ( (*(_QWORD *)BugCheckParameter4 & 0xC00LL) != 0x800 )
        {
          v109 = *(_QWORD *)BugCheckParameter4;
          goto LABEL_279;
        }
        if ( !v113 || !qword_140E2D740 || (qword_140E2D740 & v113) != 0 )
        {
          v114 = *(_QWORD *)BugCheckParameter4;
          if ( qword_140E2D740 )
          {
            v114 = v113 & 0xFFFFFFFFFFFFFFEFuLL;
            if ( (v113 & 0x10) == 0 )
              v114 = qword_140E2D748 & v113;
          }
LABEL_244:
          v115 = (v114 >> 12) & 0xFFFFFFFFFFLL;
          if ( v115 <= qword_140E2D7A0 )
          {
            v116 = 48 * v115 - 0x220000000000LL;
            if ( (*(_QWORD *)(v116 + 40) & 0x40000000000000LL) != 0 )
              break;
          }
        }
      }
      v117 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v116 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v117 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v117);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v116 + 24) < 0 );
      }
      if ( *(_QWORD *)BugCheckParameter4 != v113 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v116 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        continue;
      }
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v116 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      v116 = MiLockSpecialPurposeMemoryCachedPage(v116, 2);
    v109 = *(_QWORD *)BugCheckParameter4;
    if ( !v116 )
    {
LABEL_279:
      if ( (int)MiResolveCachedPageHardFault(
                  (int)v4 + 224,
                  *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                  v54,
                  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8),
                  BugCheckParameter4,
                  v109) >= 0 )
      {
LABEL_271:
        v133 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0);
        v134 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170);
        v135 = 0LL;
        v136 = v133;
        if ( v133 == v14 )
          goto LABEL_167;
        do
        {
          v137 = *(unsigned int *)(v136 + 44);
          if ( v136 == v133 )
            v137 = (*(_QWORD *)(v136 + 8) + 8 * v137 - v134) >> 3;
          v136 = *(_QWORD *)(v136 + 16);
          v135 += v137;
        }
        while ( v136 != v14 );
        if ( v136 == v133 )
LABEL_167:
          v97 = (__int64)(BugCheckParameter4 - v134) >> 3;
        else
          v97 = ((__int64)(BugCheckParameter4 - *(_QWORD *)(v136 + 8)) >> 3) + v135;
        v98 = v97 >> 3;
        v99 = v97 & 7;
        *(_BYTE *)(*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) + v98) |= 1 << v99;
        ++*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
        *(_BYTE *)(*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x158) + v98) |= 1 << v99;
        ++*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160);
      }
      else
      {
        *(_BYTE *)v4 = 0;
      }
      goto LABEL_169;
    }
    if ( (v109 & 1) != 0 )
    {
      if ( (*(_DWORD *)(v116 + 32) & 0x40000000) == 0 )
      {
        MiUpdateShareCount(v116, 1LL, v112, v111);
LABEL_270:
        _InterlockedAnd64(v131, 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_271;
      }
LABEL_370:
      _InterlockedAnd64((volatile signed __int64 *)(v116 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_169;
    }
    v47 = qword_140E2D740 == 0;
    *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = v54;
    *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = BugCheckParameter4;
    *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = v116;
    if ( !v47 )
    {
      v118 = v109;
      v119 = v109 & qword_140E2D748;
      v109 &= ~0x10uLL;
      if ( (v118 & 0x10) == 0 )
        v109 = v119;
    }
    v120 = 48 * ((v109 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v120 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) )
        goto LABEL_370;
      v155 = MiHandleSpecialPurposeMemoryCachedFault(
               0LL,
               (__int64)(v54 << 25) >> 16,
               (unsigned __int64 *)BugCheckParameter4,
               v120);
      v120 = v155;
      if ( v155 )
      {
        *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = v155;
        goto LABEL_257;
      }
      goto LABEL_160;
    }
LABEL_257:
    if ( (*(_BYTE *)(v120 + 34) & 0x20) != 0 || (*(_DWORD *)(v120 + 32) & 0x40000000) != 0 )
      goto LABEL_370;
    v121 = *(_QWORD *)(v120 + 16);
    v122 = v121 >> 2;
    if ( (v121 & 0x400) == 0 )
      v122 = v121 >> 16;
    if ( (v122 & 1) != 0 && !*(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) )
    {
      if ( *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) )
      {
        *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18D) = 1;
        goto LABEL_370;
      }
      *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18E) = 1;
      if ( (int)MiCachedPagesMakeHot(v4 + 224, v120) < 0 )
        goto LABEL_160;
    }
    if ( (unsigned __int16)*(_DWORD *)(v120 + 32)
      && *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18F) )
    {
      MiUnlinkPageFromListEx(v120);
    }
    v123 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
    if ( (MiUnlinkPageFromListEx(v123) & 3) == 0 )
    {
      v124 = (_QWORD *)(*(_QWORD *)(v123 + 8) | 0x8000000000000000uLL);
      *(_DWORD *)(v123 + 32) ^= (unsigned __int16)(*(_DWORD *)(v123 + 32) ^ (*(_DWORD *)(v123 + 32) + 1));
      *(_DWORD *)(v123 + 32) = *(_DWORD *)(v123 + 32) & 0xFFF8FFFF | 0x60000;
      v125 = (*(_DWORD *)(v123 + 16) >> 5) & 7;
      v126 = (*(_DWORD *)(v123 + 32) >> 22) & 3;
      if ( v126 != 1 )
      {
        if ( v126 )
        {
          if ( v126 == 2 )
            v125 |= 0x18u;
        }
        else
        {
          v125 |= 8u;
        }
      }
      v127 = v125 | 0x20000000;
      v128 = v127 & 0x1F;
      *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v128;
      v129 = MmProtectToPteMask[v128] & 0xFFF0000000000E7FuLL | ((((__int64)(v123 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) | 0x21;
      if ( v54 < 0xFFFFF68000000000uLL || v54 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v130 = MmProtectToPteMask[v128] & 0xFFF0000000000E7FuLL | ((((__int64)(v123 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) | 0x121;
      }
      else
      {
        if ( v54 >= 0xFFFFF6FB40000000uLL && v54 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          v129 = v54 == 0xFFFFF6FB7DBEDF68uLL
               ? MmProtectToPteMask[v128] & 0xFFF0000000000E7FuLL | ((((__int64)(v123 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) | 0x8000000000000021uLL
               : MmProtectToPteMask[v128] & 0x7FF0000000000E7FLL | ((((__int64)(v123 + 0x220000000000LL) / 48) & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | 0x21;
          if ( (unsigned int)MiUserPdeOrAbove(v54) )
            v129 |= 4uLL;
        }
        v152 = (__int64)(v54 << 25) >> 16;
        if ( v152 < 0x7FFFFFFF0000LL )
          v129 |= 4uLL;
        IsAddressGlobal = MiIsAddressGlobal(v152, v129);
        v130 = v129 | 0x100;
        if ( !IsAddressGlobal )
          v130 = v154;
      }
      v131 = (volatile signed __int64 *)(v123 + 24);
      v132 = v130 | 0x42;
      if ( v127 >= 0 || (v128 & 5) != 4 )
        v132 = v130;
      *v124 = (unsigned __int16)(BYTE4(stru_140E2D930.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2D930.Header.WaitListHead.Blink) << 8) ^ v132) & 0xFAFFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
      BugCheckParameter4 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      *(_QWORD *)(v123 + 24) = *v131 & 0xC000000000000000uLL | 1;
      goto LABEL_270;
    }
    MiRestoreTransitionPte(v123);
    *(_QWORD *)(v123 + 24) &= 0xFFFFFF0000000000uLL;
    MiClearPfnReuseFields(v123, v149, v150, v151);
    *(_QWORD *)(v123 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList((__int64)(v123 + 0x220000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v123 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v54 -= 8LL;
LABEL_169:
    v52 = 0x800000000000000LL;
    v49 = 0x1FFFFFFFFFF8LL;
LABEL_78:
    v5 = *(_DWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v54 += 8LL;
  }
  while ( v54 <= *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) );
LABEL_79:
  v57 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100);
  if ( !v57 )
    goto LABEL_91;
  v58 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v58 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
    if ( v61 < 0xFFFF800000000000uLL || byte_140E37A70[((v61 >> 39) & 0x1FF) - 256] != 4 )
      MiRemoveLockedPageChargeAndDecRef(v57, v52, v49);
  }
  if ( v60 )
    *(_DWORD *)(v60 + 16) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = 0LL;
LABEL_91:
  MiMakeSystemCachePtesValid(v4 + 224);
  v62 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
  v63 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
  v64 = v63;
  if ( v62 )
  {
    if ( *(_WORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x112) )
    {
      v65 = 2 * ((*(unsigned __int8 *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x115) >> 1) & 1u);
      v66 = ((unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) << 12)
          + (v62 << 25 >> 16 << 25 >> 16);
      if ( v66 < 0xFFFFF68000000000uLL || v66 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v65 = (unsigned int)v65 | 5;
      }
      else
      {
        v75 = *(_DWORD *)(v63 + 184);
        v63 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
        if ( (v75 & 0xF) == 0 )
          v65 = (unsigned int)v65 | 4;
      }
      MiAddWorkingSetEntries(
        v63,
        v66,
        *(unsigned __int16 *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x112),
        v65);
      v62 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
      *(_WORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x112) = 0;
    }
    if ( v62 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v93 = KeGetCurrentPrcb();
      v94 = *(_DWORD *)(v64 + 184) & 0xF;
      if ( v94 )
      {
        if ( v94 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v93->SelfmapLockHandle[1]);
          goto LABEL_103;
        }
        v95 = 3LL;
        if ( v94 == 5 )
          v95 = 0LL;
      }
      else
      {
        v95 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v93->SelfmapLockHandle[v95]);
      goto LABEL_103;
    }
    if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0
      || (v67 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118), v67 < 0xFFFFF6FB7DBED000uLL)
      || v67 > 0xFFFFF6FB7DBEDFFFuLL
      || (v96 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      v68 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118);
      if ( (*(_DWORD *)(v64 + 184) & 0xF) != 0 && v68 >= 0xFFFFF6FB7DBED000uLL && v68 <= 0xFFFFF6FB7DBEDFFFuLL )
        _InterlockedAnd(
          (volatile signed __int32 *)&stru_140E2D930.PriorityFloorCounts[4
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
      ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v96
                                                                        + 4
                                                                        * ((*(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0x118) >> 3) & 0x1FFLL)));
    }
LABEL_103:
    *(_BYTE *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x115) |= 4u;
    v63 = *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108);
    *(_QWORD *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = 0LL;
  }
  MiUnlockWorkingSetShared(v63, *(unsigned __int8 *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x114));
  if ( LODWORD(stru_140E66FF0.ThreadLock) )
    MiCachedPageNotifyPf(v4 + 224);
  v69 = *(_BYTE **)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( v69 )
    *v69 = *(_BYTE *)v4;
  return *(unsigned int *)(((unsigned __int64)v156 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188);
}
