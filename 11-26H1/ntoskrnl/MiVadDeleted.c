/*
 * XREFs of MiVadDeleted @ 0x140480A68
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x140870088 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MiPrepareToHotPatchVad @ 0x140873C64 (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140873D98 (MiProcessPatchImageCfg.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140876988 (MiLoadSectionIntoVsmEnclave.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x14095B57C (MiCleanVad.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x140961230 (NtAreMappedFilesTheSame.c)
 *     MmIsFileMapped @ 0x1409706E8 (MmIsFileMapped.c)
 *     MiMarkSharedImageCfgBits @ 0x1409C8128 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1409C83D4 (MiPopulateCfgBitMap.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1409C8F44 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCommitFileBackedSection @ 0x140A58878 (MiCommitFileBackedSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareVadDelete @ 0x140A8F52C (MiPrepareVadDelete.c)
 *     MiQuerySingleLoadedPatch @ 0x140A997BC (MiQuerySingleLoadedPatch.c)
 *     MiResetVirtualMemory @ 0x140AB1600 (MiResetVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return *(_DWORD *)(a1 + 48) & 1;
}
