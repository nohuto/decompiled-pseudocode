/*
 * XREFs of MiRestoreTransitionPte @ 0x1402F8F60
 * Callers:
 *     MiRelinkStandbyPage @ 0x140299860 (MiRelinkStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402AA32C (MiReuseStandbyPage.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiUnlinkStandbyPage @ 0x1402F9C20 (MiUnlinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiHandleInPageError @ 0x1404B6438 (MiHandleInPageError.c)
 *     MiPurgeFileOnlyPfn @ 0x1404CBA94 (MiPurgeFileOnlyPfn.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140507310 (MiCreateFileOnlyImageFixupExtents.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiCheckForControlAreaDeletion @ 0x14030BAE0 (MiCheckForControlAreaDeletion.c)
 *     MiRemoveUnusedSubsection @ 0x14030C19C (MiRemoveUnusedSubsection.c)
 *     MI_IS_RESET_PTE @ 0x140367DF0 (MI_IS_RESET_PTE.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 *     MiInsertUnusedSubsectionInternal @ 0x14036E724 (MiInsertUnusedSubsectionInternal.c)
 *     MiGetTopLevelPfn @ 0x140404690 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140404850 (MiGetPageTablePfnBuddyRaw.c)
 *     KeSetPagePrivilege @ 0x1404B0F70 (KeSetPagePrivilege.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
  _KPROCESS *v31; // rcx
  __int64 HasShadow; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rcx
  _DWORD *v43; // r15
  __int64 v44; // rdi
  __int64 inserted; // r12
  _DWORD *v46; // r14
  BOOL v47; // r13d
  int v48; // eax
  __int64 v49; // r14
  unsigned int v50; // edi
  __int64 v51; // rcx
  unsigned int v52; // r8d
  unsigned int v53; // r8d
  __int64 v54; // r8
  unsigned __int64 v55; // rcx
  int v56; // ebx
  _DWORD *v57; // rcx
  __int64 v58; // [rsp+30h] [rbp-68h] BYREF
  __int128 v59; // [rsp+38h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  __int64 v61; // [rsp+A0h] [rbp+8h]
  __int64 v63; // [rsp+B0h] [rbp+18h]

  v3 = 0LL;
  v5 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  v6 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 53) & 1LL;
  v7 = 0xFFFFDE0000000000uLL;
  v59 = 0LL;
  if ( v5 == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
    if ( PagePrivilege )
    {
      v9 = 256LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v9 = 16LL;
      if ( (int)KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48, 0LL, &v59, v9) < 0 )
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
  v20 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  v58 = *v11;
  v21 = v58;
  v63 = v20;
  if ( (unsigned __int64)&v58 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v58 <= 0xFFFFF6FB7DBED7F8uLL
    && (v58 & 1) != 0
    && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0)
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
          v23 = *(_QWORD *)(PageTablePfnBuddyRaw + 8 * (((unsigned __int64)&v58 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v21 = v58 | 0x20;
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
  v58 = v21 & v25;
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
  v31 = (_KPROCESS *)0xFFFFF6FB7DBED000LL;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL )
  {
    v31 = (_KPROCESS *)0xFFFFF6FB7DBED7F8LL;
    if ( v3 <= 0xFFFFF6FB7DBED7F8uLL && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v26, PageTablePfnBuddyRaw);
      if ( HasShadow )
        v31 = *(_KPROCESS **)(HasShadow + 1288);
    }
  }
  v33 = v58;
  v34 = 0LL;
  v61 = v58;
  if ( v3 >= v19 && v3 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( MiPteHasShadow(v31, v58, 0LL) )
    {
      v34 = 1LL;
      if ( BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
        goto LABEL_58;
      v35 = v61;
      v36 = (v61 & 1) == 0;
    }
    else
    {
      v31 = KeGetCurrentThread()->ApcState.Process;
      if ( (v31[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0 )
        goto LABEL_58;
      v35 = v61;
      v36 = (v61 & 1) == 0;
    }
    if ( !v36 )
      v33 = v35 | 0x8000000000000000uLL;
  }
LABEL_58:
  *(_QWORD *)v3 = v33;
  if ( (_DWORD)v34 )
  {
    v37 = MiPteHasShadow(v31, v33, v34);
    if ( v37 )
    {
      v39 = *(_QWORD *)(v37 + 1288);
      if ( v39 )
      {
        v40 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v38 & 1) != 0 )
          v40 = v38 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v39 + 8 * ((v3 >> 3) & 0x1FF)) = v40;
      }
    }
  }
  if ( v27 )
  {
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    v41 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v41 & 0x400) != 0 )
    {
      if ( qword_140E2D740 && (v41 & 0x10) == 0 )
        v41 &= qword_140E2D748;
      v42 = (v41 >> 12) & 0x3FFFFFFFFFFLL;
      if ( v42 )
        v43 = (_DWORD *)(qword_140E37B90 - 8 + 8 * v42);
      else
        v43 = 0LL;
      v44 = *(_QWORD *)v43;
      inserted = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)v43 + 56LL) & 0x20) != 0 || !*(_QWORD *)(v44 + 64) )
        v46 = 0LL;
      else
        v46 = v43;
      v47 = *(_QWORD *)(v44 + 64) != 0LL;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v44 + 72));
      if ( v46 )
      {
        v36 = v46[26]-- == 1;
        if ( v36 && !*((_QWORD *)v46 + 10) )
        {
          v48 = v43[8];
          if ( (v48 & 0x10000) == 0 && (v48 & 0x80000) != 0 )
          {
            MiRemoveUnusedSubsection(v46);
            inserted = MiInsertUnusedSubsectionInternal(v46, 0LL);
          }
        }
      }
      --*(_QWORD *)(v44 + 32);
      MiCheckForControlAreaDeletion(v44);
      if ( inserted )
        v49 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(v44 + 60) & 0x3FF));
      else
        v49 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *(_DWORD *)(v44 + 72) = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v44 + 72), retaddr);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(v49, v47, inserted);
      v20 = v63;
    }
  }
  if ( v27 )
  {
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v50 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v50);
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
    v51 = (*(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v27 + 24) = v51 ^ (v51 ^ *(_QWORD *)(v27 + 24)) & 0xC000000000000000uLL;
    if ( !v51 )
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
      v52 = *(_DWORD *)(BugCheckParameter2 + 32);
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) != 0 )
      {
        v53 = 5;
      }
      else if ( (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0
             && (BugCheckParameter2 < 0xFFFFDE0000000000uLL
              || BugCheckParameter2 >= 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
              || (unsigned int)MiIsDecayPfn((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48)
              || (v52 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(BugCheckParameter2) == 9) )
      {
        v53 = 5;
      }
      else
      {
        v53 = HIBYTE(v52) & 7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * v53 + 7584));
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) == 0 )
        *(_DWORD *)(BugCheckParameter2 + 32) &= 0xF8FFFFFF;
      if ( *(_QWORD *)(v20 + 18168) )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v20 + 18240));
        v54 = *(_QWORD *)(v20 + 18168);
        if ( !v54 )
          goto LABEL_132;
        v55 = *(_QWORD *)(v54 + 32) & 0xFFFLL;
        if ( (*(_QWORD *)(v54 + 32) & 0xFFF) != 0 )
        {
          **(_QWORD **)(v54 + 32) = (__int64)(BugCheckParameter2 + 0x220000000000LL) / 48;
          *(_QWORD *)(v54 + 32) += 8LL;
          v55 = *(_QWORD *)(v54 + 32) & 0xFFFLL;
        }
        if ( v55 < 0xC00 )
        {
          if ( v55 )
          {
            v56 = 0;
          }
          else
          {
            v56 = 1;
            *(_QWORD *)(v54 + 24) = MEMORY[0xFFFFF78000000320];
          }
        }
        else
        {
LABEL_132:
          v56 = *(_DWORD *)(v20 + 18156);
        }
        v57 = (_DWORD *)(v20 + 18240);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v57 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v57, retaddr);
      }
      else
      {
        v56 = *(_DWORD *)(v20 + 18156);
      }
      if ( v56 )
        KiInsertQueueDpc(v20 + 18176, 0LL, 0LL, 0LL, 0);
    }
  }
}
