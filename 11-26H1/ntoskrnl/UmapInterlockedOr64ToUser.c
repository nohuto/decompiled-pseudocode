/*
 * XREFs of UmapInterlockedOr64ToUser @ 0x140782950
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

signed __int64 __fastcall UmapInterlockedOr64ToUser(volatile void *a1, unsigned __int64 a2)
{
  ProbeForRead(a1, 8uLL, 8u);
  _m_prefetchw((const void *)a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
