/*
 * XREFs of MiGetSlabPage @ 0x14033A284
 * Callers:
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiWalkImageReleasePage @ 0x1402CC6DC (MiWalkImageReleasePage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiGetPageTablePages @ 0x140339E00 (MiGetPageTablePages.c)
 *     MiAllocateSlabPageForMdl @ 0x14033A080 (MiAllocateSlabPageForMdl.c)
 *     MiGetUltraPage @ 0x14033A1B0 (MiGetUltraPage.c)
 *     MiCopyOnWriteGetPage @ 0x14036C2DC (MiCopyOnWriteGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     MiReplenishCombineResources @ 0x14048356C (MiReplenishCombineResources.c)
 *     MiResolveMappedFileFaultByCopying @ 0x1404893DC (MiResolveMappedFileFaultByCopying.c)
 *     MiFinalizeImageHeaderPage @ 0x1404C7B8C (MiFinalizeImageHeaderPage.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABD7B0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020607C (MiReplenishSlabAllocator.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiGetPageFromSlabAllocator @ 0x14033A4BC (MiGetPageFromSlabAllocator.c)
 *     MiPfnZeroingNeeded @ 0x14033AAB0 (MiPfnZeroingNeeded.c)
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
  v11 = (unsigned int *)(qword_140E2D690 + 4LL * v10 * (unsigned int)(unsigned __int16)KeNumberNodes);
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
    if ( !byte_140E2D688 )
      break;
    if ( (a4 & 2) == 0 )
      break;
    v25 = *v11;
    if ( v10 == (_DWORD)v25 || (*(_BYTE *)(*(_QWORD *)(384 * v25 + qword_140E2D6B8 + 376) + 32LL) & 1) == 0 )
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
