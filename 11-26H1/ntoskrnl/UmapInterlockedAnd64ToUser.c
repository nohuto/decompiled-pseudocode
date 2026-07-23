/*
 * XREFs of UmapInterlockedAnd64ToUser @ 0x140782820
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

signed __int64 __fastcall UmapInterlockedAnd64ToUser(volatile void *a1, unsigned __int64 a2)
{
  ProbeForRead(a1, 8uLL, 8u);
  _m_prefetchw((const void *)a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, a2);
}
