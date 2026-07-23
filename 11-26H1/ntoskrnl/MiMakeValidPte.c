/*
 * XREFs of MiMakeValidPte @ 0x1402BBDE0
 * Callers:
 *     MiProtectNonPagedPool @ 0x140250A90 (MiProtectNonPagedPool.c)
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiFillPhysicalPages @ 0x140288AC0 (MiFillPhysicalPages.c)
 *     MiZeroAndConvertPage @ 0x1402A0A00 (MiZeroAndConvertPage.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiMakeSystemCachePtesValid @ 0x1402C7F80 (MiMakeSystemCachePtesValid.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiCopyTopLevelMappings @ 0x140344208 (MiCopyTopLevelMappings.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x1403679D0 (MiAssignNonPagedPoolPte.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiMapSinglePage @ 0x14036C61C (MiMapSinglePage.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiScrubPage @ 0x140408114 (MiScrubPage.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14042A4F4 (MiInitializeSelfmap.c)
 *     MiReplacePageOfProtoPool @ 0x140443530 (MiReplacePageOfProtoPool.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiUnlinkStandbyPfn @ 0x140456458 (MiUnlinkStandbyPfn.c)
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiWriteAwePtesPrepare @ 0x140471C9C (MiWriteAwePtesPrepare.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14047A5B0 (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiMapPageFileHash @ 0x140499D94 (MiMapPageFileHash.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 *     MiMapMemoryDumpMdl @ 0x1404BCF5C (MiMapMemoryDumpMdl.c)
 *     MiFinishLastForkPageTable @ 0x1404CA0CC (MiFinishLastForkPageTable.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiInsertLargeVadMapping @ 0x140509CA4 (MiInsertLargeVadMapping.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiFillPhysicalPagesWithPtes @ 0x1406EBF70 (MiFillPhysicalPagesWithPtes.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSlowPte @ 0x1406FC144 (MiInitializeSlowPte.c)
 *     MiEnableLargeSubsection @ 0x1406FE68C (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x1406FEAF8 (MiFillPageWithImageExtentContents.c)
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140704D20 (MiPrepareEnclaveMetadataPage.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     MiAcquireScrubProtection @ 0x14071093C (MiAcquireScrubProtection.c)
 *     MiCopyMemoryPagefileData @ 0x140711550 (MiCopyMemoryPagefileData.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MiInitializeShadowPageTable @ 0x14087B9A8 (MiInitializeShadowPageTable.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x140880010 (MiCaptureSparsePages.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 *     MiCopyPagesIntoEnclave @ 0x140AF1B14 (MiCopyPagesIntoEnclave.c)
 *     MiUpdateForkMaps @ 0x140AF6AB0 (MiUpdateForkMaps.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 *     MmAllocateNonCachedMemory @ 0x140B39F30 (MmAllocateNonCachedMemory.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 *     MmMapProtectedKernelPage @ 0x140B48118 (MmMapProtectedKernelPage.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 *     MiInitializeDummyPages @ 0x140CF9670 (MiInitializeDummyPages.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140CFBAF4 (MxCopyPage.c)
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 *     MiFillGapPtes @ 0x140CFFA10 (MiFillGapPtes.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeTbFlush @ 0x140D05A54 (MiInitializeTbFlush.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402A0990 (MiUserPdeOrAbove.c)
 */

unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  char v3; // bp
  unsigned __int64 v6; // rbx
  int v7; // edx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax

  v3 = a3 & 0x1F;
  v6 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[a3 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[a3 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
    v7 = a3 & 0x4000000;
    goto LABEL_3;
  }
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v6 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[a3 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v6 = ((a2 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[a3 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v6 |= 4uLL;
  }
  v12 = (__int64)(a1 << 25) >> 16;
  v7 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 && v12 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v12 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v12 = (__int64)(v12 << 25) >> 16;
    }
    while ( v12 >= 0xFFFFF68000000000uLL );
  }
  if ( v12 < 0x7FFFFFFF0000LL )
  {
    v6 |= 4uLL;
LABEL_21:
    v13 = BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink);
    goto LABEL_22;
  }
  if ( v12 < 0xFFFF800000000000uLL )
    goto LABEL_21;
  if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_3;
  if ( v12 >= qword_140E2DFC0 && v12 <= qword_140E2DFD0 )
    goto LABEL_21;
  v13 = BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink);
LABEL_22:
  if ( v13 )
    v6 |= 0x100uLL;
LABEL_3:
  if ( a3 < 0 && (v3 & 5) == 4 )
    v6 |= 0x42uLL;
  v8 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (a3 & 0x40000000) == 0 )
    v8 = v6;
  if ( (a3 & 0x20000000) != 0 )
    v8 = ((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2DAB0.Header.WaitListHead.Blink) << 8) ^ v8) & 0xFFFFFFFFFFFFFEFFuLL;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( !v7 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
