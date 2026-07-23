/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14027DCC8
 * Callers:
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiUnlockSystemVa @ 0x1402C7240 (MiUnlockSystemVa.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiEnforceWorkingSetLimit @ 0x1402F0258 (MiEnforceWorkingSetLimit.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiCommitVadEmptyPacket @ 0x1403133AC (MiCommitVadEmptyPacket.c)
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiReleaseWalkLocks @ 0x140364CA0 (MiReleaseWalkLocks.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiEmptyWorkingSetConverge @ 0x1403C4BA8 (MiEmptyWorkingSetConverge.c)
 *     MiCleanWorkingSet @ 0x1403C5004 (MiCleanWorkingSet.c)
 *     MiSoftFaultMappedView @ 0x1403C5480 (MiSoftFaultMappedView.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x1404BC7D4 (MmStealTopLevelPage.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C3324 (MiUnlockFaultWorkingSet.c)
 *     MiCloneCaptureVadCommit @ 0x1404D2E78 (MiCloneCaptureVadCommit.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404D8460 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x1404DBF04 (MiRotateComplete.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14050B9D8 (MiLockWorkingSetForLargeMapping.c)
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiClearCommitReleaseState @ 0x1406E8EF4 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E9508 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406E9B50 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1406EA14C (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406EA1AC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1406EA39C (MmSetCommitReleaseEligibility.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406ED820 (MiFreedUnusedPfnPagesDpc.c)
 *     MiBeginHoldingDirtyFaults @ 0x140700C08 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x140700E74 (MiFinishHoldingDirtyFaults.c)
 *     MiClearCloneParentForkInProgress @ 0x140714AF4 (MiClearCloneParentForkInProgress.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404F5510 (MiDeleteDeferredCloneDescriptors.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, KIRQL a2)
{
  int v2; // ebx
  volatile LONG **v3; // r14
  int v6; // r12d
  volatile LONG *v7; // r14
  __int64 v8; // r15
  volatile LONG *v9; // rbp
  _KPROCESS *Process; // rbx
  __int64 v11; // rdx

  v2 = *(_DWORD *)(a1 + 184);
  v3 = (volatile LONG **)&qword_140E37980;
  if ( (v2 & 0xF) != 1 )
    v3 = (volatile LONG **)(a1 + 192);
  v6 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000;
  MiCheckProcessShadow(a1, 2LL);
  v7 = *v3;
  v8 = 3LL;
  v9 = v7 + 16;
  do
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    v9 += 16;
    --v8;
  }
  while ( v8 );
  if ( a2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, a2);
  if ( (v2 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors != (volatile _KAFFINITY_EX *)-896LL )
      {
        if ( FirstEntrySList((PSLIST_HEADER)&Process[2].ActiveProcessors[4].StaticBitmap[19]) )
          MiDeleteDeferredCloneDescriptors((ULONG_PTR)Process);
      }
    }
  }
  if ( !v6 && (unsigned __int16)*(_DWORD *)(a1 + 188) )
  {
    if ( a2 == 17 )
      MiLockWorkingSetSharedAtDpc(a1);
    else
      MiLockWorkingSetShared(a1);
    LOBYTE(v11) = a2;
    MiUnlockWorkingSetShared(a1, v11);
  }
}
