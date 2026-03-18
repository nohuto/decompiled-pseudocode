/*
 * XREFs of MiLocateLockedVadEvent @ 0x1403BCC30
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x1402D1920 (MiCheckUserVirtualAddress.c)
 *     MiQueryVadForVaAttributes @ 0x140305C54 (MiQueryVadForVaAttributes.c)
 *     MiInsertVad @ 0x140316000 (MiInsertVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertPhysicalPteMapping @ 0x140366150 (MiInsertPhysicalPteMapping.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14036672C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiMarkMdlComplete @ 0x1403BB314 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x1403BC184 (MiGetAweVadPartition.c)
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049754C (MiCaptureWriteWatchDirtyBit.c)
 *     MiCloneWriteWatch @ 0x140703194 (MiCloneWriteWatch.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140770E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiCopyLargeVad @ 0x14087FE1C (MiCopyLargeVad.c)
 *     MiQueryImageInfo @ 0x14091F6D4 (MiQueryImageInfo.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14095F0C4 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x14095F790 (MiFreeVirtualMemory.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409C40F0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x1409C6BC8 (MiFillMapFileInfo.c)
 *     MiCommitVadPreparePacket @ 0x1409C7490 (MiCommitVadPreparePacket.c)
 *     MiMarkPrivateImageCfgBits @ 0x1409CA274 (MiMarkPrivateImageCfgBits.c)
 *     MiSelectImageMapAddress @ 0x1409CDB18 (MiSelectImageMapAddress.c)
 *     MiCreateFixupVad @ 0x1409CE47C (MiCreateFixupVad.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A7CF90 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareWriteWatchPacket @ 0x140A8DCD0 (MiPrepareWriteWatchPacket.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 *     MiGetReadyInPageBlock @ 0x140B3C89C (MiGetReadyInPageBlock.c)
 *     MiGetAweVadPageSize @ 0x140B4ACB4 (MiGetAweVadPageSize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateLockedVadEvent(__int64 a1, unsigned __int16 a2)
{
  unsigned __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; result; result = *(_QWORD *)result )
  {
    if ( (*(_WORD *)(result + 8) & a2) != 0 )
      break;
  }
  return result;
}
