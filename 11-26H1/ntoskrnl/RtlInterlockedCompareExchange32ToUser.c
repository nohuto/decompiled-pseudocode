/*
 * XREFs of RtlInterlockedCompareExchange32ToUser @ 0x14077F3AC
 * Callers:
 *     EtwpUpdateProcessTracingCallback @ 0x140828630 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A14FC8 (EtwpRealtimeInjectEtwBuffer.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall RtlInterlockedCompareExchange32ToUser(volatile void *a1, signed __int32 a2, signed __int32 a3)
{
  ProbeForRead(a1, 4uLL, 4u);
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, a2, a3);
}
