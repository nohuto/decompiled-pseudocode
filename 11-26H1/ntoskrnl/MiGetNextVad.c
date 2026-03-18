/*
 * XREFs of MiGetNextVad @ 0x140326018
 * Callers:
 *     MiLeapPrefetch @ 0x1403144C4 (MiLeapPrefetch.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiWalkLeap @ 0x1403260B0 (MiWalkLeap.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiReturnLockedVadOrNextVa @ 0x14044E7E0 (MiReturnLockedVadOrNextVa.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140467190 (MiDeleteEmptyPageTableCommit.c)
 *     MiUnlockVirtualAddreses @ 0x1404AA608 (MiUnlockVirtualAddreses.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140960C00 (MiLockUnlockVmPrepare.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140962EBC (MiCommitInitialVadMetadataBits.c)
 *     MiUpdateVadBits @ 0x1409634A8 (MiUpdateVadBits.c)
 *     MiComputeVadCommitAbove @ 0x140B241BC (MiComputeVadCommitAbove.c)
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
