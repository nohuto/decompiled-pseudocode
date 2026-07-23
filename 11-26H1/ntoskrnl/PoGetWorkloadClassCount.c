/*
 * XREFs of PoGetWorkloadClassCount @ 0x140C03D54
 * Callers:
 *     KiInitializeWpsWorkloadClasses @ 0x140BFA144 (KiInitializeWpsWorkloadClasses.c)
 *     PpmHeteroInitializeIntelWpsSupport @ 0x140CDD248 (PpmHeteroInitializeIntelWpsSupport.c)
 *     PpmHeteroInitializeAmdWpsSupport @ 0x140CDD668 (PpmHeteroInitializeAmdWpsSupport.c)
 * Callees:
 *     PpmHeteroGetWorkloadClassCountAMD64 @ 0x140C03DB0 (PpmHeteroGetWorkloadClassCountAMD64.c)
 */

char __fastcall PoGetWorkloadClassCount(int *a1)
{
  char result; // al
  int *v2; // r10
  int v3; // r11d

  result = 0;
  v2 = a1;
  if ( a1 )
  {
    v3 = 1;
    *a1 = 1;
    if ( !PpmHeteroHgsThreadDisabled )
    {
      if ( (PpmWpsSimulationOverride & 1) != 0 )
      {
        *a1 = ((unsigned __int64)PpmWpsSimulationOverride >> 52) & 0xF;
        result = 1;
      }
      else
      {
        result = PpmHeteroGetWorkloadClassCountAMD64();
      }
      if ( !*v2 || (unsigned int)*v2 > 8 )
      {
        *v2 = v3;
        return 0;
      }
    }
  }
  return result;
}
