/*
 * XREFs of MiVadMapsLargeImage @ 0x1403C5E74
 * Callers:
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140534C74 (MiIsVadEligibleForCommitRelease.c)
 *     MiQueryImageInfo @ 0x1409235C4 (MiQueryImageInfo.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 *     MiMarkPrivateImageCfgBits @ 0x14099B254 (MiMarkPrivateImageCfgBits.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140A02FF8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
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
