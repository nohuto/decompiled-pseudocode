/*
 * XREFs of MiZeroPhysicalPage @ 0x1402D8B20
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287AA0 (MiGetPageChainSmallPageProcess.c)
 *     MiZeroChainWorker @ 0x1402A0D50 (MiZeroChainWorker.c)
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MiFreePageToSlabAllocator @ 0x140369964 (MiFreePageToSlabAllocator.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiZeroAndReleasePages @ 0x1403C3C14 (MiZeroAndReleasePages.c)
 *     MiPerformFinalZeroing @ 0x140513B9C (MiPerformFinalZeroing.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiInitializeCacheFlushing @ 0x140CFF38C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     AccelFillMemory @ 0x1402A19C4 (AccelFillMemory.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1407307E0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C80058 (MxGetPhase0Mapping.c)
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
    v11 = dword_140E2D684;
    v12 = ((unsigned __int64)v10 >> 63) + (v10 >> 3);
    if ( dword_140E2D680 > (unsigned int)dword_140E2D684
      || (v13 = (char *)qword_140E2D6E0 + 16 * dword_140E2D680, v12 < *(_QWORD *)v13)
      || dword_140E2D680 != dword_140E2D684 && v12 >= *((_QWORD *)v13 + 2) )
    {
      for ( i = 0; ; i = v20 + 1 )
      {
        while ( 1 )
        {
          if ( v11 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v12, 0LL, 0LL);
          v20 = (i + v11) >> 1;
          v13 = (char *)qword_140E2D6E0 + 16 * v20;
          if ( v12 >= *(_QWORD *)v13 )
            break;
          if ( !v20 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v12, (ULONG_PTR)v13, 0LL);
          v11 = v20 - 1;
        }
        if ( v20 == dword_140E2D684 || v12 < *((_QWORD *)v13 + 2) )
          break;
      }
      dword_140E2D680 = (i + v11) >> 1;
    }
    v9 = *(_DWORD *)(qword_140E2D6B8
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
    _InterlockedIncrement(&dword_140EF4A84);
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
