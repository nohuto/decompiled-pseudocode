/*
 * XREFs of SpcIsFbClearSupported @ 0x14071E288
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1407BA658 (KeQuerySpeculationControlInformation.c)
 *     SpcDetectKvaLeakage @ 0x140C01E7C (SpcDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 SpcIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
