/*
 * XREFs of EtwpLogKernelEvent @ 0x14032EDF0
 * Callers:
 *     EtwpTraceStackWalk @ 0x14020A6A0 (EtwpTraceStackWalk.c)
 *     EtwpTraceFileIo @ 0x1402128E0 (EtwpTraceFileIo.c)
 *     EtwpTraceFileName @ 0x140215DC0 (EtwpTraceFileName.c)
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     EtwpTraceIo @ 0x140216700 (EtwpTraceIo.c)
 *     EtwTraceSiloKernelEvent @ 0x140216D50 (EtwTraceSiloKernelEvent.c)
 *     EtwpCCSwapFlush @ 0x140217830 (EtwpCCSwapFlush.c)
 *     EtwTraceReadyThread @ 0x140218A90 (EtwTraceReadyThread.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     PerfInfoLogInterrupt @ 0x14030E640 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x14032D7A0 (EtwTraceTimedEvent.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     EtwpDereferenceStackEntry @ 0x14032ECD0 (EtwpDereferenceStackEntry.c)
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 *     EtwpLogMemInfo @ 0x14034A4BC (EtwpLogMemInfo.c)
 *     EtwTraceSiloTimedEvent @ 0x14038E9A8 (EtwTraceSiloTimedEvent.c)
 *     EtwTracePool @ 0x1403CAA34 (EtwTracePool.c)
 *     EtwpTraceCachedStack @ 0x14046AFE0 (EtwpTraceCachedStack.c)
 *     EtwpTraceImageUnload @ 0x14046F868 (EtwpTraceImageUnload.c)
 *     PerfInfoLogInterruptHv @ 0x140476E50 (PerfInfoLogInterruptHv.c)
 *     EtwTraceSiloDcEvent @ 0x1404B4AA4 (EtwTraceSiloDcEvent.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1404C7F18 (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1404E9E00 (PerfInfoLogIpiSend.c)
 *     EtwpTraceContextRegisters @ 0x1406C7E48 (EtwpTraceContextRegisters.c)
 *     EtwTraceScbRundown @ 0x1406C8A04 (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x1406C8B1C (EtwTraceSchedulingGroupRundown.c)
 *     EtwTraceThreadSchedulingGroupRundown @ 0x1406C8D3C (EtwTraceThreadSchedulingGroupRundown.c)
 *     EtwpWriteProcessorTrace @ 0x1406CC500 (EtwpWriteProcessorTrace.c)
 *     EtwpLogTxREvent @ 0x14082E10C (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x14083559C (EtwLogPfnInfoRundown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x140835688 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpObjectHandleEnumCallback @ 0x140835860 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140835A9C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140835BF8 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14083610C (EtwpSpinLockConfigRunDown.c)
 *     EtwpEnumerateAddressSpace @ 0x140921CD0 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409BA2C0 (EtwpLogMemInfoWsHelper.c)
 *     EtwpSysModuleRunDown @ 0x1409BC6CC (EtwpSysModuleRunDown.c)
 *     EtwpTraceProcessRundown @ 0x1409BC8DC (EtwpTraceProcessRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1409BDD0C (EtwpProcessPerfCtrsRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A9A15C (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A9A1C8 (EtwpLogGroupMask.c)
 *     EtwpLogPmcCounterRundown @ 0x140A9A250 (EtwpLogPmcCounterRundown.c)
 *     EtwpSystemImageEnumCallback @ 0x140AB8860 (EtwpSystemImageEnumCallback.c)
 *     EtwpSampledProfileRunDown @ 0x140B05658 (EtwpSampledProfileRunDown.c)
 *     EtwpClockSourceRunDown @ 0x140B60BD4 (EtwpClockSourceRunDown.c)
 * Callees:
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     EtwpReserveWithPmcCounters @ 0x1402185C0 (EtwpReserveWithPmcCounters.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140218D00 (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpReserveWithPebsIndex @ 0x140218D2C (EtwpReserveWithPebsIndex.c)
 *     EtwpUpdateEventsLostCount @ 0x140258E50 (EtwpUpdateEventsLostCount.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     EtwpCopyEventData @ 0x140407380 (EtwpCopyEventData.c)
 *     LBR_TRACING_ENABLED @ 0x140407A98 (LBR_TRACING_ENABLED.c)
 *     IPT_TRACING_ENABLED @ 0x140407AE0 (IPT_TRACING_ENABLED.c)
 *     CONTEXT_TRACING_ENABLED @ 0x140407B30 (CONTEXT_TRACING_ENABLED.c)
 *     EtwpSendTraceEvent @ 0x1404A2958 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1404A2A54 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLostSystemEvent @ 0x1404D19C4 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceProcessorTrace @ 0x1404D2990 (EtwpTraceProcessorTrace.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x140501688 (EtwpContextRegisterTracingDispatcher.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_SYSTEM_EVENT) )
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
    if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_SYSTEM_EVENT) )
      EtwpTraceLostSystemEvent(v14, v9 + 136, a6, ReserveTraceBufferStatus);
  }
  return EtwpCloseLogger(a3, a2, v32[0]);
}
