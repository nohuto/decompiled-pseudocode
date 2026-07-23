/*
 * XREFs of MiZeroPhysicalPage @ 0x1402BA8E0
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiZeroChainWorker @ 0x1402A02A0 (MiZeroChainWorker.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiPerformFinalZeroing @ 0x14050D60C (MiPerformFinalZeroing.c)
 *     MiDiscardPteTransitionPage @ 0x14052AE60 (MiDiscardPteTransitionPage.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     AccelFillMemory @ 0x1402A0F14 (AccelFillMemory.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

char __fastcall MiZeroPhysicalPage(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rdx
  int v11; // r10d
  ULONG_PTR v12; // rdx
  char *v13; // r9
  _QWORD *v14; // r14
  int v15; // edi
  unsigned __int64 Phase0Mapping; // rbx
  unsigned __int64 v17; // rdi
  char result; // al
  int i; // r11d
  int v20; // r8d
  __int64 v21; // [rsp+78h] [rbp+10h]
  unsigned __int8 v22; // [rsp+80h] [rbp+18h] BYREF
  int v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v4 = a4;
  v7 = 48 * a2 - 0x220000000000LL;
  v21 = v7;
  v8 = (*(_DWORD *)(v7 + 32) >> 22) & 3;
  v9 = v8;
  if ( (a3 & 1) == 0 )
  {
    v10 = (unsigned __int128)(48 * a2 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v11 = dword_140E2D804;
    v12 = ((unsigned __int64)v10 >> 63) + (v10 >> 3);
    if ( dword_140E2D800 > (unsigned int)dword_140E2D804
      || (v13 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v12 < *(_QWORD *)v13)
      || dword_140E2D800 != dword_140E2D804 && v12 >= *((_QWORD *)v13 + 2) )
    {
      for ( i = 0; ; i = v20 + 1 )
      {
        while ( 1 )
        {
          if ( v11 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v12, 0LL, 0LL);
          v20 = (i + v11) >> 1;
          v13 = (char *)qword_140E2D860 + 16 * v20;
          if ( v12 >= *(_QWORD *)v13 )
            break;
          if ( !v20 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v12, (ULONG_PTR)v13, 0LL);
          v11 = v20 - 1;
        }
        if ( v20 == dword_140E2D804 || v12 < *((_QWORD *)v13 + 2) )
          break;
      }
      dword_140E2D800 = (i + v11) >> 1;
    }
    v9 = *(_DWORD *)(qword_140E2D838
                   + 384LL * *((unsigned int *)v13 + 2)
                   + 4 * (v4 + 4LL * ((*(_DWORD *)(v7 + 32) >> 22) & 3))
                   + 120);
    if ( v9 != v8 )
      MiChangePageAttribute(v7, v9);
  }
  v22 = 17;
  v14 = 0LL;
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    v15 = 1;
    Phase0Mapping = MiMapPageInHyperSpaceWorker(a2, &v22, 0x80000000);
  }
  else
  {
    v15 = 0;
    Phase0Mapping = MxGetPhase0Mapping();
    v14 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v14 = MiMakeValidPte(v14, a2, 2684354564LL);
  }
  if ( !a1 )
    goto LABEL_10;
  if ( (int)AccelFillMemory(a1, Phase0Mapping, 4096, 0, 3LL) < 0 )
  {
    _InterlockedIncrement(&dword_140EF4DEC);
LABEL_10:
    KeZeroPages(Phase0Mapping, 4096LL);
  }
  if ( v15 )
  {
    v17 = v22;
    result = CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( (_BYTE)v17 != 17 )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
      __writecr8(v17);
    }
  }
  else
  {
    *v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    result = MiFlushSingleTbEntry(Phase0Mapping, 2LL);
  }
  if ( v9 != v8 && v9 != v23 )
    return MiChangePageAttribute(v21, v8);
  return result;
}
