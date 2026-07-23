/*
 * XREFs of MiGetFirstVad @ 0x1404B1910
 * Callers:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C5D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MiHotPatchProcess @ 0x1408765A8 (MiHotPatchProcess.c)
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x140A06150 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x140A08CA0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140A08D44 (MiCommitInitialVadMetadataBits.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetFirstVad(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rdx

  result = *(_QWORD **)(a1 + 1368);
  if ( result )
  {
    do
    {
      v2 = result;
      v3 = (unsigned __int64)result;
      result = (_QWORD *)*result;
    }
    while ( result );
    return (_QWORD *)(v3 & -(__int64)(v2 != 0LL));
  }
  return result;
}
