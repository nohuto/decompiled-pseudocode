/*
 * XREFs of EtwpCloseLogger @ 0x140218480
 * Callers:
 *     EtwTraceEvent @ 0x140216EE0 (EtwTraceEvent.c)
 *     EtwpCCSwapFlush @ 0x140217830 (EtwpCCSwapFlush.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpOpenLogger @ 0x140218514 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwSendTraceBuffer @ 0x1406CA270 (EtwSendTraceBuffer.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  signed __int64 *v4; // rcx
  signed __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // r8

  if ( a3 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 704) + 8LL * a1);
    v4 = (signed __int64 *)(*(_QWORD *)v3 + *(_DWORD *)(v3 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v3 + 20)));
    _m_prefetchw(v4);
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *v4;
        if ( (*v4 & 1) != 0 )
          break;
        if ( v5 == _InterlockedCompareExchange64(v4, v5 - 2, v5) )
          return KeLeaveCriticalRegionThread(KeGetCurrentThread());
      }
      if ( v5 != 1 )
        break;
      v4 = *(signed __int64 **)v3;
    }
    v7 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
    return KeLeaveCriticalRegionThread(KeGetCurrentThread());
  }
  return result;
}
