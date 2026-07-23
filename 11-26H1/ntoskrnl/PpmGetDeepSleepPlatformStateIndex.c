/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1404DBB18
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1404DB8B8 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopFxEnablePlatformStates @ 0x1406079B4 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
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
