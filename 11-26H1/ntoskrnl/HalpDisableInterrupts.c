/*
 * XREFs of HalpDisableInterrupts @ 0x1402C7D00
 * Callers:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209460 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiSignalThreadForApc @ 0x14020B1E0 (KiSignalThreadForApc.c)
 *     HalRequestSoftwareInterrupt @ 0x14021E010 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateRunTime @ 0x14021F420 (KiUpdateRunTime.c)
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiUpdateThreadHgsFeedback @ 0x140226C00 (KiUpdateThreadHgsFeedback.c)
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockStealVm @ 0x140294D10 (MiUnlockStealVm.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeForceDetachProcess @ 0x1402C6C30 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402C7110 (KeUnstackDetachProcess.c)
 *     HalpTimerResetProfileAdjustment @ 0x1402C7C10 (HalpTimerResetProfileAdjustment.c)
 *     HalpCollectPmcCounters @ 0x1402C7C60 (HalpCollectPmcCounters.c)
 *     KiRequestSoftwareInterrupt @ 0x1402C7D20 (KiRequestSoftwareInterrupt.c)
 *     HalpTimerSetProfilingTarget @ 0x1402C8024 (HalpTimerSetProfilingTarget.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032DC5C (HalpInterruptSetLineStateInternal.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     HalpFlushTLB @ 0x140522658 (HalpFlushTLB.c)
 *     HalpAcquireCmosSpinLock @ 0x140530540 (HalpAcquireCmosSpinLock.c)
 *     HalpInterruptResetThisProcessor @ 0x14057CBE0 (HalpInterruptResetThisProcessor.c)
 *     HalSendNMI @ 0x14057EF50 (HalSendNMI.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x14057F5A4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpReboot @ 0x14057F954 (HalpReboot.c)
 *     HalpTimerClockActivate @ 0x1405810E0 (HalpTimerClockActivate.c)
 *     HalpTscCompatibilitySynchronization @ 0x140583ACC (HalpTscCompatibilitySynchronization.c)
 *     HalpTscFallback @ 0x140583C10 (HalpTscFallback.c)
 *     HalpTscSynchronizationWorker @ 0x140584040 (HalpTscSynchronizationWorker.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140586790 (HalpTimerMeasureProcessorsWorker.c)
 *     HalEfiResetSystem @ 0x140586B0C (HalEfiResetSystem.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405902E8 (HalpInterruptInitializeLocalUnit.c)
 *     HalpTimerUpdateApiConsumers @ 0x140599780 (HalpTimerUpdateApiConsumers.c)
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 *     HalpInterruptStartProcessor @ 0x140BEA190 (HalpInterruptStartProcessor.c)
 *     HalpInterruptReinitialize @ 0x140BEA368 (HalpInterruptReinitialize.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140BEDED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

bool HalpDisableInterrupts()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  return (v1 & 0x200) != 0;
}
