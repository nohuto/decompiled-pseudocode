/*
 * XREFs of MiInitializeSystemDefaults @ 0x140CF9BC0
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     HvlpQueryExtendedCapabilities @ 0x1405C48A4 (HvlpQueryExtendedCapabilities.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
 *     MiCompensateForProcessorErrata @ 0x140D079CC (MiCompensateForProcessorErrata.c)
 */

char MiInitializeSystemDefaults()
{
  char result; // al
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  stru_140E366D8.WaitBlockFill5[20] = 4;
  byte_140E2D89A = KeGetCurrentPrcb()->CpuVendor == 1;
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
          *(_DWORD *)&stru_140E366D8.WaitRegister.Flags |= 1u;
        if ( (v1 & 4) != 0 )
          *(_DWORD *)&stru_140E366D8.WaitRegister.Flags |= 2u;
        if ( (v1 & 0x80u) != 0LL )
          *(_DWORD *)&stru_140E366D8.WaitRegister.Flags |= 6u;
        if ( (v1 & 1) != 0 )
          *(_DWORD *)&stru_140E366D8.WaitRegister.Flags |= 8u;
      }
    }
  }
  return result;
}
