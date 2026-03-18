/*
 * XREFs of KxWaitForSpinLockAndAcquire @ 0x14032F490
 * Callers:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402195F8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpLockBufferList @ 0x140219CD0 (EtwpLockBufferList.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140268190 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140269810 (IopFreeWaitCompletionPacket.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027AAF0 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1402BFE94 (EtwpCovSampTryAcquireBufferLock.c)
 *     PfSnActiveTraceGetNext @ 0x1402F1D80 (PfSnActiveTraceGetNext.c)
 *     EtwpTraceStackKey @ 0x14032C740 (EtwpTraceStackKey.c)
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     PoSetProcessorQos @ 0x14032FA60 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140330350 (KeCheckAndApplyBamQos.c)
 *     KeSynchronizeExecution @ 0x140330830 (KeSynchronizeExecution.c)
 *     PsGetThreadProperty @ 0x140330920 (PsGetThreadProperty.c)
 *     KiCheckForPendingQosUpdate @ 0x140330CB0 (KiCheckForPendingQosUpdate.c)
 *     KiTimer2Expiration @ 0x140336A40 (KiTimer2Expiration.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x1403764A0 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1403790A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037AA30 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     PopFxProcessWork @ 0x1403AEEC0 (PopFxProcessWork.c)
 *     PopFxActivateComponentDependents @ 0x1403B25D0 (PopFxActivateComponentDependents.c)
 *     IopDequeueIrpFromFileObject @ 0x1403DE5B0 (IopDequeueIrpFromFileObject.c)
 *     PpmIdleSnapConcurrency @ 0x1404212F0 (PpmIdleSnapConcurrency.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x14043A2B4 (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPCIConfig @ 0x14043A4F0 (HalpPCIConfig.c)
 *     EtwpApcPoolThunk @ 0x140447400 (EtwpApcPoolThunk.c)
 *     IopSetLockOperationProcess @ 0x140457F80 (IopSetLockOperationProcess.c)
 *     PsGetJobProperty @ 0x14045D8B0 (PsGetJobProperty.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14046A690 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     KeAcquireInterruptSpinLock @ 0x140476B00 (KeAcquireInterruptSpinLock.c)
 *     BgpFwAcquireLock @ 0x1404E7E04 (BgpFwAcquireLock.c)
 *     KasanDriverUnloadImage @ 0x1405DD480 (KasanDriverUnloadImage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForSpinLockAndAcquire(volatile signed __int32 *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  while ( *(_QWORD *)a1 || _interlockedbittestandset64(a1, 0LL) );
  return v2;
}
