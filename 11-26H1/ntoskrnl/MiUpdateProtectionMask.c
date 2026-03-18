/*
 * XREFs of MiUpdateProtectionMask @ 0x140303850
 * Callers:
 *     MiCompleteTransitionPfnFault @ 0x140302030 (MiCompleteTransitionPfnFault.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     MiMakeProtoReadOnly @ 0x14031C2E0 (MiMakeProtoReadOnly.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     MiUseProcessorHugeMappingAtDpc @ 0x1407054FC (MiUseProcessorHugeMappingAtDpc.c)
 *     MiAllocateZeroCalibrationBuffer @ 0x140710120 (MiAllocateZeroCalibrationBuffer.c)
 *     MiAllocateFastAwePages @ 0x1408776E8 (MiAllocateFastAwePages.c)
 *     MiMapLockedPagesInUserSpace @ 0x14095D148 (MiMapLockedPagesInUserSpace.c)
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
