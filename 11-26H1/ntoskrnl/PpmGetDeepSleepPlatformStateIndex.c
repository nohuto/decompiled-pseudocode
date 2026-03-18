/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1404E2438
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404E1A2C (PopPepInitializeVetoMasks.c)
 *     PopFxClearDeviceConstraints @ 0x1404E2030 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404E21D8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopFxEnablePlatformStates @ 0x140604EB4 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)PpmPlatformStates )
      return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  }
  return result;
}
