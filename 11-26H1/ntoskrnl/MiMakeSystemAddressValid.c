/*
 * XREFs of MiMakeSystemAddressValid @ 0x1402E4940
 * Callers:
 *     MiCaptureDeleteHierarchy @ 0x1402E5900 (MiCaptureDeleteHierarchy.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiCloneVad @ 0x1402EC978 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140312F04 (MiCommitVadFillPageTables.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1403166E0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFillHyperPtes @ 0x140317670 (MiFillHyperPtes.c)
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x1403431A8 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiDecommitLockNewPageTable @ 0x140363378 (MiDecommitLockNewPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     MiQueryImageExtensionInformation @ 0x1404DF9B0 (MiQueryImageExtensionInformation.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E06A4 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1404EE0D0 (MiVadRangeIsIoSpace.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     MiDecommitGetMetadataSlot @ 0x140704B70 (MiDecommitGetMetadataSlot.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070FB60 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402C7E40 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiFlushAllFilesystemPages @ 0x1405343FC (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemAddressValid(ULONG_PTR BugCheckParameter4, int a2, KIRQL a3, char a4)
{
  int v4; // r15d
  KIRQL v5; // bl
  ULONG_PTR v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rbp
  ULONG_PTR v9; // r12
  int v10; // eax
  int v11; // esi
  unsigned __int64 v12; // r13
  struct _KPRCB *CurrentPrcb; // r8
  char v14; // al
  unsigned int v15; // ecx
  volatile __int64 *v16; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v17; // rcx
  __int64 v18; // r12
  __int64 i; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  signed __int64 v22; // rbx
  int v23; // r14d
  unsigned __int64 v24; // rsi
  unsigned int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v34; // rax
  signed __int64 v35; // rcx
  volatile signed __int64 v36; // rdx
  __int64 v37; // rbx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // r8
  int v41; // edx
  _KPROCESS *v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  signed __int64 v47; // rax
  struct _KPRCB *v48; // r8
  char v49; // al
  unsigned int v50; // ecx
  volatile __int64 *v51; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v52; // rcx
  char v53; // si
  int v54; // r15d
  volatile signed __int32 *v55; // rbx
  unsigned __int32 v56; // edx
  bool v57; // zf
  signed __int32 v58; // eax
  _KPROCESS *v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  volatile signed __int64 v62; // rcx
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  _KPROCESS *v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  struct _KPRCB *v69; // rdx
  char v70; // al
  __int64 v71; // rcx
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  ULONG_PTR v76; // rbx
  signed __int64 v77; // rax
  signed __int64 v78; // rax
  int v79; // ecx
  signed __int32 v80; // eax
  unsigned __int64 v81; // [rsp+30h] [rbp-128h] BYREF
  int v82; // [rsp+38h] [rbp-120h]
  __int64 v83; // [rsp+40h] [rbp-118h]
  __int64 v84; // [rsp+48h] [rbp-110h]
  __int64 v85; // [rsp+50h] [rbp-108h]
  ULONG_PTR v86; // [rsp+58h] [rbp-100h]
  char *v87; // [rsp+60h] [rbp-F8h]
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v89; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v90; // [rsp+78h] [rbp-E0h]
  unsigned __int64 v91; // [rsp+80h] [rbp-D8h]
  __int64 v92; // [rsp+88h] [rbp-D0h]
  _OWORD v93[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v94; // [rsp+B0h] [rbp-A8h]
  __int128 v95; // [rsp+C0h] [rbp-98h]
  __int128 v96; // [rsp+D0h] [rbp-88h]
  __int128 v97; // [rsp+E0h] [rbp-78h]
  __int128 v98; // [rsp+F0h] [rbp-68h]
  __int64 v99; // [rsp+100h] [rbp-58h]
  __int64 retaddr; // [rsp+158h] [rbp+0h]
  int v102; // [rsp+168h] [rbp+10h]
  int v104; // [rsp+178h] [rbp+20h]

  memset(v93, 0, sizeof(v93));
  v4 = a4 & 4;
  v5 = a3;
  v94 = 0LL;
  v6 = BugCheckParameter4;
  v82 = v4;
  v95 = 0LL;
  v96 = 0LL;
  v99 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  DWORD2(v94) = a2;
  v7 = BugCheckParameter3 + 1024;
  v84 = BugCheckParameter3 + 1024;
  LOBYTE(v93[0]) = (v4 != 0) + 7;
  v87 = (char *)v93 + 1;
  v8 = 0LL;
  v85 = 0LL;
  v9 = (__int64)(BugCheckParameter4 << 25) >> 16;
  v86 = v9;
  if ( v9 < 0xFFFFF68000000000uLL || (v10 = 0, v9 > 0xFFFFF6FFFFFFFFFFuLL) )
    v10 = 1;
  v11 = a4 & 1;
  v102 = v10;
  v104 = v11;
  while ( 2 )
  {
    if ( v11 )
    {
      if ( !(unsigned __int8)MmIsAddressValidEx(v6) )
      {
        MiUnlockWorkingSetExclusive(v7, v5);
        goto LABEL_159;
      }
      return 0LL;
    }
    if ( v10 )
    {
      v28 = MiFastLockLeafPageTable(v7, v9, 0);
      if ( v28 )
      {
        if ( v28 == 1 )
          return 0LL;
        v29 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v30 = (unsigned int)(v28 - 1);
        do
        {
          v29 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v30;
        }
        while ( v30 );
        MiUnlockPageTableInternal(v7, v29);
      }
    }
    v89 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v90 = ((v89 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v91 = ((v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v92 = ((v91 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 0xFFFFF6FB7DBEDF68uLL;
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = *(_DWORD *)(v7 + 184) & 0xF;
    if ( v14 )
    {
      if ( v14 == 7 )
      {
        v15 = 1;
      }
      else
      {
        v15 = 3;
        if ( v14 == 5 )
          v15 = 0;
      }
      v16 = (volatile __int64 *)(&MiState + 2 * v15 + 2278);
    }
    else
    {
      v15 = 2;
      v16 = (volatile __int64 *)(v7 + 176);
    }
    v17 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v15 + v15;
    *((_QWORD *)v17 + 1) = v16;
    *v17 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v16, (__int64)v17) )
        KxWaitForLockOwnerShip(v17);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v17, v16);
    }
    v18 = v84;
    for ( i = 2LL; ; --i )
    {
      v20 = *(&v89 + i);
      v83 = i;
      v21 = 0xFFFFF6FB7DBED000uLL;
      v22 = *(_QWORD *)v20;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0)
        && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          if ( Process )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v34 = *(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v22 |= 0x20uLL;
              v35 = v22;
              v22 |= 0x42uLL;
              if ( (v34 & 0x42) == 0 )
                v22 = v35;
            }
          }
        }
      }
      if ( (v22 & 0x81) != 1 )
        break;
      if ( (v22 & 0x20) != 0 )
        goto LABEL_66;
      v23 = 0;
      v24 = (__int64)((v20 << 25) - v8) >> 16;
      if ( (*(_DWORD *)(v18 + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v23 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v25 = 0;
          if ( _interlockedbittestandset(&dword_140E36200, 0x1Fu) )
            v25 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36200, 0xFFu);
          v26 = (unsigned int)dword_140E36200;
          v27 = (unsigned int)dword_140E36200;
          for ( LODWORD(v27) = dword_140E36200 & 0xBFFFFFFF;
                (dword_140E36200 & 0xBFFFFFFF) != 0x80000000;
                v26 = (unsigned int)dword_140E36200 )
          {
            if ( (v26 & 0x40000000) == 0 )
              _InterlockedOr(&dword_140E36200, 0x40000000u);
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v27, v26, v21) )
            {
              HvlNotifyLongSpinWait(v25);
            }
            else
            {
              _mm_pause();
            }
          }
        }
        else
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36200, 0xFFu);
        }
      }
      if ( v24 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        while ( 1 )
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, v22 | 0x20, v22);
          if ( v22 == v78 )
            break;
          v22 = v78;
        }
        goto LABEL_63;
      }
      v36 = *(_QWORD *)v20;
      v37 = v22 | 0x20;
      v38 = 0xFFFFF6FB7DBED000uLL;
      v39 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (v36 & 1) != 0
        && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v59 = MiPteHasShadow();
        if ( v59 )
        {
          v60 = v59[2].KernelWaitTime;
          if ( v60 )
          {
            v61 = *(_QWORD *)(v60 + 8 * ((v20 >> 3) & 0x1FF));
            if ( (v61 & 0x20) != 0 )
              v36 |= 0x20uLL;
            v62 = v36;
            v36 |= 0x42uLL;
            if ( (v61 & 0x42) == 0 )
              v36 = v62;
          }
        }
      }
      v40 = v36 ^ (v37 ^ v36) & 0x80FFFFFFFFFFFFFFuLL;
      v41 = 0;
      v81 = v40;
      if ( v20 >= v38 && v20 <= v39 )
      {
        if ( MiPteHasShadow() )
        {
          v41 = 1;
          if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
          {
            v63 = v81;
            if ( (v81 & 1) != 0 )
LABEL_167:
              v40 = v63 | 0x8000000000000000uLL;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        {
          v63 = v81;
          if ( (v81 & 1) != 0 )
            goto LABEL_167;
        }
      }
      *(_QWORD *)v20 = v40;
      if ( v41 )
      {
        v42 = MiPteHasShadow();
        if ( v42 )
        {
          v44 = v42[2].KernelWaitTime;
          if ( v44 )
          {
            v45 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v43 & 1) != 0 )
              v45 = v43 & 0x7FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v44 + 8 * ((v20 >> 3) & 0x1FF)) = v45;
          }
        }
      }
LABEL_63:
      if ( v23 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E36200 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36200, retaddr);
      }
LABEL_66:
      if ( v20 == v12 )
        goto LABEL_97;
      if ( v20 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v48 = KeGetCurrentPrcb();
        v49 = *(_DWORD *)(v18 + 184) & 0xF;
        if ( v49 )
        {
          if ( v49 == 7 )
          {
            v50 = 1;
          }
          else
          {
            v50 = 3;
            if ( v49 == 5 )
              v50 = 0;
          }
          v51 = (volatile __int64 *)(&MiState + 2 * v50 + 2278);
        }
        else
        {
          v50 = 2;
          v51 = (volatile __int64 *)(v18 + 176);
        }
        v52 = &v48->SelfmapLockHandle[0].LockQueue.Next + 2 * v50 + v50;
        *((_QWORD *)v52 + 1) = v51;
        *v52 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64(v51, (__int64)v52) )
            KxWaitForLockOwnerShip(v52);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v52, v51);
        }
      }
      else if ( (*(_DWORD *)(v18 + 184) & 0xF) != 0
             || v20 < 0xFFFFF6FB7DBED000uLL
             || v20 > 0xFFFFF6FB7DBEDFFFuLL
             || (v64 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v18 + 184) & 0xF) != 0 && v20 >= 0xFFFFF6FB7DBED000uLL && v20 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          LODWORD(v81) = 0;
          v53 = (2 * ((__int64)(v20 + 0x90482413000LL) >> 3)) & 0x1F;
          v54 = 2 << v53;
          v55 = (volatile signed __int32 *)(&MiState
                                          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v20 + 0x90482413000LL) >> 3)) >> 5)
                                          + 1467);
          v56 = *v55;
          do
          {
            while ( ((v56 >> v53) & 1) != 0 )
            {
              if ( ((v56 >> v53) & 2) != 0 )
              {
                do
                {
                  KeYieldProcessorEx(&v81);
                  v56 = *v55;
                }
                while ( (((unsigned __int32)*v55 >> v53) & 1) != 0 );
              }
              else
              {
                v79 = v54 | v56;
                v80 = _InterlockedCompareExchange(v55, v54 | v56, v56);
                v57 = v56 == v80;
                v56 = v80;
                if ( v57 )
                  v56 = v79;
              }
            }
            v58 = _InterlockedCompareExchange(v55, ~(2 << v53) & ((1 << v53) | v56), v56);
            v57 = v56 == v58;
            v56 = v58;
          }
          while ( !v57 );
        }
        else
        {
          v46 = *(_QWORD *)v20;
          LODWORD(v81) = 0;
          if ( v20 >= 0xFFFFF6FB7DBED000uLL
            && v20 <= 0xFFFFF6FB7DBED7F8uLL
            && (v46 & 1) != 0
            && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
          {
            v65 = MiPteHasShadow();
            if ( v65 )
            {
              v66 = v65[2].KernelWaitTime;
              if ( v66 )
              {
                v67 = *(_QWORD *)(v66 + 8 * ((v20 >> 3) & 0x1FF));
                if ( (v67 & 0x20) != 0 )
                  v46 |= 0x20uLL;
                v68 = v46;
                v46 |= 0x42uLL;
                if ( (v67 & 0x42) == 0 )
                  v46 = v68;
              }
            }
          }
          while ( (v46 & 1) != 0 )
          {
            if ( (v46 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v46 >> 60) & 2) != 0 )
              {
                do
                {
                  KeYieldProcessorEx(&v81);
                  v46 = *(_QWORD *)v20;
                }
                while ( (*(_QWORD *)v20 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                if ( (MiFlags & 0x8000000) != 0 )
                  _mm_lfence();
                v77 = _InterlockedCompareExchange64((volatile signed __int64 *)v20, v46 | 0x2000000000000000LL, v46);
                if ( v46 == v77 )
                  v46 |= 0x2000000000000000uLL;
                else
                  v46 = v77;
              }
            }
            else
            {
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v47 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v20,
                      v46 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                      v46);
              if ( v46 == v47 )
                break;
              v46 = v47;
            }
          }
          v18 = v84;
        }
        i = v83;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v64 + 4 * ((v20 >> 3) & 0x1FF)));
      }
      if ( v12 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v18 + 184) & 0xF) != 0
          || v12 < 0xFFFFF6FB7DBED000uLL
          || v12 > 0xFFFFF6FB7DBEDFFFuLL
          || (v72 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(v18 + 184) & 0xF) != 0 && v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
            _InterlockedAnd(
              (volatile signed __int32 *)&MiState
            + ((unsigned __int64)(2 * (unsigned int)((__int64)(v12 + 0x90482413000LL) >> 3)) >> 5)
            + 1467,
              ~(2 << ((2 * ((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                      * ((__int64)(v12 + 0x90482413000LL) >> 3)) & 0x1F)));
          else
            _InterlockedAnd64((volatile signed __int64 *)v12, 0xCFFFFFFFFFFFFFFFuLL);
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v72 + 4 * ((v12 >> 3) & 0x1FF)));
        }
        goto LABEL_96;
      }
      v69 = KeGetCurrentPrcb();
      v70 = *(_DWORD *)(v18 + 184) & 0xF;
      if ( v70 )
      {
        if ( v70 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69->SelfmapLockHandle[1]);
          goto LABEL_96;
        }
        v71 = 3LL;
        if ( v70 == 5 )
          v71 = 0LL;
      }
      else
      {
        v71 = 2LL;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v69->SelfmapLockHandle[v71]);
LABEL_96:
      v12 = v20;
LABEL_97:
      v8 = v85;
      if ( !i )
        break;
    }
    v9 = v86;
    if ( v12 == v89 )
      return 0LL;
    v7 = v84;
    MiUnlockPageTableInternal(v84, v12);
    MiUnlockWorkingSetShared(v7, a3);
    v11 = v104;
    v4 = v82;
    v6 = BugCheckParameter4;
LABEL_159:
    v73 = MmAccessFault(2uLL, v6);
    v76 = v73;
    if ( v73 < 0 && !v4 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 1uLL, v76, BugCheckParameter3, v6);
    }
    if ( v11 )
      MiLockWorkingSetExclusive(v7, v74, v75);
    else
      MiLockWorkingSetShared(v7, v74, v75);
    if ( (v76 & 0x80000000) == 0LL )
    {
      v10 = v102;
      v5 = a3;
      continue;
    }
    return (unsigned int)v76;
  }
}
