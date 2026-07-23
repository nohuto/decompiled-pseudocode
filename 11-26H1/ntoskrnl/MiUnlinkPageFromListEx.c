/*
 * XREFs of MiUnlinkPageFromListEx @ 0x1402D92D0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140295DB0 (MiOutSwapWorkingSetPte.c)
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiCachedPageCandidate @ 0x1402A8F70 (MiCachedPageCandidate.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiReuseStandbyPage @ 0x1402A973C (MiReuseStandbyPage.c)
 *     MiUnlinkTransitionSlabPages @ 0x1402A9C34 (MiUnlinkTransitionSlabPages.c)
 *     MiRepurposeStandbySlabPage @ 0x1402AB348 (MiRepurposeStandbySlabPage.c)
 *     MiRepurposeDecayNode @ 0x1402ACAE0 (MiRepurposeDecayNode.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceTransitionPageInList @ 0x1402DE8B0 (MiReplaceTransitionPageInList.c)
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiGetRepurposedSlabStandbyPage @ 0x14036B420 (MiGetRepurposedSlabStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiPrepareDecayNodeForReuse @ 0x14045A694 (MiPrepareDecayNodeForReuse.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiPurgeSlabEntry @ 0x1404BB64C (MiPurgeSlabEntry.c)
 *     MiFreeModifiedReservations @ 0x1404D5AC4 (MiFreeModifiedReservations.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140512FEC (MiMoveModifiedPagesToCompressList.c)
 *     MiLockMirrorWritePages @ 0x140525140 (MiLockMirrorWritePages.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiWalkResetCommitPte @ 0x1406EA0B0 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x1406FE68C (MiEnableLargeSubsection.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 *     MiNoPagesLastChance @ 0x140708830 (MiNoPagesLastChance.c)
 * Callees:
 *     MiUnlockAllBatchPages @ 0x140298560 (MiUnlockAllBatchPages.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiUnlinkPageFromBadList @ 0x1402A9E2C (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiDecreaseAvailablePages @ 0x1402DAD50 (MiDecreaseAvailablePages.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlinkPageFromListEx(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // r10
  int v6; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *MmInternal; // r9
  ULONG_PTR v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r11
  int v13; // r10d
  __int64 SlabAllocatorRepurposedStandbyList; // r9
  ULONG_PTR v15; // r8
  int v16; // ebx
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  _DWORD *v24; // rcx
  signed __int32 v25; // eax
  __int64 v26; // rdx
  signed __int32 v27; // ett
  int v28; // r8d
  ULONG_PTR v29; // rbp
  int v30; // ebx
  __int64 v31; // r11
  int v32; // r10d
  __int64 v33; // r12
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // r15
  int v41; // r8d
  __int64 v42; // r13
  char *v43; // r9
  unsigned int v44; // ebp
  __int64 v45; // rbx
  unsigned int v46; // ebp
  unsigned __int8 v47; // dl
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // rcx
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // r8d
  __int64 *v63; // r9
  unsigned int j; // ecx
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  volatile signed __int64 *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // edx
  _DWORD *v73; // rcx
  __int64 result; // rax
  volatile signed __int32 *v75; // rcx
  __int64 v76; // rcx
  _QWORD *v77; // rcx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rax
  int i; // r10d
  int v81; // edx
  unsigned __int8 v82; // cl
  unsigned int v83; // eax
  volatile LONG *v84; // rcx
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v86; // [rsp+78h] [rbp+10h]

  if ( (a2 & 4) == 0
    && (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL))
                  + 4LL) & 0x20) != 0 )
  {
    KeBugCheckEx(0x1Au, 0x8889uLL, BugCheckParameter2, 0LL, 0LL);
  }
  v3 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( (_WORD)v3 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        2uLL,
        (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48,
        BugCheckParameter3,
        (unsigned __int16)*(_DWORD *)(BugCheckParameter2 + 32));
    return 0LL;
  }
  v4 = HIWORD(v3) & 7;
  if ( v4 == 5 )
  {
    MiUnlinkPageFromBadList((__int64 *)BugCheckParameter2, 0);
    return 0LL;
  }
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8LL * v4 + 7520) + 28LL);
  if ( v6 == 2 && (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFF0000000000uLL;
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    result = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 36) = 0;
    return result;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = CurrentPrcb->MmInternal;
  v9 = (unsigned int)MmInternal[986];
  if ( (_DWORD)v9 == 2 )
    KeBugCheckEx(0x1Au, 0x443uLL, (ULONG_PTR)CurrentPrcb, v9, 0LL);
  MmInternal[986] = v9 + 1;
  v10 = (__int64)&MmInternal[418 * v9 + 150];
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_OWORD *)(v10 + 32) = 0LL;
  *(_OWORD *)(v10 + 48) = 0LL;
  *(_OWORD *)(v10 + 64) = 0LL;
  *(_OWORD *)(v10 + 80) = 0LL;
  *(_OWORD *)(v10 + 96) = 0LL;
  *(_QWORD *)(v10 + 112) = 0LL;
  *(_WORD *)(v10 + 128) = 0;
  *(_QWORD *)(v10 + 120) = 0LL;
  *(_QWORD *)(v10 + 8) = v5;
  *(_DWORD *)(v10 + 40) = v6;
  if ( (a2 & 1) != 0 )
  {
    *(_DWORD *)v10 |= 0xAu;
  }
  else if ( (a2 & 2) != 0 )
  {
    *(_DWORD *)v10 |= 9u;
  }
  v11 = *(unsigned int *)(v10 + 60);
  if ( (_DWORD)v11 != 64 )
  {
    *(_QWORD *)(v10 + 8 * v11 + 136) = BugCheckParameter2;
    ++*(_DWORD *)(v10 + 60);
    ++*(_DWORD *)(v10 + 56);
  }
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
  SlabAllocatorRepurposedStandbyList = *(_QWORD *)(v12 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 7520);
  v15 = (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48;
  if ( v15 < qword_140E34930 || v15 >= qword_140E34930 + 2048 )
  {
    if ( byte_140E3BEA6 )
    {
      if ( *(_BYTE *)(qword_140E3D240 + 2 * (v15 >> 9)) )
        v16 = *(unsigned __int8 *)(qword_140E3D240 + 2 * (v15 >> 9)) - 1;
      else
        v16 = 9;
    }
    else
    {
      v16 = 9;
    }
  }
  else
  {
    *(_DWORD *)(v10 + 4) |= 2u;
    v16 = 9;
  }
  if ( (*(_DWORD *)v10 & 4) != 0 && *(_DWORD *)(v10 + 44) != v16 )
    goto LABEL_31;
  *(_DWORD *)(v10 + 4) |= 1u;
  if ( v13 != 2 )
  {
    if ( v13 != 3 )
      goto LABEL_27;
    v78 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v78 & 0x400) != 0 )
    {
      v20 = 88LL * (*(_BYTE *)(BugCheckParameter2 + 36) & 0xF) + 6016;
      goto LABEL_26;
    }
    if ( (v78 & 4) != 0 )
    {
      v20 = 88LL * ((unsigned __int16)v78 >> 12) + 4608;
      goto LABEL_26;
    }
    if ( (unsigned __int16)v78 >> 12 == *(_DWORD *)(v12 + 1300) )
    {
      if ( qword_140E2D8C0 && (v78 & 0x10) == 0 )
        v78 &= qword_140E2D8C8;
      v79 = HIDWORD(v78);
      if ( (unsigned int)v79 >= 2 && (unsigned int)v79 < 5 && (v79 & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)v79 == 3 )
        {
          SlabAllocatorRepurposedStandbyList = v12 + 4480;
          goto LABEL_27;
        }
        if ( (_DWORD)v79 == 2 )
        {
          v20 = 88LL * *(unsigned int *)(v12 + 1300) + 4608;
          goto LABEL_26;
        }
      }
    }
    SlabAllocatorRepurposedStandbyList = v12 + 4352;
    goto LABEL_27;
  }
  v17 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_198;
  if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) == 0 )
    goto LABEL_21;
  if ( BugCheckParameter2 < 0xFFFFDE0000000000uLL
    || BugCheckParameter2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
    || (unsigned int)MiIsDecayPfn((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48) )
  {
LABEL_198:
    v18 = 5;
    goto LABEL_22;
  }
  if ( (v17 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(BugCheckParameter2) == 9 )
  {
    v18 = 5;
    goto LABEL_22;
  }
LABEL_21:
  v18 = HIBYTE(v17) & 7;
LABEL_22:
  v19 = *(_DWORD *)(v10 + 4) | 4;
  *(_DWORD *)(v10 + 4) = v19;
  if ( (v19 & 2) != 0 )
  {
    *(_DWORD *)(v10 + 4) = v19 & 0xFFFFFFFA;
  }
  else if ( v16 == 9 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
  {
    *(_DWORD *)(v10 + 4) |= 8u;
    v20 = 88LL * v18 + 3648;
LABEL_26:
    SlabAllocatorRepurposedStandbyList = v12 + v20;
    goto LABEL_27;
  }
  SlabAllocatorRepurposedStandbyList = v12 + 88LL * v18 + 3648;
  if ( v16 < 9 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
    {
      SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(BugCheckParameter2, v16, 0);
      v83 = *(_DWORD *)(v10 + 4) | 0x10;
    }
    else
    {
      v83 = *(_DWORD *)(v10 + 4) & 0xFFFFFFFE;
    }
    *(_DWORD *)(v10 + 4) = v83;
    *(_DWORD *)(v10 + 4) = v83 & 0xFFFFFFFB;
  }
LABEL_27:
  v21 = *(_QWORD *)(v10 + 48);
  if ( !v21 )
  {
    *(_QWORD *)(v10 + 48) = SlabAllocatorRepurposedStandbyList;
    goto LABEL_29;
  }
  if ( v21 == SlabAllocatorRepurposedStandbyList )
  {
LABEL_29:
    v22 = *(_DWORD *)v10;
    if ( (*(_DWORD *)v10 & 4) == 0 )
    {
      *(_DWORD *)(v10 + 44) = v16;
      *(_DWORD *)v10 = v22 | 4;
    }
  }
LABEL_31:
  v23 = *(_DWORD *)v10;
  if ( (*(_DWORD *)v10 & 8) != 0 )
    goto LABEL_78;
  if ( (v23 & 0x200) != 0 )
    goto LABEL_200;
  v24 = (_DWORD *)(*(_QWORD *)(v10 + 48) + 32LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v24);
    v25 = *v24 & 0x7FFFFFFF;
    while ( 1 )
    {
      v26 = (unsigned int)(v25 + 1);
      v27 = v25;
      v25 = _InterlockedCompareExchange(v24, v26, v25);
      if ( v27 == v25 )
        break;
      if ( v25 < 0 )
      {
        LOBYTE(v26) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v24, v26, v15);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v24, 0xFFu);
  }
  *(_DWORD *)v10 |= 1u;
  v28 = 0;
  v86 = 0;
  v29 = (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48;
  while ( !v28 )
  {
    v30 = 0;
    v31 = *(_QWORD *)(v10 + 48);
    if ( v29 < qword_140E34930 || (v32 = 1, v29 >= qword_140E34930 + 2048) )
      v32 = 0;
    v33 = *(int *)(v10 + 44);
    if ( (int)v33 < 9 && *(_DWORD *)(v31 + 28) == 2 && (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0 )
      v30 = 1;
    v34 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFLL;
    v35 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFFLL;
    if ( v35 == 0x3FFFFFFFFFLL )
      v36 = v31 + 40;
    else
      v36 = 48 * v35 - 0x220000000000LL;
    v37 = *(unsigned int *)(v10 + 60);
    if ( (_DWORD)v37 == 64 )
      goto LABEL_207;
    if ( *(__int64 *)(v36 + 24) < 0 )
    {
      v38 = (_QWORD *)(v10 + 8 * (*(unsigned int *)(v10 + 60) + 17LL));
      while ( v38 != (_QWORD *)(v10 + 136) )
      {
        if ( *--v38 == v36 )
          goto LABEL_48;
      }
      goto LABEL_207;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      goto LABEL_207;
    *(_QWORD *)(v10 + 8 * v37 + 136) = v36;
    ++*(_DWORD *)(v10 + 60);
    ++*(_DWORD *)(v10 + 56);
LABEL_48:
    if ( v34 == 0x3FFFFFFFFFLL )
      v39 = v31 + 40;
    else
      v39 = 48 * v34 - 0x220000000000LL;
    if ( v34 != v35 )
    {
      v76 = *(unsigned int *)(v10 + 60);
      if ( (_DWORD)v76 == 64 )
        goto LABEL_207;
      if ( *(__int64 *)(v39 + 24) < 0 )
      {
        v77 = (_QWORD *)(v10 + 8 * (*(unsigned int *)(v10 + 60) + 17LL));
        while ( v77 != (_QWORD *)(v10 + 136) )
        {
          if ( *--v77 == v39 )
            goto LABEL_51;
        }
        goto LABEL_207;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        goto LABEL_207;
      *(_QWORD *)(v10 + 8 * v76 + 136) = v39;
      ++*(_DWORD *)(v10 + 60);
      ++*(_DWORD *)(v10 + 56);
    }
LABEL_51:
    if ( *(_DWORD *)(v31 + 28) != 2 || v32 || v30 )
      goto LABEL_78;
    v40 = 48 * v29 - 0x220000000000LL;
    v41 = dword_140E2D804;
    v42 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v40 + 40) >> 43) & 0x3FFLL));
    if ( dword_140E2D800 > (unsigned int)dword_140E2D804
      || (v43 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v29 < *(_QWORD *)v43)
      || dword_140E2D800 != dword_140E2D804 && v29 >= *((_QWORD *)v43 + 2) )
    {
      for ( i = 0; ; i = v81 + 1 )
      {
        while ( 1 )
        {
          if ( v41 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v29, 0LL, 0LL);
          v81 = (i + v41) >> 1;
          v43 = (char *)qword_140E2D860 + 16 * v81;
          if ( v29 >= *(_QWORD *)v43 )
            break;
          if ( !v81 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v29, (ULONG_PTR)v43, 0LL);
          v41 = v81 - 1;
        }
        if ( v81 == dword_140E2D804 || v29 < *((_QWORD *)v43 + 2) )
          break;
      }
      dword_140E2D800 = (i + v41) >> 1;
    }
    v44 = *(_DWORD *)(v40 + 32);
    v45 = *((unsigned int *)v43 + 2);
    if ( (*(_QWORD *)(v40 + 40) & 0x20000000000000LL) != 0 )
    {
LABEL_196:
      v46 = 5;
      goto LABEL_60;
    }
    if ( (*(_DWORD *)(v40 + 32) & 0x8000000) == 0 )
      goto LABEL_59;
    if ( v40 < 0xFFFFDE0000000000uLL
      || v40 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
      || (unsigned int)MiIsDecayPfn((__int64)(v40 + 0x220000000000LL) / 48) )
    {
      goto LABEL_196;
    }
    if ( (v44 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v40) == 9 )
      v46 = 5;
    else
LABEL_59:
      v46 = HIBYTE(v44) & 7;
LABEL_60:
    if ( qword_140E2D868 )
      v47 = *((_BYTE *)MiSearchChannelTable((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48) + 12);
    else
      v47 = 0;
    v48 = *(_QWORD *)(v42 + 16) + 56320 * v45;
    if ( (int)v33 < 9 )
    {
      if ( (_DWORD)v33 == 8 )
        v82 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)((__int64)(v40 + 0x220000000000LL) / 48) >> 9) + 1) & 0x7F;
      else
        v82 = 0;
      v49 = *(_QWORD *)(232 * v33 + v48 + 14824) + 88 * (v46 + 8LL * v82);
    }
    else
    {
      v49 = v48 + 88 * (v46 + 8LL * v47) + 4160;
    }
    v50 = (8LL * (*(_DWORD *)(BugCheckParameter2 + 36) & 0xFFE00000)) | (((*(_QWORD *)BugCheckParameter2 >> 20) | *(_QWORD *)(BugCheckParameter2 + 40) & 0xF80000000000000uLL) >> 20);
    if ( v50 == 0x3FFFFFFFFFLL )
      v51 = v49 + 40;
    else
      v51 = 48 * v50 - 0x220000000000LL;
    v52 = *(unsigned int *)(v10 + 60);
    if ( (_DWORD)v52 != 64 )
    {
      if ( *(__int64 *)(v51 + 24) >= 0 )
      {
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
        {
          *(_QWORD *)(v10 + 8 * v52 + 136) = v51;
          ++*(_DWORD *)(v10 + 60);
          ++*(_DWORD *)(v10 + 56);
LABEL_71:
          v54 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(BugCheckParameter2 + 36) & 0x1FFFFF) << 19);
          v55 = v54 == 0x3FFFFFFFFFLL ? v49 + 40 : 48 * v54 - 0x220000000000LL;
          v56 = *(unsigned int *)(v10 + 60);
          if ( (_DWORD)v56 != 64 )
          {
            if ( *(__int64 *)(v55 + 24) >= 0 )
            {
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) )
              {
                *(_QWORD *)(v10 + 8 * v56 + 136) = v55;
                ++*(_DWORD *)(v10 + 60);
                ++*(_DWORD *)(v10 + 56);
                goto LABEL_78;
              }
            }
            else
            {
              v57 = (_QWORD *)(v10 + 8 * (*(unsigned int *)(v10 + 60) + 17LL));
              while ( v57 != (_QWORD *)(v10 + 136) )
              {
                if ( *--v57 == v55 )
                  goto LABEL_78;
              }
            }
          }
        }
      }
      else
      {
        v53 = (_QWORD *)(v10 + 8 * (*(unsigned int *)(v10 + 60) + 17LL));
        while ( v53 != (_QWORD *)(v10 + 136) )
        {
          if ( *--v53 == v51 )
            goto LABEL_71;
        }
      }
    }
    v29 = (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48;
LABEL_207:
    MiUnlockAllBatchPages(v10, BugCheckParameter2);
    v28 = ++v86;
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v10 + 48) + 32LL));
  v23 = *(_DWORD *)v10 & 0xFFFFFFFE;
LABEL_200:
  v84 = (volatile LONG *)(*(_QWORD *)(v10 + 48) + 32LL);
  *(_DWORD *)v10 = v23 | 2;
  ExAcquireSpinLockExclusiveAtDpcLevel(v84);
LABEL_78:
  MiUnlinkSingleBatchPage(v10, BugCheckParameter2);
  v58 = *(_QWORD *)(v10 + 80);
  if ( v58 )
  {
    v59 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 7544LL);
    if ( v58 == 1 )
      _InterlockedDecrement64((volatile signed __int64 *)(v59 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v59 + 16), -v58);
    *(_QWORD *)(v10 + 80) = 0LL;
  }
  v60 = *(_QWORD *)(v10 + 104);
  if ( v60 )
  {
    v61 = *(_QWORD *)(v10 + 48);
    if ( v60 == 1 )
      _InterlockedDecrement64((volatile signed __int64 *)(v61 + 16));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v61 + 16), -v60);
    *(_QWORD *)(v10 + 104) = 0LL;
  }
  if ( (*(_DWORD *)v10 & 8) == 0 )
  {
    v75 = (volatile signed __int32 *)(*(_QWORD *)(v10 + 48) + 32LL);
    if ( (*(_DWORD *)v10 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v75, 0xBFFFFFFF);
        _InterlockedDecrement(v75);
        *(_DWORD *)v10 &= ~1u;
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v75, retaddr);
        *(_DWORD *)v10 &= ~1u;
      }
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v75);
      *(_DWORD *)v10 &= ~2u;
    }
  }
  if ( *(_DWORD *)(v10 + 56) )
  {
    v62 = *(_DWORD *)(v10 + 60);
    v63 = (__int64 *)(v10 + 136);
    for ( j = 0; j < v62; ++j )
    {
      v65 = *v63;
      if ( *v63 )
      {
        if ( v65 != BugCheckParameter2 )
        {
          *v63 = 0LL;
          v66 = --*(_DWORD *)(v10 + 56);
          _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !v66 )
            break;
        }
      }
      ++v63;
    }
    *(_QWORD *)(v10 + 136) = BugCheckParameter2;
    *(_DWORD *)(v10 + 60) = 1;
  }
  v67 = *(_QWORD *)(v10 + 64);
  v68 = *(volatile signed __int64 **)(v10 + 8);
  if ( v67 )
  {
    if ( v67 == 1 )
      _InterlockedDecrement64(v68 + 2088);
    else
      _InterlockedAdd64(v68 + 2088, -v67);
    *(_QWORD *)(v10 + 64) = 0LL;
  }
  v69 = *(_QWORD *)(v10 + 72);
  if ( v69 )
  {
    if ( v69 == 1 )
      _InterlockedDecrement64(v68 + 952);
    else
      _InterlockedAdd64(v68 + 952, -v69);
    *(_QWORD *)(v10 + 72) = 0LL;
  }
  v70 = *(_QWORD *)(v10 + 88);
  if ( v70 )
  {
    if ( v70 == 1 )
      _InterlockedDecrement64(v68 + 2932);
    else
      _InterlockedAdd64(v68 + 2932, -v70);
    *(_QWORD *)(v10 + 88) = 0LL;
  }
  v71 = *(_QWORD *)(v10 + 96);
  if ( v71 )
  {
    if ( !(unsigned int)MiDecreaseAvailablePages(v68, v71, -1LL, 0LL) )
      *(_DWORD *)v10 |= 0x400u;
    *(_QWORD *)(v10 + 96) = 0LL;
  }
  v72 = (*(_DWORD *)v10 >> 9) & 2;
  v73 = KeGetCurrentPrcb()->MmInternal;
  --v73[986];
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x10) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 32) &= ~0x10000000u;
    v72 |= 1u;
  }
  return v72;
}
