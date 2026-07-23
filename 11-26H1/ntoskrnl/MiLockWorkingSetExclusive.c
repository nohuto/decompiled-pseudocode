/*
 * XREFs of MiLockWorkingSetExclusive @ 0x14027DB10
 * Callers:
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiSynchronizeSystemVa @ 0x1402C58B0 (MiSynchronizeSystemVa.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiEnforceWorkingSetLimit @ 0x1402F0258 (MiEnforceWorkingSetLimit.c)
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     MiPerformVadSplitting @ 0x140317B74 (MiPerformVadSplitting.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiTradeForPageTablePage @ 0x14033D4EC (MiTradeForPageTablePage.c)
 *     MiGetPageWalkLocks @ 0x140364BB8 (MiGetPageWalkLocks.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiEmptyWorkingSetConverge @ 0x1403C4BA8 (MiEmptyWorkingSetConverge.c)
 *     MiCleanWorkingSet @ 0x1403C5004 (MiCleanWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiDeleteProcessShadow @ 0x14047D73C (MiDeleteProcessShadow.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1404C31E0 (MiCheckHoldFaultForHotPatch.c)
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
 *     MiBeginHoldingDirtyFaults @ 0x140700C08 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x140700E74 (MiFinishHoldingDirtyFaults.c)
 *     MiClearCloneParentForkInProgress @ 0x140714AF4 (MiClearCloneParentForkInProgress.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
    v3 = (int **)&qword_140E37980;
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
