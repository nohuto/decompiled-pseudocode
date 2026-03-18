/*
 * XREFs of KiAcquireSpinLockInstrumented @ 0x14032F380
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
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
