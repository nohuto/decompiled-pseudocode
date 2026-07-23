/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x140252B78
 * Callers:
 *     HvlpProxySyntheticClusterIpi @ 0x140251228 (HvlpProxySyntheticClusterIpi.c)
 *     HvlSendSyntheticClusterIpi @ 0x140251330 (HvlSendSyntheticClusterIpi.c)
 *     KiFlushAddressSpaceTb @ 0x140251858 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 * Callees:
 *     <none>
 */

bool HvlpUseExtendedProcessorSetHypercalls()
{
  bool result; // al

  result = 0;
  if ( (HvlpFlags & 0x80u) != 0 )
    return (unsigned __int16)KiActiveGroups > 1u;
  return result;
}
