/*
 * XREFs of MiVadMapsLargeImage @ 0x1403BC004
 * Callers:
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405327D4 (MiIsVadEligibleForCommitRelease.c)
 *     MiQueryImageInfo @ 0x14091F6D4 (MiQueryImageInfo.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14095D738 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x14095E5D8 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiMarkPrivateImageCfgBits @ 0x1409CA274 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 48) & 0x1C) == 8 )
    return *(_DWORD *)(a1 + 72) & 1;
  else
    return 0LL;
}
