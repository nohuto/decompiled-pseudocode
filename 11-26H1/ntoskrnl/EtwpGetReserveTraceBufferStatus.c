/*
 * XREFs of EtwpGetReserveTraceBufferStatus @ 0x140218D00
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x140216EE0 (EtwTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetReserveTraceBufferStatus(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 > 0xFFF8 )
    return 3221225621LL;
  result = 3221225495LL;
  if ( a2 > *(_DWORD *)(a1 + 8) )
    return 2147483653LL;
  return result;
}
