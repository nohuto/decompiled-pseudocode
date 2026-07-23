/*
 * XREFs of SpcIsFbClearSupported @ 0x140722F18
 * Callers:
 *     KeQuerySpeculationControlInformation @ 0x1407BD6B8 (KeQuerySpeculationControlInformation.c)
 *     SpcDetectKvaLeakage @ 0x140C0808C (SpcDetectKvaLeakage.c)
 * Callees:
 *     <none>
 */

_BOOL8 SpcIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
