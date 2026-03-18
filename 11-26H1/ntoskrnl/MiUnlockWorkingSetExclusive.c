/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14027E758
 * Callers:
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiUnlockSystemVa @ 0x1402E5200 (MiUnlockSystemVa.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiEnforceWorkingSetLimit @ 0x14030E1D8 (MiEnforceWorkingSetLimit.c)
 *     MiMapUserLargePages @ 0x14030FD60 (MiMapUserLargePages.c)
 *     MiCommitVadEmptyPacket @ 0x140311378 (MiCommitVadEmptyPacket.c)
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiDeleteVaTail @ 0x140361270 (MiDeleteVaTail.c)
 *     MiReleaseWalkLocks @ 0x140362F00 (MiReleaseWalkLocks.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiEmptyWorkingSetConverge @ 0x1403BAD38 (MiEmptyWorkingSetConverge.c)
 *     MiCleanWorkingSet @ 0x1403BB194 (MiCleanWorkingSet.c)
 *     MiSoftFaultMappedView @ 0x1403BB610 (MiSoftFaultMappedView.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     MiDecommitPagesTail @ 0x14044B7AC (MiDecommitPagesTail.c)
 *     MiQueryVpabAccessedState @ 0x1404646AC (MiQueryVpabAccessedState.c)
 *     MiDeleteProcessShadow @ 0x140483DCC (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x1404C2F84 (MmStealTopLevelPage.c)
 *     MiUnlockFaultWorkingSet @ 0x1404C9904 (MiUnlockFaultWorkingSet.c)
 *     MiCloneCaptureVadCommit @ 0x1404D9798 (MiCloneCaptureVadCommit.c)
 *     MiDeleteRotateAndStopFaults @ 0x1404DED80 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x1404E2824 (MiRotateComplete.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140511F68 (MiLockWorkingSetForLargeMapping.c)
 *     MiSetCloneParentForkInProgress @ 0x1405180AC (MiSetCloneParentForkInProgress.c)
 *     MiClearCommitReleaseState @ 0x1406E4244 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1406E4858 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E502C (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1406E549C (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406E54FC (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1406E56EC (MmSetCommitReleaseEligibility.c)
 *     MiFreedUnusedPfnPagesDpc @ 0x1406E8B80 (MiFreedUnusedPfnPagesDpc.c)
 *     MiBeginHoldingDirtyFaults @ 0x1406FBF38 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406FC1A4 (MiFinishHoldingDirtyFaults.c)
 *     MiClearCloneParentForkInProgress @ 0x14070FDF8 (MiClearCloneParentForkInProgress.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1403654E4 (MiLockWorkingSetSharedAtDpc.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404FBFC4 (MiDeleteDeferredCloneDescriptors.c)
 *     FirstEntrySList @ 0x140730C80 (FirstEntrySList.c)
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
  v3 = (volatile LONG **)&qword_140E37800;
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
