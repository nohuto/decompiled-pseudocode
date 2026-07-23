/*
 * XREFs of EtwpLogContextSwapEvent @ 0x1404075AC
 * Callers:
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     EtwTraceContextSwap @ 0x140407410 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwpCCSwapTrace @ 0x1402174B0 (EtwpCCSwapTrace.c)
 *     EtwpReserveWithPmcCounters @ 0x1402185C0 (EtwpReserveWithPmcCounters.c)
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     EtwpReserveWithPebsIndex @ 0x140218D2C (EtwpReserveWithPebsIndex.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     EtwpTraceLastBranchRecord @ 0x140263280 (EtwpTraceLastBranchRecord.c)
 *     LBR_TRACING_ENABLED @ 0x140407A98 (LBR_TRACING_ENABLED.c)
 *     IPT_TRACING_ENABLED @ 0x140407AE0 (IPT_TRACING_ENABLED.c)
 *     CONTEXT_TRACING_ENABLED @ 0x140407B30 (CONTEXT_TRACING_ENABLED.c)
 *     EtwpTraceLostSystemEvent @ 0x1404D19C4 (EtwpTraceLostSystemEvent.c)
 *     EtwpTraceProcessorTrace @ 0x1404D2990 (EtwpTraceProcessorTrace.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x140501688 (EtwpContextRegisterTracingDispatcher.c)
 */

