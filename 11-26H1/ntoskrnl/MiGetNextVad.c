/*
 * XREFs of MiGetNextVad @ 0x140328048
 * Callers:
 *     MiLeapPrefetch @ 0x1403164F4 (MiLeapPrefetch.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiWalkLeap @ 0x1403280E0 (MiWalkLeap.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiReturnLockedVadOrNextVa @ 0x140446910 (MiReturnLockedVadOrNextVa.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 *     MiUnlockVirtualAddreses @ 0x1404A3C98 (MiUnlockVirtualAddreses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x140A06150 (MiUnlockVadRange.c)
 *     MiLockUnlockVmCleanup @ 0x140A063BC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x140A08CA0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 *     MiUpdateVadBits @ 0x140A09330 (MiUpdateVadBits.c)
 *     MiComputeVadCommitAbove @ 0x140B265BC (MiComputeVadCommitAbove.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetNextVad(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 i; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_QWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v2;
        v2 = (_QWORD *)*v2;
      }
      while ( v2 );
    }
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(_QWORD *)v1 == a1 )
        break;
      a1 = v1;
    }
  }
  return v1;
}
