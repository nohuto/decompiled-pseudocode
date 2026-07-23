/*
 * XREFs of EtwpReserveTraceBuffer @ 0x140218740
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x140216EE0 (EtwTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpReserveWithPmcCounters @ 0x1402185C0 (EtwpReserveWithPmcCounters.c)
 *     EtwpReserveWithPebsIndex @ 0x140218D2C (EtwpReserveWithPebsIndex.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpReferenceCurrentBuffer @ 0x140218DC0 (EtwpReferenceCurrentBuffer.c)
 *     EtwpSwitchBuffer @ 0x1402192C0 (EtwpSwitchBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     EtwpUpdateEventsLostCount @ 0x140258E50 (EtwpUpdateEventsLostCount.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     EtwpGetTimeStampAndQpcDelta @ 0x1404400EC (EtwpGetTimeStampAndQpcDelta.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(unsigned int *a1, unsigned int a2, __int64 a3, signed __int64 *a4, int a5)
{
  unsigned int v7; // r13d
  __int64 v8; // rcx
  unsigned int v9; // r15d
  __int64 Number; // rsi
  __int64 v11; // rax
  __int64 Prcb; // rax
  _QWORD *v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int32 i; // esi
  int v18; // ebx
  __int64 LoggerTimeStamp; // rax
  unsigned int v20; // r8d
  unsigned __int32 v21; // eax
  __int64 v22; // rdx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  signed __int64 v26; // r10
  signed __int64 v27; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v29; // r8
  unsigned __int32 v30; // eax
  __int64 v31; // r9
  signed __int64 v32; // rax
  signed __int64 v33; // r9
  signed __int64 v34; // rcx
  unsigned int v35; // [rsp+30h] [rbp-58h]
  int v36; // [rsp+34h] [rbp-54h]
  __int64 v37; // [rsp+38h] [rbp-50h] BYREF
  signed __int64 v38[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+90h] [rbp+8h]

  if ( (a1[4] & 0x80000000) != 0 || a2 > a1[2] )
  {
LABEL_32:
    EtwpUpdateEventsLostCount(a1);
    return 0LL;
  }
  v7 = a1[1];
  v8 = *a1;
  v9 = (a2 + 7) & 0xFFFFFFF8;
  v35 = v8;
  v39 = v7;
  while ( 1 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v11 = *((_QWORD *)a1 + 170);
    v36 = Number;
    if ( v11 == EtwpHostSiloState )
    {
      Prcb = KeGetPrcb((unsigned int)Number);
      v8 = v35;
      v13 = (_QWORD *)(*(_QWORD *)(Prcb + 35816) + 320LL);
    }
    else
    {
      v13 = (_QWORD *)(*(_QWORD *)(v11 + 4416) + (Number << 6));
    }
    v14 = (a1[3] & 0x10000000) != 0 ? (__int64)(a1 + 32) : *v13 + 8 * v8;
    v15 = EtwpReferenceCurrentBuffer(a1, v14);
    v16 = v15;
    if ( v15 )
      break;
LABEL_12:
    if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
    {
      if ( v16 )
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      goto LABEL_32;
    }
    v18 = EtwpSwitchBuffer((_DWORD)a1, v16, v14, Number, a5);
    if ( (a1[3] & 0x4000000) != 0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v29 = PerformanceCounter.QuadPart
          - _InterlockedExchange64((volatile __int64 *)a1 + 190, PerformanceCounter.QuadPart);
      do
      {
        v33 = *((_QWORD *)a1 + 191);
        if ( v33 )
          v34 = (v33 + v29 + 2 * v33) / 4;
        else
          v34 = v29;
      }
      while ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 191, v34, v33) );
    }
    if ( v18 < 0 )
      goto LABEL_32;
    v8 = v35;
  }
  v38[0] = 0LL;
  v37 = 0LL;
  _m_prefetchw((const void *)(v15 + 8));
  for ( i = *(_DWORD *)(v15 + 8); ; i = v21 )
  {
    while ( 1 )
    {
      do
      {
        if ( i > v7 )
          goto LABEL_11;
        if ( (a1[204] & 0x8000000) == 0 )
        {
          LoggerTimeStamp = EtwpGetLoggerTimeStamp(a1);
          v20 = v35;
          goto LABEL_18;
        }
      }
      while ( (unsigned int)EtwpGetTimeStampAndQpcDelta(a1, &v37, v38) );
      v20 = v35;
      v26 = v38[0];
      v27 = *(_QWORD *)(v13[2] + 8LL * v35);
      if ( v38[0] == v27 && i != 72 )
        break;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), i + 24, i);
      v31 = v30;
      if ( i == v30 )
      {
        if ( (unsigned __int64)v30 + 24 > v39 )
        {
          v7 = v39;
          *(_DWORD *)(v16 + 4) = v30;
          goto LABEL_11;
        }
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13[2] + 8LL * v35), v26, v27);
        *(_DWORD *)(v31 + v16 + 4) = 5308440;
        *(_QWORD *)(v31 + v16 + 8) = v37;
        if ( v27 == v32 )
        {
          *(_DWORD *)(v31 + v16) = -1072627710;
          *(_QWORD *)(v31 + v16 + 16) = v26;
        }
        else
        {
          *(_DWORD *)(v31 + v16) = -1072627711;
          *(_QWORD *)(v31 + v16 + 16) = 0LL;
        }
      }
      v7 = v39;
      i = v31;
    }
    LoggerTimeStamp = v37;
    v7 = v39;
LABEL_18:
    *a4 = LoggerTimeStamp;
    v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), i + v9, i);
    v22 = v21;
    if ( i == v21 )
      break;
  }
  if ( v21 + v9 > v7 )
  {
    *(_DWORD *)(v16 + 4) = v21;
LABEL_11:
    LODWORD(Number) = v36;
    goto LABEL_12;
  }
  if ( (a1[3] & 0x400) != 0 )
  {
    v23 = *(_QWORD *)(v16 + 16);
    do
    {
      if ( *a4 <= v23 )
        break;
      v24 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 16), *a4, v23);
    }
    while ( v24 != v23 );
  }
  ++*(_QWORD *)(v13[1] + 8LL * v20);
  *(_QWORD *)a3 = v16;
  *(_QWORD *)(a3 + 8) = v14;
  *(_DWORD *)(a3 + 16) = v22;
  return v16 + v22;
}
