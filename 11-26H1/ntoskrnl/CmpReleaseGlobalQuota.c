/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1408C8530
 * Callers:
 *     CmpAllocateForNonPagedHive @ 0x140505650 (CmpAllocateForNonPagedHive.c)
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     CmpFree @ 0x1408B9620 (CmpFree.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDeleteHive @ 0x1408D42C4 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 *     HvpDropPagedBins @ 0x140A87E90 (HvpDropPagedBins.c)
 *     HvpAllocateNonPagedBin @ 0x140A8808C (HvpAllocateNonPagedBin.c)
 *     CmpAllocate @ 0x140A881A0 (CmpAllocate.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( (struct _LIST_ENTRY *)a1 > PspSiloMonitorLock.Timer.Header.WaitListHead.Blink )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedAdd((volatile signed __int32 *)&PspSiloMonitorLock.Timer.Header.WaitListHead.Blink, -a1);
  return result;
}
