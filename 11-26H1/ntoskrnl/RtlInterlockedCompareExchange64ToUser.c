/*
 * XREFs of RtlInterlockedCompareExchange64ToUser @ 0x14077F400
 * Callers:
 *     EtwpRealtimeInjectEtwBuffer @ 0x140A14FC8 (EtwpRealtimeInjectEtwBuffer.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

signed __int64 __fastcall RtlInterlockedCompareExchange64ToUser(
        volatile void *a1,
        signed __int64 a2,
        signed __int64 a3)
{
  ProbeForRead(a1, 8uLL, 8u);
  return _InterlockedCompareExchange64((volatile signed __int64 *)a1, a2, a3);
}
