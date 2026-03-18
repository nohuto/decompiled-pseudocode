/*
 * XREFs of NtGdiWaitForTextReady @ 0x140223D90
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x140017E24 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

_BOOL8 NtGdiWaitForTextReady()
{
  int v0; // eax
  int v1; // ebx
  ULONG v2; // eax

  v0 = UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization();
  v1 = v0;
  if ( v0 < 0 )
  {
    v2 = RtlNtStatusToDosError(v0);
    EngSetLastError(v2);
  }
  return v1 >= 0;
}
