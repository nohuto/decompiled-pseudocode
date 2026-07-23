/*
 * XREFs of HalpDisableInterrupts @ 0x1403129A0
 * Callers:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209540 (KiStartThreadCycleAccumulationContextSwap.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateRunTime @ 0x140220DB0 (KiUpdateRunTime.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiUpdateThreadHgsFeedback @ 0x140228590 (KiUpdateThreadHgsFeedback.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiDetachProcess @ 0x140248800 (KiDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeForceDetachProcess @ 0x1403118D0 (KeForceDetachProcess.c)
 *     KeUnstackDetachProcess @ 0x140311DB0 (KeUnstackDetachProcess.c)
 *     HalpTimerResetProfileAdjustment @ 0x1403128B0 (HalpTimerResetProfileAdjustment.c)
 *     HalpCollectPmcCounters @ 0x140312900 (HalpCollectPmcCounters.c)
 *     KiRequestSoftwareInterrupt @ 0x1403129C0 (KiRequestSoftwareInterrupt.c)
 *     HalpTimerSetProfilingTarget @ 0x140312CC4 (HalpTimerSetProfilingTarget.c)
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     HalpFlushTLB @ 0x140524CC4 (HalpFlushTLB.c)
 *     HalpAcquireCmosSpinLock @ 0x140532A40 (HalpAcquireCmosSpinLock.c)
 *     HalpInterruptResetThisProcessor @ 0x14057F100 (HalpInterruptResetThisProcessor.c)
 *     HalSendNMI @ 0x140581470 (HalSendNMI.c)
 *     HalpInterruptSendIpiToPhysicalTarget @ 0x140581AC4 (HalpInterruptSendIpiToPhysicalTarget.c)
 *     HalpReboot @ 0x140581E74 (HalpReboot.c)
 *     HalpTimerClockActivate @ 0x140583600 (HalpTimerClockActivate.c)
 *     HalpTscCompatibilitySynchronization @ 0x140585FEC (HalpTscCompatibilitySynchronization.c)
 *     HalpTscFallback @ 0x140586130 (HalpTscFallback.c)
 *     HalpTscSynchronizationWorker @ 0x140586560 (HalpTscSynchronizationWorker.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140588CB0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalEfiResetSystem @ 0x14058902C (HalEfiResetSystem.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 *     HalpTimerUpdateApiConsumers @ 0x14059BF00 (HalpTimerUpdateApiConsumers.c)
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpDpOfflineProcessorForReplace @ 0x140BF3ED0 (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     <none>
 */

bool HalpDisableInterrupts()
{
  __int16 v1; // [rsp+0h] [rbp-8h]

  _disable();
  return (v1 & 0x200) != 0;
}
