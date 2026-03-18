/*
 * XREFs of MiPfnShareCountIsZero @ 0x1402DC770
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiReduceShareCount @ 0x1402DAC20 (MiReduceShareCount.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiFreeDeferredCrcPages @ 0x140307800 (MiFreeDeferredCrcPages.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MiUnlockPageTableCharges @ 0x140318F40 (MiUnlockPageTableCharges.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031B000 (MiRewriteTrimPteAsDemandZero.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreeUnmappedPageTables @ 0x1403631D0 (MiFreeUnmappedPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036B2E0 (MiCopyOnWriteUpdatePte.c)
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x1404840DC (MiDeleteTopLevelPage.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiRevertPrivateZeroFault @ 0x1404F4214 (MiRevertPrivateZeroFault.c)
 *     MiDecrementLargeSubsections @ 0x140505D08 (MiDecrementLargeSubsections.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiDecrementProtoShareCounts @ 0x1406F9544 (MiDecrementProtoShareCounts.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiTradeBootImagePage @ 0x140D00E4C (MiTradeBootImagePage.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D04294 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x1402CCD38 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x1402DAD50 (MiReleasePageFileInfo.c)
 *     MiMakeProtoTransition @ 0x1402DCAF0 (MiMakeProtoTransition.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     MiIsDecayPfn @ 0x1402F9850 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiPfnShareCountIsZero(unsigned __int64 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // [rsp+30h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 32);
  if ( *(__int64 *)(a1 + 40) < 0 )
    MiMakeProtoTransition(a1, 1LL);
  v5 = v2 ^ (unsigned __int16)(v2 ^ (v2 - 1));
  if ( (_WORD)v2 == 1 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v5 & 0x10000000) != 0 )
        v5 &= ~0x10000000u;
      *(_DWORD *)(a1 + 32) = v5;
      v20 = *(_QWORD *)(a1 + 16);
      if ( (v20 & 0x400) == 0 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        if ( (v20 & 8) == 0 )
        {
          v6 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v20 & 4) != 0 )
            v6 = *(_QWORD *)(a1 + 16);
        }
        if ( v6 )
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
            v6,
            1);
      }
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x220000000000LL) / 48, 2LL);
      return 4LL;
    }
    v8 = *(_QWORD *)(a1 + 16);
    v9 = a1 + 16;
    if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0)
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
            v15 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
            if ( (v15 & 0x20) != 0 )
              v8 |= 0x20uLL;
            v16 = v8;
            v8 |= 0x42uLL;
            if ( (v15 & 0x42) == 0 )
              v8 = v16;
          }
        }
      }
    }
    v10 = -65537LL;
    v11 = -5LL;
    if ( (v8 & 0x400) != 0 )
      v10 = -5LL;
    *(_QWORD *)v9 = v8 & v10;
    if ( (v5 & 0x100000) != 0 )
    {
      *(_DWORD *)(a1 + 32) = v5;
      v12 = 8LL;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = v5 & 0xFFF8FFFF | 0x20000;
      if ( a2 )
      {
        v11 = *(unsigned int *)(a1 + 32);
        if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0
          && ((*(_DWORD *)(a1 + 32) & 0x8000000) == 0
           || a1 >= 0xFFFFDE0000000000uLL
           && a1 < 48 * qword_140E2D7A0 - 0x21FFFFFFFFD0LL
           && !(unsigned int)MiIsDecayPfn((__int64)(a1 + 0x220000000000LL) / 48)
           && ((v11 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(a1) != 9)) )
        {
          v11 &= 0x7000000u;
          if ( (unsigned int)v11 < 0x5000000 )
          {
            MiInsertProtectedStandbyPage(a2, a1);
            return 4LL;
          }
        }
      }
      v12 = 4LL;
    }
    MiInsertPageInList(a1, v12, v11, v9);
    return 4LL;
  }
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v17 = v5 | 0x70000;
  }
  else if ( (v5 & 0x100000) != 0 )
  {
    v17 = v5 & 0xFFF8FFFF | 0x30000;
  }
  else
  {
    v19 = v5 & 0xFFF8FFFF | 0x30000;
    v17 = v5 & 0xFFF8FFFF | 0x20000;
    if ( ((v2 ^ (unsigned __int16)(v2 ^ (v2 - 1))) & 0x80000) != 0 )
      v17 = v19;
  }
  *(_DWORD *)(a1 + 32) = v17;
  v18 = *(_QWORD *)(a1 + 16);
  if ( (v18 & 0x400) == 0 && (v18 & 8) != 0 )
    *(_BYTE *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 803LL) = 1;
  return 3LL;
}
