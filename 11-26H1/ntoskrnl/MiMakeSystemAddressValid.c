/*
 * XREFs of MiMakeSystemAddressValid @ 0x1403028C0
 * Callers:
 *     MiCaptureDeleteHierarchy @ 0x140303880 (MiCaptureDeleteHierarchy.c)
 *     MiSectionProtectAllPtes @ 0x140303F00 (MiSectionProtectAllPtes.c)
 *     MiCloneVad @ 0x14030A8F8 (MiCloneVad.c)
 *     MiBuildForkPte @ 0x14030AB74 (MiBuildForkPte.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiReplenishCloneLeafPage @ 0x14030E9E0 (MiReplenishCloneLeafPage.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCommitVadFillPageTables @ 0x140310ED0 (MiCommitVadFillPageTables.c)
 *     MiProtectPrivateMemory @ 0x1403116B4 (MiProtectPrivateMemory.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1403146B0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiFillHyperPtes @ 0x140315640 (MiFillHyperPtes.c)
 *     MiInsertViewOfPhysicalSection @ 0x140315954 (MiInsertViewOfPhysicalSection.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x140341128 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140341288 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiDecommitLockNewPageTable @ 0x1403615D8 (MiDecommitLockNewPageTable.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiLockPageTableRange @ 0x1404B0CFC (MiLockPageTableRange.c)
 *     MiMakeProtoLeafValid @ 0x1404BFB08 (MiMakeProtoLeafValid.c)
 *     MiQueryImageExtensionInformation @ 0x1404E6410 (MiQueryImageExtensionInformation.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1404F4AF0 (MiVadRangeIsIoSpace.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiCommitHotPatchTable @ 0x1406FBFCC (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 *     MiDecommitGetMetadataSlot @ 0x1406FFEA0 (MiDecommitGetMetadataSlot.c)
 *     MiWriteAwePtesNewPageTable @ 0x140702E64 (MiWriteAwePtesNewPageTable.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070A464 (MiStoreDiscardPoisonedPage.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14070AEB0 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E5E00 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x1402ED250 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiFlushAllFilesystemPages @ 0x140531F5C (MiFlushAllFilesystemPages.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 i; // r15
  unsigned __int64 v21; // rdi
  signed __int64 v22; // rbx
  int v23; // r14d
  unsigned __int64 v24; // rsi
  unsigned int v25; // ebp
  LONG j; // edx
  int v27; // eax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v33; // rax
  signed __int64 v34; // rcx
  volatile signed __int64 v35; // rdx
  __int64 v36; // rbx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r8
  int v40; // edx
  _KPROCESS *v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  signed __int64 v46; // rax
  struct _KPRCB *v47; // r8
  char v48; // al
  unsigned int v49; // ecx
  volatile __int64 *v50; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v51; // rcx
  __int64 v52; // rax
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
      v27 = MiFastLockLeafPageTable(v7, v9, 0);
      if ( v27 )
      {
        if ( v27 == 1 )
          return 0LL;
        v28 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v29 = (unsigned int)(v27 - 1);
        do
        {
          v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v29;
        }
        while ( v29 );
        MiUnlockPageTableInternal(v7, v28);
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v18 = _InterlockedExchange64(v16, (__int64)v17);
      if ( v18 )
        KxWaitForLockOwnerShip((volatile signed __int64)v17, v18, (__int64)CurrentPrcb);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)v17, v16);
    }
    v19 = v84;
    for ( i = 2LL; ; --i )
    {
      v21 = *(&v89 + i);
      v83 = i;
      v22 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
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
              v33 = *(_QWORD *)(KernelWaitTime + 8 * ((v21 >> 3) & 0x1FF));
              if ( (v33 & 0x20) != 0 )
                v22 |= 0x20uLL;
              v34 = v22;
              v22 |= 0x42uLL;
              if ( (v33 & 0x42) == 0 )
                v22 = v34;
            }
          }
        }
      }
      if ( (v22 & 0x81) != 1 )
        break;
      if ( (v22 & 0x20) != 0 )
        goto LABEL_66;
      v23 = 0;
      v24 = (__int64)((v21 << 25) - v8) >> 16;
      if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0 && v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v23 = 1;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          v25 = 0;
          if ( _interlockedbittestandset(&dword_140E36080, 0x1Fu) )
            v25 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E36080, 0xFFu);
          for ( j = dword_140E36080; (dword_140E36080 & 0xBFFFFFFF) != 0x80000000; j = dword_140E36080 )
          {
            if ( (j & 0x40000000) == 0 )
              _InterlockedOr(&dword_140E36080, 0x40000000u);
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
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
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E36080, 0xFFu);
        }
      }
      if ( v24 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        while ( 1 )
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v22 | 0x20, v22);
          if ( v22 == v78 )
            break;
          v22 = v78;
        }
        goto LABEL_63;
      }
      v35 = *(_QWORD *)v21;
      v36 = v22 | 0x20;
      v37 = 0xFFFFF6FB7DBED000uLL;
      v38 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        v59 = MiPteHasShadow();
        if ( v59 )
        {
          v60 = v59[2].KernelWaitTime;
          if ( v60 )
          {
            v61 = *(_QWORD *)(v60 + 8 * ((v21 >> 3) & 0x1FF));
            if ( (v61 & 0x20) != 0 )
              v35 |= 0x20uLL;
            v62 = v35;
            v35 |= 0x42uLL;
            if ( (v61 & 0x42) == 0 )
              v35 = v62;
          }
        }
      }
      v39 = v35 ^ (v36 ^ v35) & 0x80FFFFFFFFFFFFFFuLL;
      v40 = 0;
      v81 = v39;
      if ( v21 >= v37 && v21 <= v38 )
      {
        if ( MiPteHasShadow() )
        {
          v40 = 1;
          if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
          {
            v63 = v81;
            if ( (v81 & 1) != 0 )
LABEL_167:
              v39 = v63 | 0x8000000000000000uLL;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        {
          v63 = v81;
          if ( (v81 & 1) != 0 )
            goto LABEL_167;
        }
      }
      *(_QWORD *)v21 = v39;
      if ( v40 )
      {
        v41 = MiPteHasShadow();
        if ( v41 )
        {
          v43 = v41[2].KernelWaitTime;
          if ( v43 )
          {
            v44 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( (v42 & 1) != 0 )
              v44 = v42 & 0x7FFFFFFFFFFFFFFFLL;
            *(_QWORD *)(v43 + 8 * ((v21 >> 3) & 0x1FF)) = v44;
          }
        }
      }
LABEL_63:
      if ( v23 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          dword_140E36080 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E36080, retaddr);
      }
LABEL_66:
      if ( v21 == v12 )
        goto LABEL_97;
      if ( v21 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v47 = KeGetCurrentPrcb();
        v48 = *(_DWORD *)(v19 + 184) & 0xF;
        if ( v48 )
        {
          if ( v48 == 7 )
          {
            v49 = 1;
          }
          else
          {
            v49 = 3;
            if ( v48 == 5 )
              v49 = 0;
          }
          v50 = (volatile __int64 *)(&MiState + 2 * v49 + 2278);
        }
        else
        {
          v49 = 2;
          v50 = (volatile __int64 *)(v19 + 176);
        }
        v51 = &v47->SelfmapLockHandle[0].LockQueue.Next + 2 * v49 + v49;
        *((_QWORD *)v51 + 1) = v50;
        *v51 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        {
          v52 = _InterlockedExchange64(v50, (__int64)v51);
          if ( v52 )
            KxWaitForLockOwnerShip((volatile signed __int64)v51, v52, (__int64)v47);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented((__int64)v51, v50);
        }
      }
      else if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0
             || v21 < 0xFFFFF6FB7DBED000uLL
             || v21 > 0xFFFFF6FB7DBEDFFFuLL
             || (v64 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0 && v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          LODWORD(v81) = 0;
          v53 = (2 * ((__int64)(v21 + 0x90482413000LL) >> 3)) & 0x1F;
          v54 = 2 << v53;
          v55 = (volatile signed __int32 *)(&MiState
                                          + ((unsigned __int64)(2 * (unsigned int)((__int64)(v21 + 0x90482413000LL) >> 3)) >> 5)
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
          v45 = *(_QWORD *)v21;
          LODWORD(v81) = 0;
          if ( v21 >= 0xFFFFF6FB7DBED000uLL
            && v21 <= 0xFFFFF6FB7DBED7F8uLL
            && (v45 & 1) != 0
            && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
          {
            v65 = MiPteHasShadow();
            if ( v65 )
            {
              v66 = v65[2].KernelWaitTime;
              if ( v66 )
              {
                v67 = *(_QWORD *)(v66 + 8 * ((v21 >> 3) & 0x1FF));
                if ( (v67 & 0x20) != 0 )
                  v45 |= 0x20uLL;
                v68 = v45;
                v45 |= 0x42uLL;
                if ( (v67 & 0x42) == 0 )
                  v45 = v68;
              }
            }
          }
          while ( (v45 & 1) != 0 )
          {
            if ( (v45 & 0x1000000000000000LL) != 0 )
            {
              if ( ((v45 >> 60) & 2) != 0 )
              {
                do
                {
                  KeYieldProcessorEx(&v81);
                  v45 = *(_QWORD *)v21;
                }
                while ( (*(_QWORD *)v21 & 0x1000000000000000LL) != 0 );
              }
              else
              {
                if ( (MiFlags & 0x8000000) != 0 )
                  _mm_lfence();
                v77 = _InterlockedCompareExchange64((volatile signed __int64 *)v21, v45 | 0x2000000000000000LL, v45);
                if ( v45 == v77 )
                  v45 |= 0x2000000000000000uLL;
                else
                  v45 = v77;
              }
            }
            else
            {
              if ( (MiFlags & 0x8000000) != 0 )
                _mm_lfence();
              v46 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)v21,
                      v45 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                      v45);
              if ( v45 == v46 )
                break;
              v45 = v46;
            }
          }
          v19 = v84;
        }
        i = v83;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v64 + 4 * ((v21 >> 3) & 0x1FF)));
      }
      if ( v12 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0
          || v12 < 0xFFFFF6FB7DBED000uLL
          || v12 > 0xFFFFF6FB7DBEDFFFuLL
          || (v72 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
        {
          if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0 && v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBEDFFFuLL )
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
      v70 = *(_DWORD *)(v19 + 184) & 0xF;
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
      v12 = v21;
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
