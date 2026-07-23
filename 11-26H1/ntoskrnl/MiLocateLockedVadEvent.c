/*
 * XREFs of MiLocateLockedVadEvent @ 0x1403C6AA0
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x1402B36E0 (MiCheckUserVirtualAddress.c)
 *     MiQueryVadForVaAttributes @ 0x1402E7CD4 (MiQueryVadForVaAttributes.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiMarkMdlComplete @ 0x1403C5184 (MiMarkMdlComplete.c)
 *     MiGetAweVadPartition @ 0x1403C5FF4 (MiGetAweVadPartition.c)
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     MiCloneWriteWatch @ 0x140707E64 (MiCloneWriteWatch.c)
 *     MiCreateUserPhysicalViewCharges @ 0x140773E70 (MiCreateUserPhysicalViewCharges.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiCopyLargeVad @ 0x14088621C (MiCopyLargeVad.c)
 *     MiQueryImageInfo @ 0x1409235C4 (MiQueryImageInfo.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiUnmapViewOfSectionPrepare @ 0x1409950D0 (MiUnmapViewOfSectionPrepare.c)
 *     MiFillMapFileInfo @ 0x140997BA8 (MiFillMapFileInfo.c)
 *     MiCommitVadPreparePacket @ 0x140998470 (MiCommitVadPreparePacket.c)
 *     MiMarkPrivateImageCfgBits @ 0x14099B254 (MiMarkPrivateImageCfgBits.c)
 *     MiSelectImageMapAddress @ 0x14099EAF8 (MiSelectImageMapAddress.c)
 *     MiCreateFixupVad @ 0x14099F45C (MiCreateFixupVad.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140A04984 (MiFreeToSubAllocatedRegion.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPrepareWriteWatchPacket @ 0x140A929A0 (MiPrepareWriteWatchPacket.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 *     MiGetReadyInPageBlock @ 0x140B3EB1C (MiGetReadyInPageBlock.c)
 *     MiGetAweVadPageSize @ 0x140B4CA44 (MiGetAweVadPageSize.c)
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
