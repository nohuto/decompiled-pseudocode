/*
 * XREFs of KeInitializeApc @ 0x14044ED90
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x1405CD930 (IoRaiseHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406CC720 (EtwpCovSampCaptureQueueApc.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078E2D4 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F60E4 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x140800794 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
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
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 48) = a6;
  if ( !a6 )
    a7 = 0;
  *(_BYTE *)(a1 + 81) = a7;
  result = a8;
  if ( !a6 )
    result = 0LL;
  *(_QWORD *)(a1 + 56) = result;
  *(_BYTE *)(a1 + 82) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  return result;
}
