/*
 * XREFs of KiAcquirePrcbLocksForIsolationUnit @ 0x1402BBDD0
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14021AB70 (KeQueryTotalCycleTimeThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021E510 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiAttemptToStealStandbyThread @ 0x14022B800 (KiAttemptToStealStandbyThread.c)
 *     KiHandleDeferredPreemption @ 0x14022E730 (KiHandleDeferredPreemption.c)
 *     KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x14022F5B4 (KiAcquirePrcbLocksForPreemptionAttemptSlowPath.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140237654 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x14023F880 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x14023FC00 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KeQueryValuesThread @ 0x1402BAA70 (KeQueryValuesThread.c)
 *     KeUpdateThreadTag @ 0x1402C4800 (KeUpdateThreadTag.c)
 *     KiIdleSchedule @ 0x1402C7E00 (KiIdleSchedule.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403322B0 (KiAcquireThreadStateLockForWrite.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140332850 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiSetSystemAffinityThread @ 0x14037C620 (KiSetSystemAffinityThread.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     KiNormalPriorityReadyScan @ 0x1403BF1A4 (KiNormalPriorityReadyScan.c)
 *     KeSetThreadSchedulerAssist @ 0x1403BFAB8 (KeSetThreadSchedulerAssist.c)
 *     KeTransitionProcessorParkState @ 0x14042C1D0 (KeTransitionProcessorParkState.c)
 *     KeSetSchedulingGroupRankBias @ 0x140444924 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140445624 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1404458E0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KeTryToFreezeThreadStack @ 0x1405EC060 (KeTryToFreezeThreadStack.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 *     KiStartForceParkSingleDutyCycleTimerCallback @ 0x1405F8B80 (KiStartForceParkSingleDutyCycleTimerCallback.c)
 *     KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405F8C00 (KiStopForceParkSingleDutyCycleTimerCallback.c)
 *     KiTraceParkingRundown @ 0x1405F8C7C (KiTraceParkingRundown.c)
 *     ?KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FD95C (-KiAbpCrossThreadDelete@LegacyAutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
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
