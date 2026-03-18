/*
 * XREFs of PidNodeCompare @ 0x14082D4D0
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x14082CB64 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x140B55CDC (EtwpDemuxPrivateTraceHandle.c)
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
