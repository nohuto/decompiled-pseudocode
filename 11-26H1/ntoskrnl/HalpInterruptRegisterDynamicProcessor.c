/*
 * XREFs of HalpInterruptRegisterDynamicProcessor @ 0x14057F044
 * Callers:
 *     HalRegisterDynamicProcessor @ 0x140581400 (HalRegisterDynamicProcessor.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 */

__int64 HalpInterruptRegisterDynamicProcessor()
{
  unsigned int v0; // r8d
  int v1; // r9d
  unsigned int v3; // r8d
  unsigned int v4; // edx
  unsigned __int64 v5; // rcx

  if ( (unsigned int)HalpInterruptModel() == 1 )
  {
    if ( !HalpInterruptPhysicalModeOnly
      && !HalpInterruptClusterModeEnabled
      && (unsigned int)HalpInterruptProcessorCount > HalpInterruptLogicalFlatLimit )
    {
      return 3221225496LL;
    }
    if ( HalpInterruptPackagesStarted <= v0 )
    {
      if ( HalpInterruptPackagesStarted < v0 )
        return 0LL;
      v3 = 0;
      v4 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
      while ( v3 < (unsigned int)HalpInterruptProcessorCount )
      {
        v5 = (unsigned __int64)v3 << 6;
        if ( *(_BYTE *)(v5 + HalpInterruptProcessorState + 13)
          && (v4 & *(_DWORD *)(v5 + HalpInterruptProcessorState + 8)) == (v1 & v4) )
        {
          return 0LL;
        }
        ++v3;
      }
    }
  }
  return 3221225473LL;
}
