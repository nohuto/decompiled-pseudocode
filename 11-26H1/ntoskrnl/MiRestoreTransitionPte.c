/*
 * XREFs of MiRestoreTransitionPte @ 0x1402DAFE0
 * Callers:
 *     MiRelinkStandbyPage @ 0x140298DC0 (MiRelinkStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402A973C (MiReuseStandbyPage.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyPage @ 0x1402DBCA0 (MiUnlinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiWriteCompletePfn @ 0x1404008A0 (MiWriteCompletePfn.c)
 *     MiHandleInPageError @ 0x1404AF888 (MiHandleInPageError.c)
 *     MiPurgeFileOnlyPfn @ 0x1404C54C4 (MiPurgeFileOnlyPfn.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiCheckForControlAreaDeletion @ 0x1402EDB60 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSubsection @ 0x1402EE21C (MiRemoveUnusedSubsection.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x140369B90 (MI_IS_RESET_PTE.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2, __int64 PageTablePfnBuddyRaw)
{
  unsigned __int64 v3; // r14
  char v5; // al
  __int64 v6; // rbx
  unsigned __int64 v7; // r10
  int PagePrivilege; // eax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 *v14; // r15
  __int64 TopLevelPfn; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  _KPROCESS *Process; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 MmInternal; // rcx
  __int64 HasShadow; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // r15
  __int64 v41; // rdi
  __int64 inserted; // r12
  _DWORD *v43; // r14
  BOOL v44; // r13d
  int v45; // eax
  __int64 v46; // r14
  unsigned int v47; // edi
  __int64 v48; // rcx
  unsigned int v49; // r8d
  unsigned int v50; // r8d
  __int64 v51; // r8
  unsigned __int64 v52; // rcx
  int v53; // ebx
  _DWORD *v54; // rcx
  __int64 v55; // [rsp+30h] [rbp-68h] BYREF
  __int128 v56; // [rsp+38h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v58; // [rsp+A0h] [rbp+8h]
  __int64 v60; // [rsp+B0h] [rbp+18h]

  v3 = 0LL;
  v5 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  v6 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 53) & 1LL;
  v7 = 0xFFFFDE0000000000uLL;
  v56 = 0LL;
  if ( v5 == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
    if ( PagePrivilege )
    {
      v9 = 256LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v9 = 16LL;
      if ( (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48, 0LL, &v56, v9) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48, 0LL, 0LL);
    }
    MiSetPfnIdentity(BugCheckParameter2, 0LL);
    v7 = 0xFFFFDE0000000000uLL;
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 )
  {
    v11 = (__int64 *)(BugCheckParameter2 + 16);
    v13 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 8) == 0 )
    {
      v14 = (__int64 *)(BugCheckParameter2 + 16);
      if ( (unsigned int)MI_IS_RESET_PTE(*v11) )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(BugCheckParameter2 + 16), 0);
        v14 = (__int64 *)(BugCheckParameter2 + 16);
      }
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v16, v17);
      if ( v18 != BugCheckParameter2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v11 = v14;
      }
      _InterlockedDecrement64((volatile signed __int64 *)(PageTablePfnBuddyRaw + 648));
      v7 = 0xFFFFDE0000000000uLL;
      if ( (HIBYTE(*(_DWORD *)(PageTablePfnBuddyRaw + 1208)) & 0x30) == 0x20 )
        _InterlockedIncrement64((volatile signed __int64 *)(PageTablePfnBuddyRaw + 1232));
    }
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x220000000000LL)
                                                                  / 48 )
      v3 = v13;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v10 <= 0 || (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000LL) != 0 )
    {
      v12 = *(_QWORD *)(BugCheckParameter2 + 16);
      v11 = (__int64 *)(BugCheckParameter2 + 16);
      if ( (v12 & 0x400) == 0 && (v12 & 8) == 0 && (unsigned int)MI_IS_RESET_PTE(*v11) )
        *(_QWORD *)(BugCheckParameter2 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(BugCheckParameter2 + 16), 0);
    }
    else
    {
      v11 = (__int64 *)(BugCheckParameter2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) = v10 | 0x8000000000000000uLL;
    }
  }
  v19 = 0xFFFFF6FB7DBED000uLL;
  v20 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v55 = *v11;
  v21 = v55;
  v60 = v20;
  if ( (unsigned __int64)&v55 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v55 <= 0xFFFFF6FB7DBED7F8uLL
    && (v55 & 1) != 0
    && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0)
    && (MiFlags & 0x1800000) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->AddressPolicy != 1 )
    {
      if ( Process )
      {
        PageTablePfnBuddyRaw = Process[2].KernelWaitTime;
        if ( PageTablePfnBuddyRaw )
        {
          v23 = *(_QWORD *)(PageTablePfnBuddyRaw + 8 * (((unsigned __int64)&v55 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v21 = v55 | 0x20;
          v24 = v21;
          v21 |= 0x42uLL;
          if ( (v23 & 0x42) == 0 )
            v21 = v24;
        }
      }
    }
  }
  v25 = -65537LL;
  v26 = -5LL;
  if ( (v21 & 0x400) != 0 )
    v25 = -5LL;
  v55 = v21 & v25;
  if ( v3 )
  {
    v27 = 0LL;
  }
  else
  {
    v28 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL;
    v27 = v7 + 48 * v28;
    v29 = MiMapPageInHyperSpaceWorker(v28, 0LL, 0x80000000);
    v19 = 0xFFFFF6FB7DBED000uLL;
    v3 = v29 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FFLL);
  }
  v30 = *(_QWORD *)v3;
  MmInternal = 0xFFFFF6FB7DBED000uLL;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL )
  {
    MmInternal = 0xFFFFF6FB7DBED7F8uLL;
    if ( v3 <= 0xFFFFF6FB7DBED7F8uLL && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v26, PageTablePfnBuddyRaw);
      if ( HasShadow )
        MmInternal = *(_QWORD *)(HasShadow + 1288);
    }
  }
  v33 = v55;
  v34 = 0LL;
  v58 = v55;
  if ( v3 >= v19 && v3 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( MiPteHasShadow(MmInternal, v55, 0LL) )
    {
      v34 = 1LL;
      if ( BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
        goto LABEL_58;
      v35 = v58;
      v36 = (v58 & 1) == 0;
    }
    else
    {
      MmInternal = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(MmInternal + 1532) & 0x1000) == 0 )
        goto LABEL_58;
      v35 = v58;
      v36 = (v58 & 1) == 0;
    }
    if ( !v36 )
      v33 = v35 | 0x8000000000000000uLL;
  }
LABEL_58:
  *(_QWORD *)v3 = v33;
  if ( (_DWORD)v34 )
  {
    v37 = MiPteHasShadow(MmInternal, v33, v34);
    if ( v37 )
    {
      MmInternal = *(_QWORD *)(v37 + 1288);
      if ( MmInternal )
      {
        v34 = MmInternal + 8 * ((v3 >> 3) & 0x1FF);
        MmInternal = v33 & 0x7FFFFFFFFFFFFFFFLL;
        v38 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v33 & 1) != 0 )
          v38 = v33 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)v34 = v38;
      }
    }
  }
  if ( v27 )
  {
    MmInternal = (unsigned __int64)KeGetCurrentPrcb()->MmInternal;
    *(_QWORD *)MmInternal = 0LL;
    *(_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    MmInternal = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (MmInternal & 0x400) != 0 )
    {
      if ( qword_140E2D8C0 && (MmInternal & 0x10) == 0 )
        MmInternal &= qword_140E2D8C8;
      v39 = (MmInternal >> 12) & 0x3FFFFFFFFFFLL;
      if ( v39 )
        v40 = (_DWORD *)(qword_140E37D10 - 8 + 8 * v39);
      else
        v40 = 0LL;
      v41 = *(_QWORD *)v40;
      inserted = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)v40 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v41 + 64) )
        v43 = 0LL;
      else
        v43 = v40;
      v44 = *(_QWORD *)(v41 + 64) != 0LL;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v41 + 72));
      if ( v43 )
      {
        v36 = v43[26]-- == 1;
        if ( v36 && !*((_QWORD *)v43 + 10) )
        {
          v45 = v40[8];
          if ( (v45 & 0x10000) == 0 && (v45 & 0x80000) != 0 )
          {
            MiRemoveUnusedSubsection(v43);
            inserted = MiInsertUnusedSubsectionInternal(v43, 0LL);
          }
        }
      }
      --*(_QWORD *)(v41 + 32);
      MiCheckForControlAreaDeletion(v41);
      if ( inserted )
      {
        MmInternal = *(_DWORD *)(v41 + 60) & 0x3FF;
        v46 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * MmInternal);
      }
      else
      {
        v46 = 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *(_DWORD *)(v41 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v41 + 72), retaddr);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(v46, v44, inserted);
      v20 = v60;
    }
  }
  if ( v27 )
  {
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v47 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(MmInternal, v33, v34) )
        {
          HvlNotifyLongSpinWait(v47);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v27 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v27 + 34) & 7) != 6 )
      MiBadShareCount(v27);
    v48 = (*(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v27 + 24) = v48 ^ (v48 ^ *(_QWORD *)(v27 + 24)) & 0xC000000000000000uLL;
    if ( !v48 )
      MiPfnShareCountIsZero(v27, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !(_DWORD)v6 )
  {
    MiSetPfnIdentity(BugCheckParameter2, 0LL);
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(BugCheckParameter2 + 32) &= 0xF8FFFFFF;
    }
    else
    {
      v49 = *(_DWORD *)(BugCheckParameter2 + 32);
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) != 0 )
      {
        v50 = 5;
      }
      else if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0
             && (BugCheckParameter2 < 0xFFFFDE0000000000uLL
              || BugCheckParameter2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
              || (unsigned int)MiIsDecayPfn((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48)
              || (v49 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(BugCheckParameter2) == 9) )
      {
        v50 = 5;
      }
      else
      {
        v50 = HIBYTE(v49) & 7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * v50 + 7584));
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(BugCheckParameter2 + 32) &= 0xF8FFFFFF;
      if ( *(_QWORD *)(v20 + 18168) )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v20 + 18240));
        v51 = *(_QWORD *)(v20 + 18168);
        if ( !v51 )
          goto LABEL_132;
        v52 = *(_QWORD *)(v51 + 32) & 0xFFFLL;
        if ( (*(_QWORD *)(v51 + 32) & 0xFFF) != 0 )
        {
          **(_QWORD **)(v51 + 32) = (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48;
          *(_QWORD *)(v51 + 32) += 8LL;
          v52 = *(_QWORD *)(v51 + 32) & 0xFFFLL;
        }
        if ( v52 < 0xC00 )
        {
          if ( v52 )
          {
            v53 = 0;
          }
          else
          {
            v53 = 1;
            *(_QWORD *)(v51 + 24) = MEMORY[0xFFFFF78000000320];
          }
        }
        else
        {
LABEL_132:
          v53 = *(_DWORD *)(v20 + 18156);
        }
        v54 = (_DWORD *)(v20 + 18240);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v54 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v54, retaddr);
      }
      else
      {
        v53 = *(_DWORD *)(v20 + 18156);
      }
      if ( v53 )
        KiInsertQueueDpc(v20 + 18176, 0);
    }
  }
}
