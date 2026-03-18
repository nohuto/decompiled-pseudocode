/*
 * XREFs of MiInitializeSystemDefaults @ 0x140CF3840
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     HvlpQueryExtendedCapabilities @ 0x1405C2034 (HvlpQueryExtendedCapabilities.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406DC944 (HviIsHypervisorMicrosoftCompatible.c)
 *     MiCompensateForProcessorErrata @ 0x140D0162C (MiCompensateForProcessorErrata.c)
 */

char MiInitializeSystemDefaults()
{
  char result; // al
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  stru_140E36558.WaitBlockFill5[20] = 4;
  byte_140E2D71A = KeGetCurrentPrcb()->CpuVendor == 1;
  result = MiCompensateForProcessorErrata();
  v1 = 0LL;
  if ( (HvlpFlags & 0x1000) != 0 )
  {
    result = HviIsHypervisorMicrosoftCompatible();
    if ( result )
    {
      result = HvlpQueryExtendedCapabilities(&v1);
      if ( result )
      {
        result = v1;
        if ( (v1 & 2) != 0 )
          *(_DWORD *)&stru_140E36558.WaitRegister.Flags |= 1u;
        if ( (v1 & 4) != 0 )
          *(_DWORD *)&stru_140E36558.WaitRegister.Flags |= 2u;
        if ( (v1 & 0x80u) != 0LL )
          *(_DWORD *)&stru_140E36558.WaitRegister.Flags |= 6u;
        if ( (v1 & 1) != 0 )
          *(_DWORD *)&stru_140E36558.WaitRegister.Flags |= 8u;
      }
    }
  }
  return result;
}
