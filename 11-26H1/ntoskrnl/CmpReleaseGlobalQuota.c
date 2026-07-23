/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1408CEAE4
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x1404FEF00 (CmpAllocateForNonPagedHive.c)
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     CmpFree @ 0x1408BFBF0 (CmpFree.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpDeleteHive @ 0x1408DA884 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     CmpUnlockHashEntry @ 0x140A4F550 (CmpUnlockHashEntry.c)
 *     HvpDropPagedBins @ 0x140A8EFC0 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A8F1BC (HvpAllocateNonPagedBin.c)
 *     CmpAllocate @ 0x140A8F2D0 (CmpAllocate.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > PspSiloMonitorLock.Timer.DueTime.QuadPart )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.Timer.DueTime, -a1);
  return result;
}
