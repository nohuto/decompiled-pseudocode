/*
 * XREFs of UmapInterlockedAnd32ToUser @ 0x14077FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall UmapInterlockedAnd32ToUser(volatile void *a1, unsigned int a2)
{
  ProbeForRead(a1, 4uLL, 4u);
  _m_prefetchw((const void *)a1);
  return (unsigned int)_InterlockedAnd((volatile signed __int32 *)a1, a2);
}
