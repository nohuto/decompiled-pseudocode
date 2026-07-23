/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x1403313B0
 * Callers:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpLockBufferList @ 0x14021B348 (EtwpLockBufferList.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x140267700 (IopDropIrp.c)
 *     IopFreeWaitCompletionPacket @ 0x140268D80 (IopFreeWaitCompletionPacket.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     PfSnActiveTraceGetNext @ 0x1402D3E00 (PfSnActiveTraceGetNext.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x14030AB58 (EtwpCovSampTryAcquireBufferLock.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoSetProcessorQos @ 0x140331A90 (PoSetProcessorQos.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KeSynchronizeExecution @ 0x140332860 (KeSynchronizeExecution.c)
 *     PsGetThreadProperty @ 0x140332950 (PsGetThreadProperty.c)
 *     KiCheckForPendingQosUpdate @ 0x140332CE0 (KiCheckForPendingQosUpdate.c)
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x140378250 (-KiAbpProcessEntryAddToTree@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403789A0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037C7E0 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     PopFxProcessWork @ 0x1403B8BD0 (PopFxProcessWork.c)
 *     PopFxActivateComponentDependents @ 0x1403BC2E0 (PopFxActivateComponentDependents.c)
 *     IopDequeueIrpFromFileObject @ 0x1403E17A0 (IopDequeueIrpFromFileObject.c)
 *     PpmIdleSnapConcurrency @ 0x140418B30 (PpmIdleSnapConcurrency.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x14042CB64 (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPCIConfig @ 0x14042CDA0 (HalpPCIConfig.c)
 *     EtwpApcPoolThunk @ 0x14043FEF0 (EtwpApcPoolThunk.c)
 *     IopSetLockOperationProcess @ 0x14044F7F0 (IopSetLockOperationProcess.c)
 *     PsGetJobProperty @ 0x140457450 (PsGetJobProperty.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x140463E10 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     KeAcquireInterruptSpinLock @ 0x140470280 (KeAcquireInterruptSpinLock.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     KasanDriverUnloadImage @ 0x1405DFDF0 (KasanDriverUnloadImage.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 */

void __fastcall KiAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // esi
  int v4; // r14d
  int v5; // r8d
  char v6; // bp
  int v7; // eax
  unsigned __int64 v8; // r9
  _DWORD *EtwSupport; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  v5 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v12 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v7 = KxWaitForSpinLockAndAcquire(a1);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v5 = v7;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v7;
  }
  if ( v6 )
  {
    v8 = __rdtsc();
    EtwSupport = KeGetCurrentPrcb()->EtwSupport;
    v10 = *((unsigned __int8 *)EtwSupport + 272);
    if ( (unsigned __int8)v10 >= 8u )
    {
      ++EtwSupport[69];
    }
    else
    {
      *((_BYTE *)EtwSupport + 272) = v10 + 1;
      v11 = 8LL * v10;
      *(_QWORD *)&EtwSupport[v11 + 4] = v8;
      EtwSupport[v11 + 8] = v8 - v4;
      EtwSupport[v11 + 9] = v5;
      *(_QWORD *)&EtwSupport[v11 + 6] = a1;
      EtwSupport[v11 + 10] = InterruptCount;
      LOBYTE(EtwSupport[v11 + 11]) = 0;
    }
  }
}
