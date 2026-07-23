/*
 * XREFs of PidNodeCompare @ 0x140833710
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x140832DA4 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140B5857C (EtwpDemuxPrivateTraceHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PidNodeCompare(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = *(_DWORD *)(a2 + 24);
  if ( *a1 >= v2 )
    return *a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
