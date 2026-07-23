/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x1402F31A0
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1402F33F8 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     HvlGetVpSintMessagePage @ 0x1405BBD00 (HvlGetVpSintMessagePage.c)
 *     HvlpInitializeBootProcessor @ 0x1405BCB5C (HvlpInitializeBootProcessor.c)
 *     HvlSetPlatformIdleState @ 0x1405C1F10 (HvlSetPlatformIdleState.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407E6DF0 (PpmPerfRegisterHvPerfStateCounters.c)
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
