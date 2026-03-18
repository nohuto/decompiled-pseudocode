/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1407C967C
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1407C9BE0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF2FD0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x140604EB4 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
  PopFxEnablePlatformStates(*a1);
}
