/*
 * XREFs of MiVadDeleted @ 0x14047A3A8
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1408763E8 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140879FC4 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x14087A0F8 (MiProcessPatchImageCfg.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiMarkSharedImageCfgBits @ 0x140999108 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1409993B4 (MiPopulateCfgBitMap.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140999F24 (MiAllocateFromSubAllocatedRegion.c)
 *     MmIsFileMapped @ 0x1409BCA98 (MmIsFileMapped.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x140A00E3C (MiCleanVad.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x140A06AE0 (NtAreMappedFilesTheSame.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x140A941FC (MiPrepareVadDelete.c)
 *     MiQuerySingleLoadedPatch @ 0x140A9D93C (MiQuerySingleLoadedPatch.c)
 *     MiResetVirtualMemory @ 0x140AAF5F0 (MiResetVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return *(_DWORD *)(a1 + 48) & 1;
}
