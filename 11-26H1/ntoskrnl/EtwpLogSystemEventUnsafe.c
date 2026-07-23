/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x140406FB0
 * Callers:
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     EtwpSetMark @ 0x140778508 (EtwpSetMark.c)
 *     EtwpTraceRegistry @ 0x140A099F0 (EtwpTraceRegistry.c)
 * Callees:
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x140218D00 (EtwpGetReserveTraceBufferStatus.c)
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

signed __int64 __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7,
        char a8)
{
  _DWORD *v8; // r13
  signed __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // esi
  _DWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // ecx
  unsigned __int16 v17; // r14
  void *v18; // r12
  __int64 v19; // r9
  unsigned int v20; // r13d
  volatile signed __int64 *v21; // rdx
  signed __int64 *v22; // roff
  signed __int64 v23; // rax
  unsigned __int64 v24; // r8
  signed __int64 v25; // rtt
  int v26; // eax
  __int64 v27; // rcx
  int *v28; // rcx
  __int64 v29; // rcx
  unsigned int ReserveTraceBufferStatus; // esi
  char v31[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+34h] [rbp-74h]
  unsigned int v33; // [rsp+38h] [rbp-70h]
  signed __int64 v34[3]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v35; // [rsp+58h] [rbp-50h] BYREF
  __int64 v36; // [rsp+68h] [rbp-40h]
  _KTHREAD *v38; // [rsp+C0h] [rbp+18h]

  v38 = (_KTHREAD *)a3;
  v8 = (_DWORD *)a3;
  v35 = 0LL;
  v36 = 0LL;
  v31[0] = 0;
  v34[0] = 0LL;
  LOBYTE(a3) = 1;
  result = EtwpOpenLogger(a4, a1, a3, v31);
  v11 = result;
  v34[2] = result;
  if ( result )
  {
    v12 = 0;
    v32 = 0;
    if ( a5 )
    {
      v13 = (_DWORD *)(a2 + 8);
      v14 = a5;
      do
      {
        v12 += *v13;
        v13 += 4;
        --v14;
      }
      while ( v14 );
      v32 = v12;
    }
    v15 = EtwpReserveTraceBuffer((unsigned int *)v11, v12 + 32, (__int64)&v35, v34, a7);
    if ( v15 )
    {
      v16 = -1073676288;
      if ( (a7 & 0xC0000000) != 0x80000000 )
        v16 = -1073610752;
      *(_DWORD *)v15 = (unsigned __int8)a7 | v16;
      *(_QWORD *)(v15 + 16) = v34[0];
      *(_WORD *)(v15 + 4) = v12 + 32;
      v17 = a6;
      *(_WORD *)(v15 + 6) = a6;
      *(_DWORD *)(v15 + 8) = v8[324];
      *(_DWORD *)(v15 + 12) = v8[322];
      *(_DWORD *)(v15 + 24) = v8[163];
      *(_DWORD *)(v15 + 28) = v8[183];
      v18 = (void *)(v15 + 32);
    }
    else
    {
      v18 = 0LL;
      v17 = a6;
    }
    v34[1] = (signed __int64)v18;
    if ( v18 )
    {
      v20 = EtwpCopyEventData(v18);
      v33 = v20;
      if ( v20 )
      {
        memset_0(v18, 0, v12);
        EtwpUpdateEventsLostCount(v11);
        if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_SYSTEM_EVENT) )
          EtwpTraceLostSystemEvent(v17, v11 + 136, a7, v20);
      }
      if ( (*(_DWORD *)(v11 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v11, &v35);
      }
      if ( *(_QWORD *)(v11 + 1552) )
      {
        LOBYTE(v19) = a8;
        EtwpInvokeEventCallback(v11, &v35, 0LL, v19);
      }
      v21 = (volatile signed __int64 *)*((_QWORD *)&v35 + 1);
      v22 = (signed __int64 *)*((_QWORD *)&v35 + 1);
      _m_prefetchw(*((const void **)&v35 + 1));
      v23 = *v22;
      v24 = v35;
      while ( (v23 ^ v24) < 0xF )
      {
        v25 = v23;
        v23 = _InterlockedCompareExchange64(v21, v23 + 1, v23);
        if ( v25 == v23 )
        {
          v26 = 1;
          goto LABEL_19;
        }
      }
      v26 = 0;
LABEL_19:
      if ( !v26 )
        _InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
      if ( (*(_DWORD *)(v11 + 816) & 0x80u) != 0
        && ((*(char *)(((unsigned __int64)(v17 & 0x1FFF) >> 3) + *(_QWORD *)(v11 + 1048)) >> (v17 & 7)) & 1) != 0 )
      {
        EtwpStackTraceDispatcher(v11, (unsigned int *)v34, v38, a7);
      }
      if ( (unsigned __int8)CONTEXT_TRACING_ENABLED(v11, v17) )
        EtwpContextRegisterTracingDispatcher(v27, v34, v38, a7);
      if ( (unsigned __int8)LBR_TRACING_ENABLED(v11, v17) )
        EtwpTraceLastBranchRecord(v28, v34, v38, a7);
      if ( (unsigned __int8)IPT_TRACING_ENABLED(v11, v17) )
        EtwpTraceProcessorTrace(v29, v34, v38, a7);
    }
    else
    {
      ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v11, v12);
      if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_SYSTEM_EVENT) )
        EtwpTraceLostSystemEvent(v17, v11 + 136, a7, ReserveTraceBufferStatus);
    }
    return EtwpCloseLogger(a4, a1, v31[0]);
  }
  return result;
}
