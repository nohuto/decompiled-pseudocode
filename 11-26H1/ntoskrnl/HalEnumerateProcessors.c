/*
 * XREFs of HalEnumerateProcessors @ 0x14057E9D0
 * Callers:
 *     HvlpSelectLpSet @ 0x1405BCF2C (HvlpSelectLpSet.c)
 *     KiComputeEstimatedMaximumProcessors @ 0x1405ED2F0 (KiComputeEstimatedMaximumProcessors.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C (HalpQueryMaximumRegisteredProcessorCount.c)
 */

__int64 __fastcall HalEnumerateProcessors(unsigned int a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // r8d
  int v5; // r9d
  _DWORD *v6; // rcx
  int v7; // eax
  unsigned int MaximumRegisteredProcessorCount; // eax

  v2 = 1;
  v3 = 1;
  v4 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
  v5 = v4 & *(_DWORD *)(HalpInterruptProcessorState + 8);
  if ( (unsigned int)HalpInterruptProcessorCount > 1 )
  {
    v6 = (_DWORD *)(HalpInterruptProcessorState + 72);
    do
    {
      if ( v5 != (*v6 & v4) )
      {
        ++v3;
        v5 = *v6 & v4;
        if ( v3 > a1 )
          break;
      }
      ++v2;
      v6 += 16;
    }
    while ( v2 < (unsigned int)HalpInterruptProcessorCount );
  }
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorCap < v2 )
    v2 = HalpInterruptProcessorCap;
  v7 = HalpInterruptModel();
  if ( v7 != 1 && (unsigned int)(v7 - 2) > 2 )
    v2 = 1;
  MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
  if ( v2 >= MaximumRegisteredProcessorCount )
    return MaximumRegisteredProcessorCount;
  return v2;
}
