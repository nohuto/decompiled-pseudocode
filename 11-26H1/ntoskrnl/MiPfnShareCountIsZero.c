/*
 * XREFs of MiPfnShareCountIsZero @ 0x1402BE530
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiReduceShareCount @ 0x1402BC9E0 (MiReduceShareCount.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiFreeDeferredCrcPages @ 0x1402E9880 (MiFreeDeferredCrcPages.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiTrimSystemImagePages @ 0x1402F1124 (MiTrimSystemImagePages.c)
 *     MiUnlockPageTableCharges @ 0x14031AF70 (MiUnlockPageTableCharges.c)
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031D030 (MiRewriteTrimPteAsDemandZero.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     MiDeleteTransitionPte @ 0x140340870 (MiDeleteTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403413D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreeUnmappedPageTables @ 0x140364F70 (MiFreeUnmappedPageTables.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiDeleteTopLevelPage @ 0x14047DA4C (MiDeleteTopLevelPage.c)
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiRevertPrivateZeroFault @ 0x1404ED7F4 (MiRevertPrivateZeroFault.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiDecrementProtoShareCounts @ 0x1406FE214 (MiDecrementProtoShareCounts.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 *     MiTradeBootImagePage @ 0x140D071EC (MiTradeBootImagePage.c)
 *     MiInsertRegistryPageInModifiedList @ 0x140D0A564 (MiInsertRegistryPageInModifiedList.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x1402AEAF8 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiMakeProtoTransition @ 0x1402BE8B0 (MiMakeProtoTransition.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
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
            *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)),
            v6,
            1LL);
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
           && a1 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
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
    *(_BYTE *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 803LL) = 1;
  return 3LL;
}
