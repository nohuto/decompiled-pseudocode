/*
 * XREFs of MiGetControlAreaPartition @ 0x14044F7D0
 * Callers:
 *     MiDeleteExtendSubsections @ 0x14077B9E0 (MiDeleteExtendSubsections.c)
 *     MiChargeSubsectionProtos @ 0x14087127C (MiChargeSubsectionProtos.c)
 *     MiCreateFileOnlyPfns @ 0x140873544 (MiCreateFileOnlyPfns.c)
 *     MiQueryMemoryRegionInfo @ 0x140923AB0 (MiQueryMemoryRegionInfo.c)
 *     MiCreateImageOrDataSection @ 0x14098BFCC (MiCreateImageOrDataSection.c)
 *     MiChargeSegmentCommit @ 0x14099AB90 (MiChargeSegmentCommit.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiAllocatePerSessionProtos @ 0x140B13A28 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
}
