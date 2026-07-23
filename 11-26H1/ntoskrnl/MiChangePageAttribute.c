/*
 * XREFs of MiChangePageAttribute @ 0x1402BA420
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MiCopyTradePageMetaData @ 0x140292E3C (MiCopyTradePageMetaData.c)
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293340 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402A13B0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiFreeSlabEntry @ 0x1402A6E7C (MiFreeSlabEntry.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiSetPfnOwnedAndActive @ 0x14033D0DC (MiSetPfnOwnedAndActive.c)
 *     MiCopySinglePage @ 0x14033D2C8 (MiCopySinglePage.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiAssignNonPagedPoolPte @ 0x1403679D0 (MiAssignNonPagedPoolPte.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiCopyDataPageToImagePage @ 0x14036E218 (MiCopyDataPageToImagePage.c)
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiConvertContiguousPages @ 0x140464F84 (MiConvertContiguousPages.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiResolveAwePageConflict @ 0x1407076B4 (MiResolveAwePageConflict.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeInvalidateAllCaches @ 0x140251640 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiMirrorInSingleProcessorMode @ 0x1402A2284 (MiMirrorInSingleProcessorMode.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 DemandZeroPte; // rax
  int v9; // ecx
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbp
  __int64 CurrentIrql; // r15
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // r14d
  __int64 v16; // r12
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned int v19; // ebx
  __int64 v20; // r13
  _DWORD *v21; // rsi
  unsigned __int8 v22; // bl
  int v23; // r8d
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r8
  __int64 CFlushSize; // rdx
  __int64 v28; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  signed __int32 v31; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+18h]
  unsigned int v39; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a2;
  LOBYTE(v4) = MiMirrorInSingleProcessorMode();
  v6 = v5 | 1;
  if ( !v4 )
    v6 = v5;
  v39 = v6;
  v7 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  DemandZeroPte = *(_QWORD *)(a1 + 40);
  if ( (v6 & 8) != 0 )
  {
    DemandZeroPte = *(_QWORD *)(a1 + 16);
    if ( (DemandZeroPte & 0x3E0) != 0
      || (v9 = (*(_DWORD *)(a1 + 32) >> 22) & 3, v9 != (_DWORD)v2)
      && (LOBYTE(DemandZeroPte) = 1 << v9,
          ((unsigned __int8)((1 << v9) | (1 << v2)) & (unsigned __int8)byte_140E2D918) != 0) )
    {
      DemandZeroPte = *(_QWORD *)(a1 + 16);
      if ( (DemandZeroPte & 0x3E0) == 0 )
      {
        v28 = *(_QWORD *)(a1 + 16);
        if ( v28 )
          DemandZeroPte = v28 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4);
        *(_QWORD *)(a1 + 16) = DemandZeroPte;
      }
    }
  }
  LOBYTE(v2) = 17;
  v10 = (*(_DWORD *)(a1 + 32) >> 22) & 3;
  v11 = a1 + 48 * v7;
  v34 = a1;
  v35 = v11;
  v12 = a1;
  v33 = v2;
  v32 = v10;
  while ( v12 < v11 )
  {
    CurrentIrql = v33;
    v14 = (volatile signed __int32 *)(v12 + 24);
    v15 = 0;
    v38 = 0;
    while ( (unsigned __int64)(v14 - 6) < v11 )
    {
      if ( (v6 & 1) == 0 )
      {
        if ( v15 )
        {
          if ( _interlockedbittestandset64(v14, 0x3FuLL) )
            break;
        }
        else if ( (v6 & 0x10) != 0 )
        {
          v39 = 0;
          while ( _interlockedbittestandset64(v14, 0x3FuLL) )
          {
            do
            {
              KeYieldProcessorEx(&v39);
              DemandZeroPte = *(_QWORD *)v14;
            }
            while ( *(__int64 *)v14 < 0 );
          }
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
            LOBYTE(DemandZeroPte) = KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
          v39 = 0;
          while ( _interlockedbittestandset64(v14, 0x3FuLL) )
          {
            do
            {
              KeYieldProcessorEx(&v39);
              DemandZeroPte = *(_QWORD *)v14;
            }
            while ( *(__int64 *)v14 < 0 );
          }
        }
      }
      if ( dword_140E2EBC4 )
      {
        LOBYTE(DemandZeroPte) = MiAbortCombineScan(v14 - 6);
        v6 = v6 & 0xFFFFFFF9 | 2;
      }
      ++v15;
      v14 += 12;
      if ( (unsigned __int8)CurrentIrql < 2u && (v15 & 0x3F) == 0 )
      {
        LODWORD(DemandZeroPte) = KeShouldYieldProcessor();
        if ( (_DWORD)DemandZeroPte )
          break;
      }
    }
    v16 = v32;
    v12 = v34;
    v33 = CurrentIrql;
    v39 = v6;
    if ( v32 == 3 )
      goto LABEL_26;
    if ( (v6 & 4) == 0 )
    {
      if ( (v6 & 2) != 0
        || (DemandZeroPte = (*(_QWORD *)(a1 + 24) >> 59) & 7LL, ((*(_QWORD *)(a1 + 24) >> 59) & 7) == 0)
        || (_InterlockedOr(v30, 0), v17 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)DemandZeroPte) & 7, v17 <= 2)
        && ((DemandZeroPte & 1) != 0 || v17 < 2) )
      {
        LOBYTE(DemandZeroPte) = MiFlushEntireTbDueToAttributeChange();
      }
    }
    if ( v16 != 1 || v15 < dword_140E2D8B4 )
    {
LABEL_26:
      v18 = 0;
    }
    else
    {
      ++dword_140E2D8AC;
      LOBYTE(DemandZeroPte) = KeInvalidateAllCaches();
      v18 = 1;
      v38 = 1;
    }
    v19 = 0;
    if ( v15 )
    {
      v20 = v32;
      v21 = (_DWORD *)(v12 + 32);
      do
      {
        *(_DWORD *)(v12 + 32) = *v21 ^ (*v21 ^ (a2 << 22)) & 0xC00000;
        if ( !v18 && v20 == 1 )
        {
          ++dword_140E2D8B0;
          v23 = 2;
          if ( a2 != 2 )
            v23 = 0;
          v24 = MiMapPageInHyperSpaceWorker((__int64)(v12 + 0x220000000000LL) / 48, 0LL, v23 | 0xC0000000);
          if ( (unsigned int)KiLargestCacheSize > 0x1000 )
          {
            v25 = v24 + 4096;
            CFlushSize = KeGetCurrentPrcb()->CFlushSize;
            _RAX = (char *)(v24 & ~(CFlushSize - 1));
            if ( _bittest64(&KeFeatureBits, 0x23u) )
            {
              do
              {
                __asm { clflushopt byte ptr [rax] }
                _RAX += CFlushSize;
              }
              while ( (unsigned __int64)_RAX < v25 );
              _InterlockedOr(&v31, 0);
            }
            else
            {
              do
              {
                _mm_clflush(_RAX);
                _RAX += CFlushSize;
              }
              while ( (unsigned __int64)_RAX < v25 );
            }
          }
          else
          {
            KeInvalidateAllCaches();
          }
          *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
          *(_QWORD *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( a2 == 3 )
            MiFlushEntireTbDueToAttributeChange();
          v18 = v38;
        }
        DemandZeroPte = *(_QWORD *)(v12 + 24) & 0xC7FFFFFFFFFFFFFFuLL;
        *(_QWORD *)(v12 + 24) = DemandZeroPte;
        if ( (v6 & 1) == 0 )
        {
          LOBYTE(DemandZeroPte) = v15 - 1;
          if ( v19 < v15 - 1 )
          {
            LOBYTE(DemandZeroPte) = -1;
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        v12 += 48LL;
        ++v19;
        v21 += 12;
      }
      while ( v19 < v15 );
      v6 = v39;
      v11 = v35;
      v34 = v12;
    }
    if ( (v6 & 1) == 0 )
    {
      LOBYTE(DemandZeroPte) = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v12 - 24), 0x7FFFFFFFFFFFFFFFuLL);
      v22 = v33;
      if ( (unsigned __int8)v33 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
        LOBYTE(DemandZeroPte) = v22;
        __writecr8(v22);
      }
    }
  }
  return DemandZeroPte;
}
