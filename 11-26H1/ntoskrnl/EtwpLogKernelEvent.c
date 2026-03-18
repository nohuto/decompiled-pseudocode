/*
 * XREFs of EtwpLogKernelEvent @ 0x14032CDC0
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A5C0 (EtwpTraceStackWalk.c)
 *     EtwpTraceFileIo @ 0x140212800 (EtwpTraceFileIo.c)
 *     EtwpTraceFileName @ 0x140215A90 (EtwpTraceFileName.c)
 *     EtwTracePageFault @ 0x140215FC0 (EtwTracePageFault.c)
 *     EtwpTraceIo @ 0x1402163D0 (EtwpTraceIo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216A20 (EtwTraceSiloKernelEvent.c)
 *     EtwpCCSwapFlush @ 0x140217500 (EtwpCCSwapFlush.c)
 *     EtwTraceReadyThread @ 0x140218760 (EtwTraceReadyThread.c)
 *     EtwpTraceLastBranchRecord @ 0x140263D10 (EtwpTraceLastBranchRecord.c)
 *     PerfInfoLogInterrupt @ 0x1402C3980 (PerfInfoLogInterrupt.c)
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     EtwTraceTimedEvent @ 0x14032B770 (EtwTraceTimedEvent.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     EtwpTraceStackKey @ 0x14032C740 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x14032CCA0 (EtwpDereferenceStackEntry.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     EtwpLogMemInfo @ 0x14034843C (EtwpLogMemInfo.c)
 *     EtwTraceSiloTimedEvent @ 0x14038CBFC (EtwTraceSiloTimedEvent.c)
 *     EtwTracePool @ 0x1403C0B34 (EtwTracePool.c)
 *     EtwpTraceCachedStack @ 0x140471860 (EtwpTraceCachedStack.c)
 *     EtwpTraceImageUnload @ 0x1404760E8 (EtwpTraceImageUnload.c)
 *     PerfInfoLogInterruptHv @ 0x14047D4E0 (PerfInfoLogInterruptHv.c)
 *     EtwTraceSiloDcEvent @ 0x1404BB2C4 (EtwTraceSiloDcEvent.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1404CE4E8 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1404F0820 (PerfInfoLogIpiSend.c)
 *     EtwpTraceContextRegisters @ 0x1406C4208 (EtwpTraceContextRegisters.c)
 *     EtwTraceScbRundown @ 0x1406C4DC4 (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x1406C4EDC (EtwTraceSchedulingGroupRundown.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x1406C50FC (EtwTraceThreadSchedulingGroupRundown.c)
 *     EtwpWriteProcessorTrace @ 0x1406C8520 (EtwpWriteProcessorTrace.c)
 *     EtwpLogTxREvent @ 0x140827ECC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x14082F35C (EtwLogPfnInfoRundown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x14082F448 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpObjectHandleEnumCallback @ 0x14082F620 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x14082F85C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x14082F9B8 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x14082FBE8 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14082FECC (EtwpSpinLockConfigRunDown.c)
 *     EtwpTraceProcessRundown @ 0x14096D72C (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x14096F07C (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateAddressSpace @ 0x1409FD0D0 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A708A8 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A70914 (EtwpLogGroupMask.c)
 *     EtwpSystemImageEnumCallback @ 0x140AB7220 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogMemInfoWsHelper @ 0x140AF260C (EtwpLogMemInfoWsHelper.c)
 *     EtwpSampledProfileRunDown @ 0x140B03A48 (EtwpSampledProfileRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x140B24C50 (EtwpLogPmcCounterRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140B2E130 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpClockSourceRunDown @ 0x140B5DA54 (EtwpClockSourceRunDown.c)
 * Callees:
 *     EtwpStackTraceDispatcher @ 0x14020A3A0 (EtwpStackTraceDispatcher.c)
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwpCloseLogger @ 0x140218150 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x1402181E4 (EtwpOpenLogger.c)
 *     EtwpReserveWithPmcCounters @ 0x140218290 (EtwpReserveWithPmcCounters.c)
 *     EtwpReserveTraceBuffer @ 0x140218410 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x1402189D0 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpReserveWithPebsIndex @ 0x1402189FC (EtwpReserveWithPebsIndex.c)
 *     EtwpUpdateEventsLostCount @ 0x1402574C0 (EtwpUpdateEventsLostCount.c)
 *     EtwpTraceLastBranchRecord @ 0x140263D10 (EtwpTraceLastBranchRecord.c)
 *     EtwpCopyEventData @ 0x140412D50 (EtwpCopyEventData.c)
 *     LBR_TRACING_ENABLED @ 0x140413468 (LBR_TRACING_ENABLED.c)
 *     IPT_TRACING_ENABLED @ 0x1404134B0 (IPT_TRACING_ENABLED.c)
 *     CONTEXT_TRACING_ENABLED @ 0x140413500 (CONTEXT_TRACING_ENABLED.c)
 *     EtwpSendTraceEvent @ 0x1404A92C8 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A93C4 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLostSystemEvent @ 0x1404D81F4 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceProcessorTrace @ 0x1404D92B0 (EtwpTraceProcessorTrace.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x140507CB4 (EtwpContextRegisterTracingDispatcher.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // r15d
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int16 v14; // si
  __int64 v15; // rax
  void *v16; // r14
  unsigned int v17; // r12d
  volatile signed __int64 *v18; // rdx
  signed __int64 *v19; // roff
  signed __int64 v20; // rax
  unsigned __int64 v21; // r8
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  int *v24; // rcx
  __int64 v25; // rcx
  __int64 i; // rdx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v28; // rax
  unsigned int ReserveTraceBufferStatus; // r14d
  __int64 v30; // rax
  __int64 v31; // rax
  char v32[8]; // [rsp+30h] [rbp-38h] BYREF
  signed __int64 v33; // [rsp+38h] [rbp-30h] BYREF
  __int128 v34; // [rsp+40h] [rbp-28h] BYREF
  __int64 v35; // [rsp+50h] [rbp-18h]

  v32[0] = 0;
  v35 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  result = EtwpOpenLogger(a3, a2, 0LL, v32);
  v9 = result;
  if ( !result )
    return result;
  v10 = 0;
  if ( a4 )
  {
    v11 = (_DWORD *)(a1 + 8);
    v12 = a4;
    do
    {
      v10 += *v11;
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  if ( (a6 & 0x100) != 0 )
  {
    if ( (a6 & 0x10000000) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v28 = EtwpReserveTraceBuffer((unsigned int *)v9, v10 + 32, (__int64)&v34, &v33, a6);
      v14 = a5;
      if ( v28 )
      {
        *(_DWORD *)v28 = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(v28 + 16) = v33;
        *(_WORD *)(v28 + 4) = v10 + 32;
        *(_WORD *)(v28 + 6) = a5;
        *(_DWORD *)(v28 + 8) = CurrentThread[1].CurrentRunTime;
        *(_DWORD *)(v28 + 12) = CurrentThread[1].CycleTime;
        *(_DWORD *)(v28 + 24) = CurrentThread->SchedulerApc.SpareLong0;
        *(_DWORD *)(v28 + 28) = CurrentThread->UserTime;
        v16 = (void *)(v28 + 32);
      }
      else
      {
        v16 = 0LL;
      }
      goto LABEL_9;
    }
    v31 = EtwpReserveTraceBuffer((unsigned int *)v9, v10 + 24, (__int64)&v34, &v33, a6);
    v14 = a5;
    if ( v31 )
    {
      *(_WORD *)(v31 + 4) = v10 + 24;
      *(_WORD *)(v31 + 6) = a5;
      *(_DWORD *)v31 = (unsigned __int8)a6 | 0xC0040000;
      *(_QWORD *)(v31 + 16) = v33;
      *(_DWORD *)(v31 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(v31 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v16 = (void *)(v31 + 24);
      goto LABEL_9;
    }
    goto LABEL_39;
  }
  v13 = *(_DWORD *)(v9 + 816);
  v14 = a5;
  if ( (v13 & 0xC00) != 0 )
  {
    if ( (v13 & 0x400) != 0 && a5 == 1316 )
    {
      v30 = EtwpReserveWithPebsIndex((unsigned int *)v9, 1316, v10, (__int64)&v34, &v33, a6);
LABEL_43:
      v16 = (void *)v30;
      goto LABEL_9;
    }
    if ( (v13 & 0x800) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v9 + 1064) + 8LL); i = (unsigned int)(i + 1) )
      {
        if ( *(_WORD *)(*(_QWORD *)(v9 + 1064) + 2 * i + 12) == a5 )
        {
          v30 = EtwpReserveWithPmcCounters(v9, a5, v10, (int)&v34, &v33, a6);
          goto LABEL_43;
        }
      }
    }
  }
  v15 = EtwpReserveTraceBuffer((unsigned int *)v9, v10 + 16, (__int64)&v34, &v33, a6);
  if ( !v15 )
  {
LABEL_39:
    v16 = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)(v15 + 8) = v33;
  *(_WORD *)(v15 + 4) = v10 + 16;
  *(_DWORD *)v15 = (unsigned __int8)a6 | 0xC0110000;
  *(_WORD *)(v15 + 6) = a5;
  v16 = (void *)(v15 + 16);
LABEL_9:
  if ( v16 )
  {
    v17 = EtwpCopyEventData(v16);
    if ( v17 )
    {
      memset_0(v16, 0, v10);
      EtwpUpdateEventsLostCount(v9);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
        EtwpTraceLostSystemEvent(v14, v9 + 136, a6, v17);
    }
    if ( (*(_DWORD *)(v9 + 12) & 0x80000) != 0
      && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
    {
      EtwpSendTraceEvent(v9, &v34);
    }
    if ( *(_QWORD *)(v9 + 1552) )
      EtwpInvokeEventCallback(v9, &v34, 0LL, 0LL);
    v18 = (volatile signed __int64 *)*((_QWORD *)&v34 + 1);
    v19 = (signed __int64 *)*((_QWORD *)&v34 + 1);
    _m_prefetchw(*((const void **)&v34 + 1));
    v20 = *v19;
    v21 = v34;
    while ( (v20 ^ v21) < 0xF )
    {
      v22 = v20;
      v20 = _InterlockedCompareExchange64(v18, v20 + 1, v20);
      if ( v22 == v20 )
        goto LABEL_17;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
LABEL_17:
    if ( (*(_DWORD *)(v9 + 816) & 0x80u) != 0
      && ((*(char *)(((unsigned __int64)(v14 & 0x1FFF) >> 3) + *(_QWORD *)(v9 + 1048)) >> (v14 & 7)) & 1) != 0 )
    {
      EtwpStackTraceDispatcher(v9, (unsigned int *)&v33, 0LL, a6);
    }
    if ( (unsigned __int8)CONTEXT_TRACING_ENABLED(v9, v14) )
      EtwpContextRegisterTracingDispatcher(v23, &v33, 0LL, a6);
    if ( (unsigned __int8)LBR_TRACING_ENABLED(v9, v14) )
      EtwpTraceLastBranchRecord(v24, &v33, 0LL, a6);
    if ( (unsigned __int8)IPT_TRACING_ENABLED(v9, v14) )
      EtwpTraceProcessorTrace(v25, &v33, 0LL, a6);
  }
  else
  {
    ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v9, v10);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      EtwpTraceLostSystemEvent(v14, v9 + 136, a6, ReserveTraceBufferStatus);
  }
  return EtwpCloseLogger(a3, a2, v32[0]);
}
