/*
 * XREFs of MiMakeValidPte @ 0x1402DA020
 * Callers:
 *     MiProtectNonPagedPool @ 0x14024F130 (MiProtectNonPagedPool.c)
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiGetPageChain @ 0x140285DD0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287AA0 (MiGetPageChainSmallPageProcess.c)
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiFillPhysicalPages @ 0x140289560 (MiFillPhysicalPages.c)
 *     MiZeroAndConvertPage @ 0x1402A14B0 (MiZeroAndConvertPage.c)
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiMakeSystemCachePtesValid @ 0x1402E5F40 (MiMakeSystemCachePtesValid.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x14033C35C (MiReplacePageTablePage.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033CED4 (MiSetProtectionOnTransitionPte.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x1403414DC (MiAddPagesToEnclave.c)
 *     MiCopyTopLevelMappings @ 0x140342188 (MiCopyTopLevelMappings.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiLinkPoolCommitChain @ 0x140365560 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140365C30 (MiAssignNonPagedPoolPte.c)
 *     MiInsertPhysicalPteMapping @ 0x140366150 (MiInsertPhysicalPteMapping.c)
 *     MiMapSinglePage @ 0x14036A87C (MiMapSinglePage.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiValidateInPageEntries @ 0x14038C410 (MiValidateInPageEntries.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiInitializeSelfmap @ 0x14040D5C8 (MiInitializeSelfmap.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiScrubPage @ 0x140413AE4 (MiScrubPage.c)
 *     MiReplacePageOfProtoPool @ 0x14044B400 (MiReplacePageOfProtoPool.c)
 *     MiUnlinkStandbyPfn @ 0x14045C8B0 (MiUnlinkStandbyPfn.c)
 *     MiWriteAwePtes @ 0x140477F10 (MiWriteAwePtes.c)
 *     MiWriteAwePtesPrepare @ 0x14047851C (MiWriteAwePtesPrepare.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140480C40 (MiUpdateImagePfnImportRelocations.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiMapPageFileHash @ 0x1404A0244 (MiMapPageFileHash.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiMapMemoryDumpMdl @ 0x1404C370C (MiMapMemoryDumpMdl.c)
 *     MiFinishLastForkPageTable @ 0x1404D069C (MiFinishLastForkPageTable.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiMapKernelScp @ 0x1404F3160 (MiMapKernelScp.c)
 *     MiInsertLargeVadMapping @ 0x140510234 (MiInsertLargeVadMapping.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiMakeLargePageTable @ 0x14052B10C (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiFillPhysicalPagesWithPtes @ 0x1406E72C0 (MiFillPhysicalPagesWithPtes.c)
 *     MiPfnRangeIsZero @ 0x1406E9BA0 (MiPfnRangeIsZero.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F02F0 (MiUpdateLargePageSectionPfns.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSlowPte @ 0x1406F74D4 (MiInitializeSlowPte.c)
 *     MiEnableLargeSubsection @ 0x1406F99BC (MiEnableLargeSubsection.c)
 *     MiFillPageWithImageExtentContents @ 0x1406F9E28 (MiFillPageWithImageExtentContents.c)
 *     MiDbgMapPhysicalAddress @ 0x1406FE368 (MiDbgMapPhysicalAddress.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140700050 (MiPrepareEnclaveMetadataPage.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiAcquireScrubProtection @ 0x14070BC8C (MiAcquireScrubProtection.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MiInitializeShadowPageTable @ 0x1408755C4 (MiInitializeShadowPageTable.c)
 *     MiCreateHardwareEnclave @ 0x1408760F0 (MiCreateHardwareEnclave.c)
 *     MiCaptureSparsePages @ 0x140879C14 (MiCaptureSparsePages.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 *     MiAllocateProcessShadow @ 0x140ABD950 (MiAllocateProcessShadow.c)
 *     MiCopyPagesIntoEnclave @ 0x140AEEB74 (MiCopyPagesIntoEnclave.c)
 *     MiUpdateForkMaps @ 0x140AF443C (MiUpdateForkMaps.c)
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 *     MmAllocateNonCachedMemory @ 0x140B37D20 (MmAllocateNonCachedMemory.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MmMapProtectedKernelPage @ 0x140B460E8 (MmMapProtectedKernelPage.c)
 *     MiInitializeSharedUserData @ 0x140CF1F60 (MiInitializeSharedUserData.c)
 *     MiInitializeDummyPages @ 0x140CF32F0 (MiInitializeDummyPages.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 *     MxCopyPage @ 0x140CF5774 (MxCopyPage.c)
 *     MxMapVa @ 0x140CF7FB0 (MxMapVa.c)
 *     MiFillGapPtes @ 0x140CF9690 (MiFillGapPtes.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeTbFlush @ 0x140CFF6B4 (MiInitializeTbFlush.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x1402A1440 (MiUserPdeOrAbove.c)
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
    v13 = BYTE5(stru_140E2D930.Header.WaitListHead.Blink);
    goto LABEL_22;
  }
  if ( v12 < 0xFFFF800000000000uLL )
    goto LABEL_21;
  if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_3;
  if ( v12 >= qword_140E2DE40 && v12 <= qword_140E2DE50 )
    goto LABEL_21;
  v13 = BYTE4(stru_140E2D930.Header.WaitListHead.Blink);
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
    v8 = ((unsigned __int64)BYTE4(stru_140E2D930.Header.WaitListHead.Blink) << 8) ^ (((unsigned __int64)BYTE4(stru_140E2D930.Header.WaitListHead.Blink) << 8) ^ v8) & 0xFFFFFFFFFFFFFEFFuLL;
  v9 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80;
  if ( !v7 )
    v10 = v9;
  return v10 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
