/*
 * XREFs of Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x14051F5B4
 * Callers:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402387B0 (KeYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x140239560 (KeSetActualBasePriorityThread.c)
 *     KiComputeThreadPriority @ 0x140239AB4 (KiComputeThreadPriority.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiFastExitThreadWait @ 0x140244040 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x140245780 (KiExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140245F80 (KiSatisfyThreadWait.c)
 *     KiRemoveBoostThread @ 0x1402742E0 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x140331070 (KiQuantumEnd.c)
 *     ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037B020 (-KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PspRevertContainerImpersonation @ 0x14037D900 (PspRevertContainerImpersonation.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     KiClearPriorityFloor @ 0x140380630 (KiClearPriorityFloor.c)
 *     KiWakePriQueueWaiter @ 0x140380910 (KiWakePriQueueWaiter.c)
 *     KiPerformWaitDeferredWork @ 0x1403F6F20 (KiPerformWaitDeferredWork.c)
 *     KiComputeNewPriority @ 0x14048C910 (KiComputeNewPriority.c)
 *     KiSetForegroundBoost @ 0x140521FB0 (KiSetForegroundBoost.c)
 *     KeSetBasePriorityThread @ 0x140528B30 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14052C560 (KeBoostPriorityThread.c)
 * Callees:
 *     Feature_StackingDecayBoosts__private_IsEnabledFallback @ 0x14051F5EC (Feature_StackingDecayBoosts__private_IsEnabledFallback.c)
 */

__int64 Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_StackingDecayBoosts__private_featureState & 2) != 0 )
    return Feature_StackingDecayBoosts__private_featureState & 1;
  else
    return Feature_StackingDecayBoosts__private_IsEnabledFallback(
             (unsigned int)Feature_StackingDecayBoosts__private_featureState,
             0LL);
}
