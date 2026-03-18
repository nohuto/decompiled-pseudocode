/*
 * XREFs of HvlpUseExtendedProcessorSetHypercalls @ 0x140251218
 * Callers:
 *     HvlpProxySyntheticClusterIpi @ 0x14024F8C8 (HvlpProxySyntheticClusterIpi.c)
 *     HvlSendSyntheticClusterIpi @ 0x14024F9D0 (HvlSendSyntheticClusterIpi.c)
 *     KiFlushAddressSpaceTb @ 0x14024FEF8 (KiFlushAddressSpaceTb.c)
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140250688 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
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
