/*
 * XREFs of KeInitializeApc @ 0x140457520
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14040FA00 (IopCopyCompleteReadIrp.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405291D8 (EtwpTraceThreadRundownWithStack.c)
 *     IoRaiseHardError @ 0x1405CB060 (IoRaiseHardError.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406C8740 (EtwpCovSampCaptureQueueApc.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14078B7A4 (DbgkpLkmdLaunchSnapApc.c)
 *     PsUpdateSvmProcessPasidAllThreads @ 0x1407F0584 (PsUpdateSvmProcessPasidAllThreads.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x1407FAD64 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadList @ 0x140956D60 (IopCancelIrpsInThreadList.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x1409EC360 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140A036E0 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspRecheckThreadPasidMsrState @ 0x140A04124 (PspRecheckThreadPasidMsrState.c)
 *     NtQueueApcThreadEx2 @ 0x140A80820 (NtQueueApcThreadEx2.c)
 *     PerfLogImageUnload @ 0x140AB9C84 (PerfLogImageUnload.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140B2C530 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B6131C (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140C07424 (KeInitThread.c)
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
