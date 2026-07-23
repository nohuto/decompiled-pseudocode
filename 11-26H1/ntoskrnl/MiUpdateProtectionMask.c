/*
 * XREFs of MiUpdateProtectionMask @ 0x1402E58D0
 * Callers:
 *     MiCompleteTransitionPfnFault @ 0x1402E40B0 (MiCompleteTransitionPfnFault.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiMakeProtoReadOnly @ 0x14031E310 (MiMakeProtoReadOnly.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x14070A1CC (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140714E1C (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiMapLockedPagesInUserSpace @ 0x140A02A08 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateProtectionMask(unsigned int a1, int a2)
{
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
        a1 |= 0x18u;
    }
    else
    {
      a1 |= 8u;
    }
  }
  return a1;
}
