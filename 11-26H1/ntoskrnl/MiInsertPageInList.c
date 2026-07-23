/*
 * XREFs of MiInsertPageInList @ 0x1402BFA00
 * Callers:
 *     MiReplaceTransitionPageFinish @ 0x140293E78 (MiReplaceTransitionPageFinish.c)
 *     MiOutSwapWorkingSetPte @ 0x140295DB0 (MiOutSwapWorkingSetPte.c)
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x14031E3A4 (MiPfnReferenceCountIsZero.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiCreateDecayPfn @ 0x14045A320 (MiCreateDecayPfn.c)
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 *     MiFreeModifiedReservations @ 0x1404D5AC4 (MiFreeModifiedReservations.c)
 *     MiMoveModifiedPagesToCompressList @ 0x140512FEC (MiMoveModifiedPagesToCompressList.c)
 *     MiRelinkTransitionSlabPages @ 0x140530D80 (MiRelinkTransitionSlabPages.c)
 *     MiQuarantineBadPage @ 0x1406F6228 (MiQuarantineBadPage.c)
 *     MiReturnBadPagesToBadList @ 0x1406F6894 (MiReturnBadPagesToBadList.c)
 *     MiFileOnlyPfnMarkedBad @ 0x1406FE828 (MiFileOnlyPfnMarkedBad.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiInsertSecondaryListStandbyPage @ 0x1402ABC50 (MiInsertSecondaryListStandbyPage.c)
 *     MiSetPfnNodeFlinkHigh @ 0x1402AC310 (MiSetPfnNodeFlinkHigh.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageCandidateValue @ 0x1402BF650 (MiUpdateLargePageCandidateValue.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiInsertPageLockModNoWriteList @ 0x1404D2A44 (MiInsertPageLockModNoWriteList.c)
 *     MiGetEnclavePageList @ 0x1404D7A44 (MiGetEnclavePageList.c)
 *     MiInsertPageLockBadList @ 0x1404DF030 (MiInsertPageLockBadList.c)
 *     MiInsertPageLockModifiedList @ 0x140520FD8 (MiInsertPageLockModifiedList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // r11
  int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // r8
  ULONG_PTR v22; // r9
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  ULONG_PTR v26; // r10
  ULONG_PTR v27; // r10
  __int64 v28; // rdx
  ULONG_PTR *v29; // r10
  __int64 v30; // r8
  bool v31; // zf
  int v32; // r15d
  char v33; // cl
  volatile signed __int32 *v34; // rcx
  __int128 *v35; // r8
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // r15d
  unsigned int v39; // r15d
  unsigned __int8 v40; // dl
  __int64 v41; // r15
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // r11
  __int64 v44; // r10
  __int64 v45; // r9
  __int64 v46; // rax
  signed __int64 v47; // rdx
  unsigned __int64 v48; // r8
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  signed __int64 v51; // rdx
  unsigned __int64 v52; // r8
  signed __int64 v53; // rax
  signed __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r9
  __int64 v57; // r8
  int CanPfnOriginalPteBeLost; // eax
  __int64 v59; // r8
  signed __int32 v60[8]; // [rsp+0h] [rbp-100h] BYREF
  int v61; // [rsp+30h] [rbp-D0h]
  unsigned int v62; // [rsp+34h] [rbp-CCh]
  unsigned int v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+58h] [rbp-A8h]
  __int128 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+70h] [rbp-90h]
  __int128 v70; // [rsp+80h] [rbp-80h] BYREF
  __int128 v71; // [rsp+90h] [rbp-70h]
  __int128 v72; // [rsp+A0h] [rbp-60h]
  __int128 v73; // [rsp+B0h] [rbp-50h]
  __int128 v74; // [rsp+C0h] [rbp-40h]
  __int128 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 retaddr; // [rsp+138h] [rbp+38h]

  v62 = a2;
  v76 = 0LL;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 40);
  v68 = 0LL;
  v69 = 0LL;
  v5 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((v4 >> 43) & 0x3FF));
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  *(_QWORD *)&v69 = v5;
  *(_QWORD *)((char *)&v68 + 4) = a2 | 0x900000000LL;
  v6 = 9;
  v61 = 9;
  v7 = (__int64)(a1 + 0x220000000000LL) / 48;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
  {
    v8 = v68 | 1;
    LODWORD(v68) = v68 | 1;
  }
  else if ( v7 < qword_140E34930 || v7 >= qword_140E34930 + 2048 )
  {
    if ( byte_140E3BEA6 && *(_BYTE *)(qword_140E3D240 + 2 * (v7 >> 9)) )
      v6 = *(unsigned __int8 *)(qword_140E3D240 + 2 * (v7 >> 9)) - 1;
    v8 = v68;
    v61 = v6;
    DWORD2(v68) = v6;
  }
  else
  {
    v8 = v68 | 4;
    LODWORD(v68) = v68 | 4;
  }
  if ( (v3 & 8) != 0 && (v8 & 1) != 0 && byte_140E2D899 )
  {
    v9 = *(_DWORD *)(a1 + 32);
    v3 = v3 & 0xFFFFFFF3 | 4;
    v62 = v3;
    if ( (v9 & 0x80000) != 0 )
    {
      CanPfnOriginalPteBeLost = MiCanPfnOriginalPteBeLost(a1);
      v6 = v61;
      LOWORD(v3) = v62;
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
  LODWORD(v64) = v11;
  if ( (v8 & 1) == 0 )
  {
    _InterlockedOr(v60, 0);
    *(_QWORD *)(a1 + 24) = ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59) ^ (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59)) & 0xC7FFFFFFFFFFFFFFuLL;
  }
  *((_QWORD *)&v69 + 1) = EnclavePageList;
  v12 = EnclavePageList;
  v13 = a1;
  if ( v11 == 2 )
  {
    if ( !(unsigned int)MiInsertPageLockStandbyList(&v68, a1) )
      return;
    goto LABEL_19;
  }
  if ( v11 == 3 )
    goto LABEL_85;
  if ( v11 != 4 )
  {
    MiInsertPageLockBadList(&v68, a1);
    goto LABEL_19;
  }
  if ( !(unsigned int)MiInsertPageLockModNoWriteList(&v68, a1) )
  {
    LODWORD(v64) = 3;
    v13 = a1;
LABEL_85:
    MiInsertPageLockModifiedList(&v68, v13);
LABEL_19:
    v12 = *((_QWORD *)&v69 + 1);
    v15 = DWORD2(v68);
    EnclavePageList = *((_QWORD *)&v69 + 1);
    v5 = v69;
    v8 = v68;
    v61 = DWORD2(v68);
    goto LABEL_20;
  }
  v15 = v61;
LABEL_20:
  v16 = 0LL;
  v17 = (v8 >> 2) & 1;
  if ( v17 )
  {
    v66 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v63 = 0;
      if ( _interlockedbittestandset(&dword_140E34950, 0x1Fu) )
        v63 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140E34950, 0xFFu);
      v18 = (unsigned int)dword_140E34950;
      v19 = (unsigned int)dword_140E34950;
      LODWORD(v19) = dword_140E34950 & 0xBFFFFFFF;
      if ( (dword_140E34950 & 0xBFFFFFFF) != 0x80000000 )
      {
        v20 = v63;
        do
        {
          if ( (v18 & 0x40000000) == 0 )
            _InterlockedOr(&dword_140E34950, 0x40000000u);
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19, v18, v14) )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
          v18 = (unsigned int)dword_140E34950;
        }
        while ( (dword_140E34950 & 0xBFFFFFFF) != 0x80000000 );
        LOBYTE(v8) = v68;
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140E34950, 0xFFu);
    }
    v21 = *(unsigned int *)(v66 + 16480);
    *(_DWORD *)(a1 + 32) = ((unsigned __int8)v21 << 22) ^ (*(_DWORD *)(a1 + 32) ^ ((unsigned __int8)v21 << 22)) & 0xFF3FFFFF;
    v22 = v7 - qword_140E34930;
    v23 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 8 * v21;
    v24 = *(_QWORD *)(v23 + 16448);
    v25 = v24 >> 1;
    v26 = v7 - qword_140E34930;
    *(_QWORD *)(a1 + 8) = (unsigned int)v24 & 0xFFFFFFFE | 0xFFFFFFFE00000000uLL;
    v27 = v26 << 33;
    if ( (v24 & 0xFFFFFFFE) == 0xFFFFFFFE )
    {
      v24 = v27 | v24 & 0x1FFFFFFFFLL;
    }
    else
    {
      LODWORD(v25) = (v24 >> 1) & 0x7FFFFFFF;
      *(_QWORD *)(48 * (v25 + qword_140E34930) - 0x21FFFFFFFFF8LL) = v27 | *(_QWORD *)(48 * (v25 + qword_140E34930)
                                                                                     - 0x21FFFFFFFFF8LL) & 0x1FFFFFFFFLL;
    }
    *(_QWORD *)(v23 + 16448) = (2 * v22) ^ (v24 ^ (2 * v22)) & 0xFFFFFFFF00000001uLL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      v16 = 0LL;
      dword_140E34950 = 0;
    }
    else
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140E34950, retaddr);
      v16 = 0LL;
    }
    v15 = v61;
  }
  else if ( v15 == 9 || (v62 & 0x800) != 0 || (_DWORD)v64 != 2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(EnclavePageList + 16));
  }
  if ( (_BYTE)v70 )
  {
    v28 = *((_QWORD *)&v70 + 1);
    v29 = (ULONG_PTR *)v71;
    v16 = *((_QWORD *)&v72 + 1);
    v30 = v72;
  }
  else
  {
    v28 = *(_QWORD *)(EnclavePageList + 8);
    v29 = (ULONG_PTR *)(48 * v28 - 0x220000000000LL);
    v30 = 0x3FFFFFFFFFLL;
  }
  if ( v28 == 0x3FFFFFFFFFLL )
    *(_QWORD *)EnclavePageList = v7;
  else
    *v29 = v7 ^ (*v29 ^ v7) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)a1 = v30 ^ (v30 ^ *(_QWORD *)a1) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)(a1 + 24) = v28 ^ (v28 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFF0000000000uLL;
  if ( v30 == 0x3FFFFFFFFFLL )
    *(_QWORD *)(EnclavePageList + 8) = v7;
  else
    *(_QWORD *)(v16 + 24) = v7 ^ (v7 ^ *(_QWORD *)(v16 + 24)) & 0xFFFFFF0000000000uLL;
  v31 = (_DWORD)v64 == 2;
  *(_DWORD *)(a1 + 32) = ((_DWORD)v64 << 16) ^ (*(_DWORD *)(a1 + 32) ^ ((_DWORD)v64 << 16)) & 0xFFF8FFFF;
  if ( !v31 )
    goto LABEL_48;
  v35 = &v70;
  if ( !(_BYTE)v70 )
    v35 = 0LL;
  v65 = (unsigned __int64)v35;
  if ( v15 >= 9 )
  {
    if ( v17 )
    {
LABEL_48:
      v32 = v61;
      goto LABEL_49;
    }
    v64 = 48 * v7;
    v36 = (*(_QWORD *)(48 * v7 - 0x220000000000LL + 40) >> 43) & 0x3FFLL;
    v66 = 48 * v7 - 0x220000000000LL;
    v67 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v36);
    v37 = MiPageToNode(v7);
    v38 = *(_DWORD *)(48 * v7 - 0x220000000000LL + 32);
    v63 = v37;
    if ( (*(_QWORD *)(v66 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_123;
    if ( (*(_DWORD *)(v66 + 32) & 0x8000000) == 0 )
    {
LABEL_92:
      v39 = HIBYTE(v38) & 7;
      goto LABEL_93;
    }
    if ( v66 < 0xFFFFDE0000000000uLL
      || v66 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
      || (unsigned int)MiIsDecayPfn(v64 / 48) )
    {
LABEL_123:
      v39 = 5;
    }
    else
    {
      if ( (v38 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v57) != 9 )
        goto LABEL_92;
      v39 = 5;
    }
LABEL_93:
    if ( qword_140E2D868 )
      v40 = *((_BYTE *)MiSearchChannelTable(v7) + 12);
    else
      v40 = 0;
    v41 = 88 * (v39 + 8 * (v40 + 80LL * v63)) + *(_QWORD *)(v67 + 16) + 4160LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v41 + 16));
    if ( v65 )
    {
      v43 = *(_QWORD *)(v65 + 56);
      v44 = *(_QWORD *)(v65 + 88);
      v45 = *(_QWORD *)(v65 + 64);
      v46 = *(_QWORD *)(a1 + 24);
      v67 = *(_QWORD *)(v65 + 80);
      v42 = v67;
      *(_QWORD *)(a1 + 24) = (v43 << 40) ^ (v46 ^ (v43 << 40)) & 0xF80000FFFFFFFFFFuLL;
      *(_DWORD *)(a1 + 36) = (v43 >> 19) ^ ((v43 >> 19) ^ *(_DWORD *)(a1 + 36)) & 0xFFE00000;
      *(_QWORD *)a1 = *(_QWORD *)a1 & 0xFFFFFFFFFFLL | (v42 << 40);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 36) & 0x1FFFFF | ((unsigned int)(v42 >> 24) << 21);
      v47 = *(_QWORD *)(a1 + 40);
      v48 = (v42 & 0xFFFFFFF800000000uLL) << 20;
      v65 = 0xF07FFFFFFFFFFFFFuLL;
      v49 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 40),
              v48 ^ (v48 ^ v47) & 0xF07FFFFFFFFFFFFFuLL,
              v47);
      if ( v47 != v49 )
      {
        do
        {
          v50 = v49;
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v48 ^ v65 & (v48 ^ v49), v49);
        }
        while ( v50 != v49 );
      }
      if ( v43 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)v41 = v7;
      }
      else
      {
        *(_QWORD *)v45 = *(_QWORD *)v45 & 0xFFFFFFFFFFLL | (v7 << 40);
        *(_DWORD *)(v45 + 36) = *(_DWORD *)(v45 + 36) & 0x1FFFFF | ((unsigned int)(v7 >> 24) << 21);
        v51 = *(_QWORD *)(v45 + 40);
        v52 = (v7 & 0xFFFFFFF800000000uLL) << 20;
        v53 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v45 + 40),
                v52 ^ (v52 ^ v51) & 0xF07FFFFFFFFFFFFFuLL,
                v51);
        if ( v51 != v53 )
        {
          do
          {
            v54 = v53;
            v53 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v45 + 40),
                    v52 ^ (v52 ^ v53) & 0xF07FFFFFFFFFFFFFuLL,
                    v53);
          }
          while ( v54 != v53 );
        }
      }
      if ( v67 != 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)(v44 + 24) = (v7 << 40) ^ ((v7 << 40) ^ *(_QWORD *)(v44 + 24)) & 0xF80000FFFFFFFFFFuLL;
        *(_DWORD *)(v44 + 36) = (v7 >> 19) ^ ((v7 >> 19) ^ *(_DWORD *)(v44 + 36)) & 0xFFE00000;
        goto LABEL_48;
      }
    }
    else
    {
      v55 = *(_QWORD *)(v41 + 8);
      v65 = v55;
      if ( v55 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)v41 = v7;
      }
      else
      {
        *(_QWORD *)(48 * v55 - 0x220000000000LL) = *(_QWORD *)(48 * v55 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v7 << 40);
        *(_DWORD *)(48 * v55 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v55 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v7 >> 24) << 21);
        MiSetPfnNodeFlinkHigh(48 * v55 - 0x220000000000LL, v7 >> 35);
      }
      *(_QWORD *)a1 |= 0xFFFFFF0000000000uLL;
      *(_DWORD *)(a1 + 36) |= 0xFFE00000;
      MiSetPfnNodeFlinkHigh(a1, 7LL);
      v56 = v65 >> 19;
      *(_QWORD *)(a1 + 24) = (v65 << 40) ^ (*(_QWORD *)(a1 + 24) ^ (v65 << 40)) & 0xF80000FFFFFFFFFFuLL;
      *(_DWORD *)(a1 + 36) = v56 ^ (*(_DWORD *)(a1 + 36) ^ v56) & 0xFFE00000;
    }
    *(_QWORD *)(v41 + 8) = v7;
    goto LABEL_48;
  }
  v33 = v62;
  v32 = v61;
  if ( (v62 & 0x800) != 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x8000000u;
    goto LABEL_50;
  }
  MiInsertSecondaryListStandbyPage(a1, v61, v35);
LABEL_49:
  v33 = v62;
LABEL_50:
  if ( (_BYTE)v70 )
  {
    if ( BYTE8(v71) )
      _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v73 )
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v72 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BYTE8(v74) )
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v76 )
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)&v75 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    v34 = (volatile signed __int32 *)(EnclavePageList + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v34, 0xBFFFFFFF);
      _InterlockedDecrement(v34);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v34, retaddr);
    }
  }
  else if ( v33 >= 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(EnclavePageList + 32));
  }
  if ( *(int *)(v12 + 28) <= 4 && v32 == 9 && (v8 & 5) == 0 )
    MiUpdateLargePageCandidateValue(v5, v7, 3, 3, 0LL);
  if ( (v8 & 2) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 1008), 0, 0);
  if ( (v8 & 8) != 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E39B60);
    ++stru_140E2ED08.SchedulerApc.SpareLong0;
    if ( !HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) )
      HIBYTE(stru_140E2ED08.AffinityPrimaryGroup) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E39B60);
  }
  if ( (v8 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(v5 + 820) )
      KeSetEvent((PRKEVENT)(v5 + 824), 0, 0);
    if ( *(_DWORD *)(v5 + 848) != 20 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1080)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(v5 + 1072), 20LL, v59);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v5 + 1080));
    }
    KeSetEvent((PRKEVENT)(v5 + 864), 0, 0);
  }
  if ( (v8 & 0x20) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 920), 0, 0);
}
