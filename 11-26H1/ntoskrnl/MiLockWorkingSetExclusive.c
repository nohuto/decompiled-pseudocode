/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14027E5A0
 * Callers:
 *     MiMapWithLargePages @ 0x1402A2694 (MiMapWithLargePages.c)
 *     MiSynchronizeSystemVa @ 0x1402E3870 (MiSynchronizeSystemVa.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiEnforceWorkingSetLimit @ 0x14030E1D8 (MiEnforceWorkingSetLimit.c)
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140315B44 (MiPerformVadSplitting.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiTradeForPageTablePage @ 0x14033B46C (MiTradeForPageTablePage.c)
 *     MiGetPageWalkLocks @ 0x140362E18 (MiGetPageWalkLocks.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 *     MiEmptyWorkingSetConverge @ 0x1403BAD38 (MiEmptyWorkingSetConverge.c)
 *     MiCleanWorkingSet @ 0x1403BB194 (MiCleanWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403BC3E8 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockStealUserVm @ 0x14045EF90 (MiLockStealUserVm.c)
 *     MiDeleteProcessShadow @ 0x140483DCC (MiDeleteProcessShadow.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C97C0 (MiCheckHoldFaultForHotPatch.c)
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
 *     MiBeginHoldingDirtyFaults @ 0x1406FBF38 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406FC1A4 (MiFinishHoldingDirtyFaults.c)
 *     MiClearCloneParentForkInProgress @ 0x14070FDF8 (MiClearCloneParentForkInProgress.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiLockWorkingSetExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  int **v3; // rbx
  int *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v6; // edi
  unsigned __int64 i; // rcx
  int *v8; // rbx
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rdx

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v3 = (int **)&qword_140E37800;
  else
    v3 = (int **)(a1 + 192);
  v4 = *v3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(v4, CurrentIrql);
    for ( i = (unsigned int)*v4; (*v4 & 0xBFFFFFFF) != 0x80000000; i = (unsigned int)*v4 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v4, 0x40000000u);
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, a2, a3) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
  }
  v8 = v4 + 16;
  v9 = 3LL;
  do
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v10 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire(v8, 0xFFu);
      v11 = (unsigned int)*v8;
      if ( (*v8 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v11 & 0x40000000) == 0 )
            _InterlockedOr(v8, 0x40000000u);
          if ( (++v10 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, v11, a3) )
          {
            HvlNotifyLongSpinWait(v10);
          }
          else
          {
            _mm_pause();
          }
          v11 = (unsigned int)*v8;
          i = v11 & 0xFFFFFFFFBFFFFFFFuLL;
        }
        while ( (v11 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, 0xFFu);
    }
    v8 += 16;
    --v9;
  }
  while ( v9 );
  return CurrentIrql;
}
