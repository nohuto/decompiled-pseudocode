/*
 * XREFs of EtwpSwitchBuffer @ 0x1402192C0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1402199E4 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpRequestFlushTimer @ 0x140219A50 (EtwpRequestFlushTimer.c)
 *     EtwpBuffersFlushRequired @ 0x140219AFC (EtwpBuffersFlushRequired.c)
 *     EtwpAllocateFreeBuffers @ 0x140219B3C (EtwpAllocateFreeBuffers.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     EtwpCompressionDpc @ 0x140532BE0 (EtwpCompressionDpc.c)
 *     EtwpReenableCompression @ 0x1405348E8 (EtwpReenableCompression.c)
 */

__int64 __fastcall EtwpSwitchBuffer(ULONG_PTR a1, __int64 a2, signed __int64 *a3, __int16 a4, __int16 a5)
{
  int v6; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  signed __int64 i; // rbx
  signed __int64 v14; // rax
  unsigned __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8

  v6 = *(_DWORD *)(a1 + 12) & 0x400;
  while ( 1 )
  {
    v10 = EtwpDequeueFreeBuffer();
    if ( v10 )
      break;
    if ( (a5 & 0x200) != 0
      || (unsigned __int8)KeGetEffectiveIrql(v11, 0LL, v12) > 2u
      || (*(_DWORD *)(a1 + 12) & 0x40000) != 0
      || (unsigned int)EtwpAllocateFreeBuffers(a1) != 1 )
    {
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
      return 3221225495LL;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    *(_WORD *)(v10 + 40) = a4;
  _InterlockedAdd((volatile signed __int32 *)(v10 + 12), 0xFu);
  while ( 1 )
  {
    if ( !v6 )
      *(_QWORD *)(v10 + 32) = a2;
    _m_prefetchw(a3);
    for ( i = *a3; (a2 ^ (unsigned __int64)i) <= 0xF; i = v14 )
    {
      v14 = _InterlockedCompareExchange64(a3, v10 | 0xF, i);
      if ( i == v14 )
        break;
    }
    v15 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
    {
      if ( v15 )
      {
        v16 = *(_DWORD *)(a1 + 12);
        if ( (v16 & 0x400) != 0 )
        {
          v21 = i & 0xFFFFFFFFFFFFFFF0uLL;
          if ( (v16 & 0x4000000) != 0 )
          {
            EtwpEnqueueAvailableBuffer(a1, v21, 4LL);
            if ( !*(_DWORD *)(a1 + 1432) && *(_QWORD *)(a1 + 1528) >= 2LL * *(_QWORD *)(a1 + 1536) )
              EtwpReenableCompression(a1);
            if ( *(_DWORD *)(a1 + 1432) && !_InterlockedExchange((volatile __int32 *)(a1 + 1400), 2) )
            {
              if ( (unsigned __int8)KeGetEffectiveIrql(v23, v22, v24) > 2u )
                KiInsertQueueDpc(a1 + 1456, 0);
              else
                EtwpCompressionDpc(0LL, a1, 0LL, 0LL);
            }
          }
          else
          {
            EtwpEnqueueAvailableBuffer(a1, v21, 0LL);
          }
        }
        else
        {
          *(_DWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = 3;
          *(_QWORD *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 0x10) = EtwpGetLoggerTimeStamp(a1);
        }
        _InterlockedAdd((volatile signed __int32 *)(v15 + 12), ~(i & 0xF));
        if ( !v6 && (unsigned __int8)EtwpBuffersFlushRequired(a1) )
        {
          if ( (a5 & 0x600) != 0 || (unsigned __int8)KeGetEffectiveIrql(v18, v17, v19) > 2u )
          {
            if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
              KiInsertQueueDpc(a1 + 568, 0);
          }
          else
          {
            KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
          }
        }
      }
      else if ( *(_DWORD *)(a1 + 208) )
      {
        LOBYTE(v10) = (a5 & 0x600) != 0;
        EtwpRequestFlushTimer(a1, v10);
      }
      return 0LL;
    }
    if ( v15 )
      break;
    if ( a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
    a2 = 0LL;
  }
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  _InterlockedAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFF1);
  if ( v6 )
    EtwpEnqueueOverflowBuffer(a1);
  else
    EtwpEnqueueAvailableBuffer(a1, v10, 0LL);
  return 0LL;
}
