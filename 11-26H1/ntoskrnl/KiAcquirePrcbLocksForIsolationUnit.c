/*
 * XREFs of KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021C500 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiAttemptToStealStandbyThread @ 0x14022D190 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x1402300C0 (KiHandleDeferredPreemption.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x140230F44 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140238FB4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x14023A110 (KeYieldExecution.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x1402478E0 (KiSatisfyThreadWait.c)
 *     KeQueryValuesThread @ 0x140305730 (KeQueryValuesThread.c)
 *     KeUpdateThreadTag @ 0x14030F4C0 (KeUpdateThreadTag.c)
 *     KiIdleSchedule @ 0x140312AA0 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140335240 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 *     KeSetSchedulingGroupRankBias @ 0x14043D434 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E128 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x14043E3E4 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405ED984 (KiFinalizeCoreControlBlockAssignment.c)
 *     KeTryToFreezeThreadStack @ 0x1405EE9D0 (KeTryToFreezeThreadStack.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405FB5A0 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405FB620 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     KiTraceParkingRundown @ 0x1405FB69C (KiTraceParkingRundown.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406003AC (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

_BYTE *__fastcall KiAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, unsigned __int64 *a3)
{
  _BYTE *result; // rax
  unsigned int v4; // ecx
  __int64 *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 i; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  result = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  *a3 = a1 & 0xFFFFFFFFFFFFFFFEuLL | a2 & 1;
  if ( !a2 )
  {
    v5 = &v12;
    v4 = 1;
    goto LABEL_4;
  }
  if ( a2 == 1 )
  {
    result = *(_BYTE **)(a1 + 36504);
    v4 = (unsigned __int8)*result;
    v5 = (__int64 *)(result + 8);
    if ( *result )
    {
LABEL_4:
      v6 = v4;
      while ( 1 )
      {
        v7 = *v5;
        v8 = 0;
LABEL_6:
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        ++v5;
        if ( !--v6 )
          return result;
      }
      while ( 1 )
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_22:
            HvlNotifyLongSpinWait(v8);
            goto LABEL_11;
          }
          for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
          {
            v10 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v10 + 35) & 1) != 0 )
            {
              v11 = *(_QWORD *)(v10 + 36600);
              if ( !v11 || !*(_BYTE *)(v11 + 65) || !*(_BYTE *)(v11 + 64) )
                goto LABEL_22;
            }
          }
        }
        _mm_pause();
LABEL_11:
        result = *(_BYTE **)(v7 + 48);
        if ( !result )
          goto LABEL_6;
      }
    }
  }
  return result;
}
