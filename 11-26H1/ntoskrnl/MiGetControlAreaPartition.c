/*
 * XREFs of MiGetControlAreaPartition @ 0x140457F60
 * Callers:
 *     MiDeleteExtendSubsections @ 0x140778B40 (MiDeleteExtendSubsections.c)
 *     MiChargeSubsectionProtos @ 0x14086AE9C (MiChargeSubsectionProtos.c)
 *     MiCreateFileOnlyPfns @ 0x14086D164 (MiCreateFileOnlyPfns.c)
 *     MiQueryMemoryRegionInfo @ 0x14091FF70 (MiQueryMemoryRegionInfo.c)
 *     MiCreateImageOrDataSection @ 0x1409BAFEC (MiCreateImageOrDataSection.c)
 *     MiChargeSegmentCommit @ 0x1409C9BB0 (MiChargeSegmentCommit.c)
 *     MiAllocateVirtualMemory @ 0x1409F3464 (MiAllocateVirtualMemory.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 *     MiSegmentDelete @ 0x140A816BC (MiSegmentDelete.c)
 *     MiWalkEntireImage @ 0x140AC8434 (MiWalkEntireImage.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiAllocatePerSessionProtos @ 0x140B11CA8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
}