void __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v4; // r14
  bool v5; // zf
  int v8; // r12d
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int *v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  volatile signed __int64 *v24; // rdx
  signed __int64 *v25; // roff
  signed __int64 v26; // rax
  unsigned __int64 v27; // r8
  signed __int64 v28; // rtt
  __int64 i; // rdx
  __int64 v30; // rcx
  char v31; // cl
  __int64 v32; // rax
  __int64 v33; // rax
  _OWORD v34[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _KPRCB *LoggerTimeStamp; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a1 + 4520);
  v4 = a2;
  LoggerTimeStamp = 0LL;
  v5 = !_BitScanForward((unsigned int *)&a2, v3);
  v8 = 0;
  v34[0] = 0LL;
  if ( !v5 )
  {
    v9 = 1316;
    while ( 1 )
    {
      v10 = (unsigned int)a2;
      v3 &= v3 - 1;
      v11 = a1 + 32 * a2 + 4556;
      if ( !v11 )
        goto LABEL_4;
      if ( (*(_DWORD *)(v11 + 4) & 4) == 0 )
        goto LABEL_4;
      if ( (unsigned int)*(unsigned __int8 *)(a1 + 2 * v10 + 4504) >= *(_DWORD *)(a1 + 16) )
        goto LABEL_4;
      _mm_lfence();
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL * *(unsigned __int8 *)(a1 + 2 * v10 + 4504));
      if ( (v12 & 1) != 0 )
        goto LABEL_4;
      if ( (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
      {
        v13 = 1 << *(_DWORD *)(v12 + 200);
        if ( (~v8 & v13) != 0 )
        {
          LoggerTimeStamp = (struct _KPRCB *)EtwpGetLoggerTimeStamp(v12);
          EtwpCCSwapTrace(v4, a3, *(_DWORD *)(v12 + 200), &LoggerTimeStamp);
          v8 |= v13;
        }
        v14 = v12;
        goto LABEL_13;
      }
      v19 = *(_DWORD *)(v12 + 816);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8LL * *(unsigned __int8 *)(a1 + 2 * v10 + 4504));
      if ( (v19 & 0xC00) == 0 )
        goto LABEL_24;
      if ( (v19 & 0x400) == 0 )
        break;
      v33 = EtwpReserveWithPebsIndex(
              (unsigned int *)v12,
              v9,
              28,
              (__int64)v34,
              (signed __int64 *)&LoggerTimeStamp,
              5265925);
LABEL_64:
      v21 = v33;
LABEL_26:
      if ( !v21 )
      {
LABEL_68:
        if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_LOST_SYSTEM_EVENT) )
          EtwpTraceLostSystemEvent(1316LL, v12 + 136, 5265925LL, 3221225495LL);
        goto LABEL_67;
      }
      *(_OWORD *)v21 = 0LL;
      *(_QWORD *)(v21 + 16) = 0LL;
      *(_DWORD *)(v21 + 24) = 0;
      if ( v4 )
      {
        *(_DWORD *)(v21 + 4) = *(_DWORD *)(v4 + 1296);
        *(_BYTE *)(v21 + 9) = *(_BYTE *)(v4 + 195);
        *(_BYTE *)(v21 + 12) = *(_BYTE *)(v4 + 643);
        *(_BYTE *)(v21 + 13) ^= (*(_BYTE *)(v4 + 391) ^ *(_BYTE *)(v21 + 13)) & 1;
        *(_BYTE *)(v21 + 14) = *(_BYTE *)(v4 + 388);
        *(_BYTE *)(v21 + 15) = *(_DWORD *)(v4 + 588);
        *(_BYTE *)(v21 + 13) ^= (*(_BYTE *)(v21 + 13) ^ (2 * *(_BYTE *)(v4 + 516))) & 0xE;
        *(_DWORD *)(v21 + 20) = (*(_QWORD *)(v4 + 32) - *(_QWORD *)(v4 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_KTHREAD *)v4 == CurrentPrcb->IdleThread )
        {
          IdleStates = CurrentPrcb->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v21 + 10) = IdleStates->ActualState;
        }
        else
        {
          v30 = *(_QWORD *)(v4 + 104);
          if ( v30 )
          {
            v32 = v30 + CurrentPrcb->ScbOffset;
            while ( *(_DWORD *)(v32 + 140) <= 0xFFu )
            {
              v31 = *(_BYTE *)(v32 + 140);
              if ( !v31 )
              {
                v32 = *(_QWORD *)(v32 + 440);
                if ( v32 )
                  continue;
              }
              goto LABEL_54;
            }
            v31 = -1;
          }
          else
          {
            v31 = 0;
          }
LABEL_54:
          *(_BYTE *)(v21 + 10) = v31;
        }
        if ( *(_DWORD *)(v4 + 484) )
          *(_BYTE *)(v21 + 24) |= 1u;
        if ( *(_WORD *)(v4 + 486) || *(_BYTE *)(v4 + 390) )
          *(_BYTE *)(v21 + 24) |= 2u;
      }
      if ( a3 )
      {
        *(_DWORD *)v21 = *(_DWORD *)(a3 + 1296);
        *(_BYTE *)(v21 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v21 + 11) = *(_BYTE *)(a3 + 518);
        *(_BYTE *)(v21 + 13) ^= (*(_BYTE *)(v21 + 13) ^ (16 * *(_BYTE *)(a3 + 516))) & 0x70;
        *(_DWORD *)(v21 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
        if ( *(_DWORD *)(a3 + 484) )
          *(_BYTE *)(v21 + 24) |= 4u;
        if ( *(_WORD *)(a3 + 486) || *(_BYTE *)(a3 + 390) )
          *(_BYTE *)(v21 + 24) |= 8u;
      }
      v24 = (volatile signed __int64 *)*((_QWORD *)&v34[0] + 1);
      v25 = (signed __int64 *)*((_QWORD *)&v34[0] + 1);
      _m_prefetchw(*((const void **)&v34[0] + 1));
      v26 = *v25;
      v27 = *(_QWORD *)&v34[0];
      while ( (v26 ^ v27) < 0xF )
      {
        v28 = v26;
        v26 = _InterlockedCompareExchange64(v24, v26 + 1, v26);
        if ( v28 == v26 )
          goto LABEL_13;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
LABEL_13:
      if ( !a3 )
        goto LABEL_67;
      if ( (*(_DWORD *)(v14 + 816) & 0x80u) != 0 && (*(_BYTE *)(*(_QWORD *)(v14 + 1048) + 164LL) & 0x10) != 0 )
        EtwpStackTraceDispatcher(v14, (unsigned int *)&LoggerTimeStamp, (_KTHREAD *)a3, 0x505A05u);
      if ( (unsigned __int8)CONTEXT_TRACING_ENABLED(v14, 1316LL) )
        EtwpContextRegisterTracingDispatcher(v15, &LoggerTimeStamp, a3, 5265925LL);
      if ( (unsigned __int8)LBR_TRACING_ENABLED(v14, 1316LL) )
        EtwpTraceLastBranchRecord(v16, &LoggerTimeStamp, (struct _KTHREAD *)a3, 5265925);
      if ( (unsigned __int8)IPT_TRACING_ENABLED(v14, 1316LL) )
      {
        EtwpTraceProcessorTrace(v18, &LoggerTimeStamp, a3, 5265925LL);
LABEL_67:
        v9 = 1316;
        goto LABEL_4;
      }
      v9 = v17;
LABEL_4:
      v5 = !_BitScanForward((unsigned int *)&a2, v3);
      if ( v5 )
        return;
    }
    if ( (v19 & 0x800) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)(v12 + 1064) + 8LL); i = (unsigned int)(i + 1) )
      {
        if ( *(_WORD *)(*(_QWORD *)(v12 + 1064) + 2 * i + 12) == (_WORD)v9 )
        {
          v33 = EtwpReserveWithPmcCounters(v12, v9, 28, (int)v34, &LoggerTimeStamp, 5265925);
          goto LABEL_64;
        }
      }
    }
LABEL_24:
    v20 = EtwpReserveTraceBuffer((unsigned int *)v12, 0x2Cu, (__int64)v34, (signed __int64 *)&LoggerTimeStamp, 5265925);
    if ( !v20 )
      goto LABEL_68;
    v21 = v20 + 16;
    *(_QWORD *)(v20 + 8) = LoggerTimeStamp;
    *(_DWORD *)v20 = -1072627707;
    *(_DWORD *)(v20 + 4) = 86245420;
    goto LABEL_26;
  }
}
