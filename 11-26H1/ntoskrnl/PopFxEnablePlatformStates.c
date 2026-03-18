/*
 * XREFs of PopFxEnablePlatformStates @ 0x140604EB4
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x1407C967C (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1404E2438 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepPlatformStateRegistered @ 0x140611864 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140987604 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned __int32 DeepSleepPlatformStateIndex; // eax

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      _InterlockedExchange(&dword_140E27100, DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(DeepSleepPlatformStateIndex);
    }
  }
}
