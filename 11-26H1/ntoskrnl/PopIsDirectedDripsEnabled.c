/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140B3B46C
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 * Callees:
 *     <none>
 */

char PopIsDirectedDripsEnabled()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett

  _m_prefetchw(dword_140F12AC0);
  v0 = dword_140F12AC0[0];
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(dword_140F12AC0, v0, v0);
  }
  while ( v1 != v0 );
  return v0 & 1;
}
