/*
 * XREFs of UmapInterlockedCompareExchange32ToUser @ 0x140782870
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall UmapInterlockedCompareExchange32ToUser(volatile void *a1, signed __int32 a2, signed __int32 a3)
{
  ProbeForRead(a1, 4uLL, 4u);
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, a2, a3);
}
