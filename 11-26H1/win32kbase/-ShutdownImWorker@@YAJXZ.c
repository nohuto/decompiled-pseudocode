/*
 * XREFs of ?ShutdownImWorker@@YAJXZ @ 0x1400BCD50
 * Callers:
 *     <none>
 * Callees:
 *     ImpShutdownWorker @ 0x1400BDB60 (ImpShutdownWorker.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 */

__int64 ShutdownImWorker(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d

  Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
  if ( *(_DWORD *)(W32GetUserSessionState(v1, v0, v2) + 42600) )
    return ImpShutdownWorker();
  else
    return 0LL;
}
