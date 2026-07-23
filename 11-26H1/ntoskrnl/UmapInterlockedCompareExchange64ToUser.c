/*
 * XREFs of UmapInterlockedCompareExchange64ToUser @ 0x1407828C0
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

signed __int64 __fastcall UmapInterlockedCompareExchange64ToUser(
        volatile void *a1,
        signed __int64 a2,
        signed __int64 a3)
{
  ProbeForRead(a1, 8uLL, 8u);
  return _InterlockedCompareExchange64((volatile signed __int64 *)a1, a2, a3);
}
