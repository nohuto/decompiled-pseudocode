/*
 * XREFs of MiGetSlabPage @ 0x14033C304
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402D4790 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiAllocateSlabPageForMdl @ 0x14033C100 (MiAllocateSlabPageForMdl.c)
 *     MiGetUltraPage @ 0x14033C230 (MiGetUltraPage.c)
 *     MiCopyOnWriteGetPage @ 0x14036E07C (MiCopyOnWriteGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MiReplenishCombineResources @ 0x14047CE9C (MiReplenishCombineResources.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C18CC (MiFinalizeImageHeaderPage.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiGetPageFromSlabAllocator @ 0x14033C53C (MiGetPageFromSlabAllocator.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 */

__int64 __fastcall MiGetSlabPage(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 *a5, unsigned int a6)
{
  __int64 v8; // r9
  int v9; // r8d
  int v10; // ebx
  unsigned int *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int *v14; // r12
  __int64 v15; // r13
  __int64 PageFromSlabAllocator; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  int v20; // ecx
  int v22; // edx
  int v23; // eax
  unsigned int *v24; // rcx
  __int64 v25; // rax

  v8 = a1;
  v9 = a2;
  if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a5 = 0LL;
  v10 = (a3 >> 9) & 0x3F;
LABEL_4:
  v11 = (unsigned int *)(qword_140E2D810 + 4LL * v10 * (unsigned int)(unsigned __int16)KeNumberNodes);
  if ( (a4 & 1) != 0 )
    v12 = 1LL;
  else
    v12 = (unsigned __int16)KeNumberNodes;
  v13 = -1LL;
  v14 = &v11[v12];
  while ( 1 )
  {
    if ( v11 >= v14 )
    {
      if ( (a4 & 2) == 0 )
        return v13;
      a4 &= ~2u;
      goto LABEL_4;
    }
    if ( !byte_140E2D808 )
      break;
    if ( (a4 & 2) == 0 )
      break;
    v25 = *v11;
    if ( v10 == (_DWORD)v25 || (*(_BYTE *)(*(_QWORD *)(384 * v25 + qword_140E2D838 + 376) + 32LL) & 1) == 0 )
      break;
LABEL_25:
    ++v11;
  }
  v15 = 232LL * v9 + 56320LL * *v11 + *(_QWORD *)(v8 + 16) + 14752LL;
  PageFromSlabAllocator = MiGetPageFromSlabAllocator(v15, a4);
  v13 = PageFromSlabAllocator;
  if ( PageFromSlabAllocator == -1 )
  {
    if ( (a4 & 2) == 0 && !*(_QWORD *)(v15 + 176) )
    {
      if ( a5 == (__int64 *)-1LL )
      {
        v23 = MiReplenishSlabAllocator(v15, 1uLL, a6, v18);
        v24 = v11 - 1;
        if ( !v23 )
          v24 = v11;
        v11 = v24;
      }
      else if ( a5 )
      {
        *a5 = v15;
        return v13;
      }
    }
    v8 = a1;
    v9 = a2;
    goto LABEL_25;
  }
  v19 = 48 * PageFromSlabAllocator - 0x220000000000LL;
  v20 = 0;
  if ( (*(_QWORD *)(v19 + 40) & 0x10000000000LL) != 0 )
    v20 = *(_DWORD *)(v19 + 36) & 0x18000000;
  *(_DWORD *)(v19 + 36) = v20;
  if ( (a4 & 8) != 0 && (unsigned int)MiPfnZeroingNeeded(v19, 1LL, v17) )
  {
    MiZeroPhysicalPage(0LL, v13, (a4 >> 3) & 2, v22);
    *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( (a4 & 4) != 0 && (*(_DWORD *)(v19 + 32) & 0xC00000) != 0x400000 )
    MiChangePageAttribute(v19, 1u);
  return v13;
}
