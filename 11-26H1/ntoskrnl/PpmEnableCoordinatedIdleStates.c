/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1407CC71C
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1407CCC80 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140AF57C0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x1406079B4 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock(&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
