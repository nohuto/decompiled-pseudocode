/*
 * XREFs of PopDirectedDripsSendSessionData @ 0x140B0A93C
 * Callers:
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x140B0A9B8 (PopDirectedDripsDiagNotifySessionStop.c)
 */

__int64 PopDirectedDripsSendSessionData()
{
  unsigned __int32 v0; // eax
  unsigned __int32 v1; // ett
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  _m_prefetchw(&PopDirectedDripsState);
  v0 = PopDirectedDripsState;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&PopDirectedDripsState, v0, v0);
  }
  while ( v1 != v0 );
  v2 = (v0 >> 10) & 1 | 2;
  if ( (v0 & 0x800) == 0 )
    v2 = (v0 >> 10) & 1;
  v3 = (v0 >> 12) & 1 | 2;
  if ( (v0 & 0x2000) == 0 )
    v3 = (v0 >> 12) & 1;
  v4 = dword_140F12E30 & 1 | 2u;
  if ( (dword_140F12E30 & 2) == 0 )
    v4 = dword_140F12E30 & 1;
  return PopDirectedDripsDiagNotifySessionStop(v4, v3, v2);
}
