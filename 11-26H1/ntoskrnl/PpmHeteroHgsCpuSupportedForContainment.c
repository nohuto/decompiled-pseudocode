/*
 * XREFs of PpmHeteroHgsCpuSupportedForContainment @ 0x14060D87C
 * Callers:
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 * Callees:
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 *     PpmHeteroIsIntelCpuSupportedForContainment @ 0x140615F88 (PpmHeteroIsIntelCpuSupportedForContainment.c)
 */

char PpmHeteroHgsCpuSupportedForContainment()
{
  char v0; // bl
  unsigned __int16 v1; // si
  unsigned __int16 v2; // di
  __int64 v3; // rcx
  int v4; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 CpuModel; // al

  v0 = 0;
  if ( (unsigned __int16)KiActiveGroups <= 1u )
  {
    v1 = 0;
    v2 = 0;
    if ( !KeNumberNodes )
      goto LABEL_8;
    do
    {
      v3 = KeNodeBlock[v2];
      if ( v3 )
      {
        LOBYTE(v4) = KeIsEmptyGroupMask((unsigned __int64 *)(v3 + 16));
        if ( !v4 )
          ++v1;
      }
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
    if ( v1 <= 1u )
    {
LABEL_8:
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned __int8)PpmHeteroIsIntelCpuSupportedForContainment(CurrentPrcb) )
        return 1;
      if ( CurrentPrcb->CpuVendor == 1 && !CurrentPrcb->CpuStepping && CurrentPrcb->CpuType == 26 )
      {
        CpuModel = CurrentPrcb->CpuModel;
        if ( CpuModel == 36 || CpuModel == 0x80 || CpuModel == 0x82 || CpuModel == 0xE0 || CpuModel == 0xE4 )
          return 1;
      }
    }
  }
  return v0;
}
