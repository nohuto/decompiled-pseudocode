/*
 * XREFs of MiGetFirstVad @ 0x1404B80E0
 * Callers:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403BBEA0 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x140960890 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140960DAC (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x140962E18 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140962EBC (MiCommitInitialVadMetadataBits.c)
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
