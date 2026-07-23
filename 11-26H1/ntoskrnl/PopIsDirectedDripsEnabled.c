/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x140B3D6EC
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     <none>
 */

char PopIsDirectedDripsEnabled()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett

  _m_prefetchw(&PopDirectedDripsState);
  v0 = PopDirectedDripsState;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&PopDirectedDripsState, v0, v0);
  }
  while ( v1 != v0 );
  return v0 & 1;
}
