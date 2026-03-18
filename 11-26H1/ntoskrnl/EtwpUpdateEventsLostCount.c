/*
 * XREFs of EtwpUpdateEventsLostCount @ 0x1402574C0
 * Callers:
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     EtwpReserveTraceBuffer @ 0x140218410 (EtwpReserveTraceBuffer.c)
 *     EtwpFailLogging @ 0x140256DF0 (EtwpFailLogging.c)
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCompressBuffer @ 0x1406C79D4 (EtwpCompressBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateEventsLostCount(__int64 a1)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 240));
  result = *(unsigned int *)(a1 + 816);
  if ( (result & 8) != 0 )
    *(_DWORD *)(a1 + 448) = 1;
  return result;
}
