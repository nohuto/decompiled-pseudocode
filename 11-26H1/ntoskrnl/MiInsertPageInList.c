/*
 * XREFs of MiInsertPageInList @ 0x1402DDC40
 * Callers:
 *     MiReplaceTransitionPageFinish @ 0x140294918 (MiReplaceTransitionPageFinish.c)
 *     MiOutSwapWorkingSetPte @ 0x140296850 (MiOutSwapWorkingSetPte.c)
 *     MiRelinkStandbyPage @ 0x140299860 (MiRelinkStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A9CD0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x14031C374 (MiPfnReferenceCountIsZero.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiCreateDecayPfn @ 0x140461360 (MiCreateDecayPfn.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 *     MiFreeModifiedReservations @ 0x1404DC3E4 (MiFreeModifiedReservations.c)
 *     MiMoveModifiedPagesToCompressList @ 0x14051957C (MiMoveModifiedPagesToCompressList.c)
 *     MiRelinkTransitionSlabPages @ 0x14052E860 (MiRelinkTransitionSlabPages.c)
 *     MiQuarantineBadPage @ 0x1406F15B8 (MiQuarantineBadPage.c)
 *     MiReturnBadPagesToBadList @ 0x1406F1C24 (MiReturnBadPagesToBadList.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406F9B58 (MiFileOnlyPfnMarkedBad.c)
 *     MiMoveBadPagePartition @ 0x1407093D4 (MiMoveBadPagePartition.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402C9B5C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402C9E90 (MiInsertSecondaryListStandbyPage.c)
 *     MiSetPfnNodeFlinkHigh @ 0x1402CA550 (MiSetPfnNodeFlinkHigh.c)
 *     MiSearchChannelTable @ 0x1402CBEE8 (MiSearchChannelTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402DD890 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiInsertPageLockModNoWriteList @ 0x1404D9364 (MiInsertPageLockModNoWriteList.c)
 *     MiGetEnclavePageList @ 0x1404DE364 (MiGetEnclavePageList.c)
 *     MiInsertPageLockBadList @ 0x1404E5A90 (MiInsertPageLockBadList.c)
 *     MiInsertPageLockModifiedList @ 0x14051E9C8 (MiInsertPageLockModifiedList.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR a1, unsigned int a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  ULONG_PTR v7; // r14
  unsigned int v8; // esi
  int v9; // r10d
  __int64 EnclavePageList; // r12
  int v11; // r8d
  __int64 v12; // r13
  ULONG_PTR v13; // rdx
  int v14; // r9d
  __int64 v15; // r11
  int v16; // r15d
  LONG v17; // edx
  unsigned int v18; // esi
  __int64 v19; // r8
  ULONG_PTR v20; // r9
  __int64 v21; // r11
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  ULONG_PTR v24; // r10
  ULONG_PTR v25; // r10
  __int64 v26; // rdx
  ULONG_PTR *v27; // r10
  __int64 v28; // r8
  bool v29; // zf
  int v30; // r15d
  char v31; // cl
  volatile signed __int32 *v32; // rcx
  __int128 *v33; // r8
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // r15d
  unsigned int v37; // r15d
  unsigned __int8 v38; // dl
  __int64 v39; // r15
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r11
  __int64 v42; // r10
  __int64 v43; // r9
  __int64 v44; // rax
  signed __int64 v45; // rdx
  unsigned __int64 v46; // r8
  signed __int64 v47; // rax
  signed __int64 v48; // rdx
  signed __int64 v49; // rdx
  unsigned __int64 v50; // r8
  signed __int64 v51; // rax
  signed __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r9
  __int64 v55; // r8
  int CanPfnOriginalPteBeLost; // eax
  __int64 v57; // r8
  signed __int32 v58[8]; // [rsp+0h] [rbp-100h] BYREF
  int v59; // [rsp+30h] [rbp-D0h]
  unsigned int v60; // [rsp+34h] [rbp-CCh]
  unsigned int v61; // [rsp+38h] [rbp-C8h]
  __int64 v62; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v65; // [rsp+58h] [rbp-A8h]
  __int128 v66; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+70h] [rbp-90h]
  __int128 v68; // [rsp+80h] [rbp-80h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h]
  __int128 v70; // [rsp+A0h] [rbp-60h]
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  __int64 retaddr; // [rsp+138h] [rbp+38h]

  v60 = a2;
  v74 = 0LL;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  v66 = 0LL;
  v67 = 0LL;
  v5 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((v4 >> 43) & 0x3FF));
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  *(_QWORD *)&v67 = v5;
  *(_QWORD *)((char *)&v66 + 4) = a2 | 0x900000000LL;
  v6 = 9;
  v59 = 9;
  v7 = (__int64)(a1 + 0x220000000000LL) / 48;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
  {
    v8 = v66 | 1;
    LODWORD(v66) = v66 | 1;
  }
  else if ( v7 < qword_140E347B0 || v7 >= qword_140E347B0 + 2048 )
  {
    if ( byte_140E3BD26 && *(_BYTE *)(qword_140E3D0C0 + 2 * (v7 >> 9)) )
      v6 = *(unsigned __int8 *)(qword_140E3D0C0 + 2 * (v7 >> 9)) - 1;
    v8 = v66;
    v59 = v6;
    DWORD2(v66) = v6;
  }
  else
  {
    v8 = v66 | 4;
    LODWORD(v66) = v66 | 4;
  }
  if ( (v3 & 8) != 0 && (v8 & 1) != 0 && byte_140E2D719 )
  {
    v9 = *(_DWORD *)(a1 + 32);
    v3 = v3 & 0xFFFFFFF3 | 4;
    v60 = v3;
    if ( (v9 & 0x80000) != 0 )
    {
      CanPfnOriginalPteBeLost = MiCanPfnOriginalPteBeLost(a1);
      v6 = v59;
      LOWORD(v3) = v60;
      if ( CanPfnOriginalPteBeLost )
      {
        if ( (v9 & 0x100000) == 0 && (*(_DWORD *)(a1 + 16) & 8) != 0 )
          *(_QWORD *)(a1 + 16) &= ~8uLL;
      }
    }
    *(_DWORD *)(a1 + 32) = v9 & 0xFFEFFFFF;
  }
  if ( (v3 & 4) != 0 )
  {
    EnclavePageList = v5 + 3520;
  }
  else if ( (v3 & 8) != 0 )
  {
    EnclavePageList = v5 + 23232;
  }
  else if ( (v3 & 0x10) != 0 )
  {
    EnclavePageList = v5 + 23360;
  }
  else if ( (v3 & 0x100) != 0 )
  {
    EnclavePageList = MiGetEnclavePageList(v5, v7);
  }
  else if ( (v3 & 0x800) != 0 )
  {
    EnclavePageList = MiGetSlabAllocatorRepurposedStandbyList(a1, v6, 3);
    if ( EnclavePageList == -1 )
    {
      MiRestoreTransitionPte(a1);
      MiInsertPageInFreeOrZeroedList(v7);
      return;
    }
  }
  else
  {
    EnclavePageList = v5 + 7424;
  }
  if ( (v8 & 1) != 0 && (*(_DWORD *)(a1 + 32) & 0x40000000) != 0 )
  {
    MiPurgeFileOnlyPfn(a1, 0LL);
    return;
  }
  v11 = *(_DWORD *)(EnclavePageList + 28);
  LODWORD(v62) = v11;
  if ( (v8 & 1) == 0 )
  {
    _InterlockedOr(v58, 0);
    *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
  }
  *((_QWORD *)&v67 + 1) = EnclavePageList;
  v12 = EnclavePageList;
  v13 = a1;
  if ( v11 == 2 )
  {
    if ( !(unsigned int)MiInsertPageLockStandbyList(&v66, a1) )
      return;
    goto LABEL_19;
  }
  if ( v11 == 3 )
    goto LABEL_85;
  if ( v11 != 4 )
  {
    MiInsertPageLockBadList(&v66, a1);
    goto LABEL_19;
  }
  if ( !(unsigned int)MiInsertPageLockModNoWriteList(&v66, a1) )
  {
    LODWORD(v62) = 3;
    v13 = a1;
LABEL_85:
    MiInsertPageLockModifiedList(&v66, v13);
LABEL_19:
    v12 = *((_QWORD *)&v67 + 1);
    v14 = DWORD2(v66);
    EnclavePageList = *((_QWORD *)&v67 + 1);
    v5 = v67;
    v8 = v66;
    v59 = DWORD2(v66);
    goto LABEL_20;
  }
  v14 = v59;
LABEL_20:
  v15 = 0LL;
  v16 = (v8 >> 2) & 1;
  if ( v16 )
  {
    v64 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v61 = 0;
      if ( _interlockedbittestandset(&dword_140E347D0, 0x1Fu) )
        v61 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E347D0, 0xFFu);
      v17 = dword_140E347D0;
      if ( (dword_140E347D0 & 0xBFFFFFFF) != 0x80000000 )
      {
        v18 = v61;
        do
        {
          if ( (v17 & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E347D0, 0x40000000u);
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
          v17 = dword_140E347D0;
        }
        while ( (dword_140E347D0 & 0xBFFFFFFF) != 0x80000000 );
        LOBYTE(v8) = v66;
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E347D0, 0xFFu);
    }
    v19 = *(unsigned int *)(v64 + 16480);
    *(_DWORD *)(a1 + 32) = ((unsigned __int8)v19 << 22) ^ (*(_DWORD *)(a1 + 32) ^ ((unsigned __int8)v19 << 22)) & 0xFF3FFFFF;
    v20 = v7 - qword_140E347B0;
    v21 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 8 * v19;
    v22 = *(_QWORD *)(v21 + 16448);
    v23 = v22 >> 1;
    v24 = v7 - qword_140E347B0;
    *(_QWORD *)(a1 + 8) = (unsigned int)v22 & 0xFFFFFFFE | 0xFFFFFFFE00000000uLL;
    v25 = v24 << 33;
    if ( (v22 & 0xFFFFFFFE) == 0xFFFFFFFE )
    {
      v22 = v25 | v22 & 0x1FFFFFFFFLL;
    }
    else
    {
      LODWORD(v23) = (v22 >> 1) & 0x7FFFFFFF;
      *(_QWORD *)(48 * (v23 + qword_140E347B0) - 0x21FFFFFFFFF8LL) = v25 | *(_QWORD *)(48 * (v23 + qword_140E347B0)
                                                                                     - 0x21FFFFFFFFF8LL) & 0x1FFFFFFFFLL;
    }
    *(_QWORD *)(v21 + 16448) = (2 * v20) ^ (v22 ^ (2 * v20)) & 0xFFFFFFFF00000001uLL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v15 = 0LL;
      dword_140E347D0 = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E347D0, retaddr);
      v15 = 0LL;
    }
    v14 = v59;
  }
  else if ( v14 == 9 || (v60 & 0x800) != 0 || (_DWORD)v62 != 2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(EnclavePageList + 16));
  }
  if ( (_BYTE)v68 )
  {
    v26 = *((_QWORD *)&v68 + 1);
    v27 = (ULONG_PTR *)v69;
    v15 = *((_QWORD *)&v70 + 1);
    v28 = v70;
  }
  else
  {
    v26 = *(_QWORD *)(EnclavePageList + 8);
    v27 = (ULONG_PTR *)(48 * v26 - 0x220000000000LL);
    v28 = 0x3FFFFFFFFFLL;
  }
  if ( v26 == 0x3FFFFFFFFFLL )
    *(_QWORD *)EnclavePageList = v7;
  else
    *v27 = v7 ^ (*v27 ^ v7) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)a1 = v28 ^ (v28 ^ *(_QWORD *)a1) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a1 + 24) = v26 ^ (v26 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFF0000000000uLL;
  if ( v28 == 0x3FFFFFFFFFLL )
    *(_QWORD *)(EnclavePageList + 8) = v7;
  else
    *(_QWORD *)(v15 + 24) = v7 ^ (v7 ^ *(_QWORD *)(v15 + 24)) & 0xFFFFFF0000000000uLL;
  v29 = (_DWORD)v62 == 2;
  *(_DWORD *)(a1 + 32) = ((_DWORD)v62 << 16) ^ (*(_DWORD *)(a1 + 32) ^ ((_DWORD)v62 << 16)) & 0xFFF8FFFF;
  if ( !v29 )
    goto LABEL_48;
  v33 = &v68;
  if ( !(_BYTE)v68 )
    v33 = 0LL;
  v63 = (unsigned __int64)v33;
  if ( v14 >= 9 )
  {
    if ( v16 )
    {
LABEL_48:
      v30 = v59;
      goto LABEL_49;
    }
    v62 = 48 * v7;
    v34 = (*(_QWORD *)(48 * v7 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
    v64 = 48 * v7 - 0x220000000000LL;
    v65 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * v34);
    v35 = MiPageToNode(v7);
    v36 = *(_DWORD *)(48 * v7 - 0x220000000000LL + 32);
    v61 = v35;
    if ( (*(_QWORD *)(v64 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_123;
    if ( (*(_DWORD *)(v64 + 32) & 0x8000000) == 0 )
    {
LABEL_92:
      v37 = HIBYTE(v36) & 7;
      goto LABEL_93;
    }
    if ( v64 < 0xFFFFDE0000000000uLL
      || v64 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
      || (unsigned int)MiIsDecayPfn(v62 / 48) )
    {
LABEL_123:
      v37 = 5;
    }
    else
    {
      if ( (v36 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v55) != 9 )
        goto LABEL_92;
      v37 = 5;
    }
LABEL_93:
    if ( qword_140E2D6E8 )
      v38 = *((_BYTE *)MiSearchChannelTable(v7) + 12);
    else
      v38 = 0;
    v39 = 88 * (v37 + 8 * (v38 + 80LL * v61)) + *(_QWORD *)(v65 + 16) + 4160LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v39 + 16));
    if ( v63 )
    {
      v41 = *(_QWORD *)(v63 + 56);
      v42 = *(_QWORD *)(v63 + 88);
      v43 = *(_QWORD *)(v63 + 64);
      v44 = *(_QWORD *)(a1 + 24);
      v65 = *(_QWORD *)(v63 + 80);
      v40 = v65;
      *(_QWORD *)(a1 + 24) = (v41 << 40) ^ (v44 ^ (v41 << 40)) & 0xF80000FFFFFFFFFFuLL;
      *(_DWORD *)(a1 + 36) = (v41 >> 19) ^ ((v41 >> 19) ^ *(_DWORD *)(a1 + 36)) & 0xFFE00000;
      *(_QWORD *)a1 = *(_QWORD *)a1 & 0xFFFFFFFFFFLL | (v40 << 40);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0x1FFFFF | ((unsigned int)(v40 >> 24) << 21);
      v45 = *(_QWORD *)(a1 + 40);
      v46 = (v40 & 0xFFFFFFF800000000uLL) << 20;
      v63 = 0xF07FFFFFFFFFFFFFuLL;
      v47 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 40),
              v46 ^ (v46 ^ v45) & 0xF07FFFFFFFFFFFFFuLL,
              v45);
      if ( v45 != v47 )
      {
        do
        {
          v48 = v47;
          v47 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v46 ^ v63 & (v46 ^ v47), v47);
        }
        while ( v48 != v47 );
      }
      if ( v41 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)v39 = v7;
      }
      else
      {
        *(_QWORD *)v43 = *(_QWORD *)v43 & 0xFFFFFFFFFFLL | (v7 << 40);
        *(_DWORD *)(v43 + 36) = *(_DWORD *)(v43 + 36) & 0x1FFFFF | ((unsigned int)(v7 >> 24) << 21);
        v49 = *(_QWORD *)(v43 + 40);
        v50 = (v7 & 0xFFFFFFF800000000uLL) << 20;
        v51 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v43 + 40),
                v50 ^ (v50 ^ v49) & 0xF07FFFFFFFFFFFFFuLL,
                v49);
        if ( v49 != v51 )
        {
          do
          {
            v52 = v51;
            v51 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v43 + 40),
                    v50 ^ (v50 ^ v51) & 0xF07FFFFFFFFFFFFFuLL,
                    v51);
          }
          while ( v52 != v51 );
        }
      }
      if ( v65 != 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)(v42 + 24) = (v7 << 40) ^ ((v7 << 40) ^ *(_QWORD *)(v42 + 24)) & 0xF80000FFFFFFFFFFuLL;
        *(_DWORD *)(v42 + 36) = (v7 >> 19) ^ ((v7 >> 19) ^ *(_DWORD *)(v42 + 36)) & 0xFFE00000;
        goto LABEL_48;
      }
    }
    else
    {
      v53 = *(_QWORD *)(v39 + 8);
      v63 = v53;
      if ( v53 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)v39 = v7;
      }
      else
      {
        *(_QWORD *)(48 * v53 - 0x220000000000LL) = *(_QWORD *)(48 * v53 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v7 << 40);
        *(_DWORD *)(48 * v53 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v53 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v7 >> 24) << 21);
        MiSetPfnNodeFlinkHigh(48 * v53 - 0x220000000000LL, v7 >> 35);
      }
      *(_QWORD *)a1 |= 0xFFFFFF0000000000uLL;
      *(_DWORD *)(a1 + 36) |= 0xFFE00000;
      MiSetPfnNodeFlinkHigh(a1, 7LL);
      v54 = v63 >> 19;
      *(_QWORD *)(a1 + 24) = (v63 << 40) ^ (*(_QWORD *)(a1 + 24) ^ (v63 << 40)) & 0xF80000FFFFFFFFFFuLL;
      *(_DWORD *)(a1 + 36) = v54 ^ (*(_DWORD *)(a1 + 36) ^ v54) & 0xFFE00000;
    }
    *(_QWORD *)(v39 + 8) = v7;
    goto LABEL_48;
  }
  v31 = v60;
  v30 = v59;
  if ( (v60 & 0x800) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x8000000u;
    goto LABEL_50;
  }
  MiInsertSecondaryListStandbyPage(a1, v59, v33);
LABEL_49:
  v31 = v60;
LABEL_50:
  if ( (_BYTE)v68 )
  {
    if ( BYTE8(v69) )
      _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v71 )
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v70 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BYTE8(v72) )
      _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v74 )
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v73 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    v32 = (volatile signed __int32 *)(EnclavePageList + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      _InterlockedAnd(v32, 0xBFFFFFFF);
      _InterlockedDecrement(v32);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v32, retaddr);
    }
  }
  else if ( v31 >= 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(EnclavePageList + 32));
  }
  if ( *(int *)(v12 + 28) <= 4 && v30 == 9 && (v8 & 5) == 0 )
    MiUpdateLargePageCandidateValue(v5, v7, 3, 3, 0LL);
  if ( (v8 & 2) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 1008), 0, 0);
  if ( (v8 & 8) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E399E0);
    ++stru_140E2EB88.SchedulerApc.SpareLong0;
    if ( !HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) )
      HIBYTE(stru_140E2EB88.AffinityPrimaryGroup) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E399E0);
  }
  if ( (v8 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(v5 + 820) )
      KeSetEvent((PRKEVENT)(v5 + 824), 0, 0);
    if ( *(_DWORD *)(v5 + 848) != 20 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1080)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(v5 + 1072), 20LL, v57);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1080));
    }
    KeSetEvent((PRKEVENT)(v5 + 864), 0, 0);
  }
  if ( (v8 & 0x20) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 920), 0, 0);
}
