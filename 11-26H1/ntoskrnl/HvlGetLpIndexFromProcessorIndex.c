/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x1403E62C0
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1403E6518 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     HvlGetVpSintMessagePage @ 0x1405B9490 (HvlGetVpSintMessagePage.c)
 *     HvlpInitializeBootProcessor @ 0x1405BA2EC (HvlpInitializeBootProcessor.c)
 *     HvlSetPlatformIdleState @ 0x1405BF6A0 (HvlSetPlatformIdleState.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E1D60 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned int *v3; // rax

  v1 = 0;
  if ( byte_140E0A91C )
    return a1;
  v3 = (unsigned int *)HvlpLogicalProcessorRegions;
  while ( v1 < (unsigned int)HvlpLogicalProcessorCount )
  {
    if ( v3[5] == a1 )
      return v3[1];
    ++v1;
    v3 += 26;
  }
  return 0xFFFFFFFFLL;
}
