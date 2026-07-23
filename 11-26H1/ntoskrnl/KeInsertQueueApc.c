/*
 * XREFs of KeInsertQueueApc @ 0x14020AE70
 * Callers:
 *     MiStoreModifiedWriteDereference @ 0x14020A990 (MiStoreModifiedWriteDereference.c)
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403FDED0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 *     IoRaiseInformationalHardError @ 0x1404D9300 (IoRaiseInformationalHardError.c)
 *     MiStoreAttemptContractPageFile @ 0x1404DE9D4 (MiStoreAttemptContractPageFile.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1404E18A4 (MiQueueSyncModifiedWriterApc.c)
 *     IoRaiseHardError @ 0x1405CD930 (IoRaiseHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 *     ExpTimerDpcRoutine @ 0x1406D35D0 (ExpTimerDpcRoutine.c)
 *     UcOnUnexpectedCodePath @ 0x140717648 (UcOnUnexpectedCodePath.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078E2D4 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F60E4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x140800794 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadList @ 0x14094A788 (IopCancelIrpsInThreadList.c)
 *     PspSetContextThreadInternal @ 0x1409E8B30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A7BC1C (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x140A7BE9C (PspRecheckThreadPasidMsrState.c)
 *     NtQueueApcThreadEx2 @ 0x140A86690 (NtQueueApcThreadEx2.c)
 *     PerfLogImageUnload @ 0x140ABB148 (PerfLogImageUnload.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140B2E5B0 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140259188 (EtwTiLogInsertQueueUserApc.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
  if ( EtwThreatIntProvRegHandle )
  {
    if ( (v19 = *(_QWORD *)(EtwThreatIntProvRegHandle + 32), *(_DWORD *)(v19 + 96))
      && (*(_DWORD *)(v19 + 112) & 0x3000LL) != 0
      && (*(_QWORD *)(v19 + 120) & 0x3000LL) == *(_QWORD *)(v19 + 120)
      || *(_WORD *)(EtwThreatIntProvRegHandle + 102)
      && (v20 = *(_QWORD *)(EtwThreatIntProvRegHandle + 40), *(_DWORD *)(v20 + 96))
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
