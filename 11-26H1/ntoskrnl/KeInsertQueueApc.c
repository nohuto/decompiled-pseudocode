/*
 * XREFs of KeInsertQueueApc @ 0x14020AD90
 * Callers:
 *     MiStoreModifiedWriteDereference @ 0x14020A8B0 (MiStoreModifiedWriteDereference.c)
 *     EtwpQueueApc @ 0x14020AA10 (EtwpQueueApc.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     IopCopyCompleteReadIrp @ 0x14040FA00 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x14045B5C0 (IopCompleteRequest.c)
 *     IoRaiseInformationalHardError @ 0x1404DFC20 (IoRaiseInformationalHardError.c)
 *     MiStoreAttemptContractPageFile @ 0x1404E5434 (MiStoreAttemptContractPageFile.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404E84E4 (MiQueueSyncModifiedWriterApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405291D8 (EtwpTraceThreadRundownWithStack.c)
 *     IoRaiseHardError @ 0x1405CB060 (IoRaiseHardError.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 *     ExpTimerDpcRoutine @ 0x1406CF5A0 (ExpTimerDpcRoutine.c)
 *     UcOnUnexpectedCodePath @ 0x140712950 (UcOnUnexpectedCodePath.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078B7A4 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F0584 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x1407FAD64 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadList @ 0x140956D60 (IopCancelIrpsInThreadList.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A036E0 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x140A04124 (PspRecheckThreadPasidMsrState.c)
 *     NtQueueApcThreadEx2 @ 0x140A80820 (NtQueueApcThreadEx2.c)
 *     PerfLogImageUnload @ 0x140AB9C84 (PerfLogImageUnload.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140B2C530 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B6131C (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B070 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B1E0 (KiSignalThreadForApc.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     EtwTiLogInsertQueueUserApc @ 0x1402579A8 (EtwTiLogInsertQueueUserApc.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r13
  bool v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  bool v11; // zf
  char v12; // r15
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v15; // ebp
  char v16; // bp
  unsigned __int8 v17; // di
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  char v23; // [rsp+90h] [rbp+8h]

  v5 = a3;
  v7 = 0;
  if ( *(_QWORD *)&EtwpSecurityLock.AbWaitEntryCount )
  {
    if ( (v19 = *(_QWORD *)(*(_QWORD *)&EtwpSecurityLock.AbWaitEntryCount + 32LL), *(_DWORD *)(v19 + 96))
      && (*(_DWORD *)(v19 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v19 + 120) & 0x3000LL) == *(_QWORD *)(v19 + 120)
      || *(_WORD *)(*(_QWORD *)&EtwpSecurityLock.AbWaitEntryCount + 102LL)
      && (v20 = *(_QWORD *)(*(_QWORD *)&EtwpSecurityLock.AbWaitEntryCount + 40LL), *(_DWORD *)(v20 + 96))
      && (*(_DWORD *)(v20 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v20 + 120) & 0x3000LL) == *(_QWORD *)(v20 + 120) )
    {
      v7 = 1;
    }
  }
  v8 = *(unsigned __int8 *)(a1 + 81);
  v21 = *(_QWORD *)(a1 + 56);
  v22 = *(_QWORD *)(a1 + 48);
  v23 = (_BYTE)v8 != 0;
  if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) != KeSpecialUserApcKernelRoutine || (_BYTE)v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    LOBYTE(a3) = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (_BYTE)v8 )
    {
      v11 = CurrentThread->Process == *(_KPROCESS **)(v9 + 544);
      goto LABEL_6;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    LOBYTE(a3) = 1;
    CurrentThread = KeGetCurrentThread();
  }
  v11 = CurrentThread->ApcState.Process == *(_KPROCESS **)(v9 + 544);
LABEL_6:
  if ( v7 && !v11 && ((_BYTE)v8 || (_BYTE)a3) )
  {
    v12 = 1;
    ObfReferenceObjectWithTag((PVOID)v9, 0x5149654Bu);
  }
  else
  {
    v12 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CurrentThread) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, CurrentThread);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, CurrentThread, a3) )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v9 + 64) );
  }
  if ( (*(_DWORD *)(v9 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v16 = a2;
    v17 = 0;
  }
  else
  {
    v16 = a2;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = v5;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc(CurrentPrcb, a1, CurrentIrql, 0LL);
    v17 = 1;
  }
  *(_QWORD *)(v9 + 64) = 0LL;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
  if ( v12 )
  {
    if ( v17 )
      EtwTiLogInsertQueueUserApc((unsigned __int8)KeGetCurrentThread()->PreviousMode, v9, v22, v21, v16, v5, v23);
    ObfDereferenceObjectWithTag((PVOID)v9, 0x5149654Bu);
  }
  return v17;
}
