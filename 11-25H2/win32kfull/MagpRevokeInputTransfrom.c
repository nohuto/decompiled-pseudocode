/*
 * XREFs of MagpRevokeInputTransfrom @ 0x1402032B0
 * Callers:
 *     MagSetLensContextInformation @ 0x1401B93FC (MagSetLensContextInformation.c)
 *     MagpDecomposeDesktop @ 0x140203188 (MagpDecomposeDesktop.c)
 * Callees:
 *     _CancelMagnificationInputTransform @ 0x1402032D0 (_CancelMagnificationInputTransform.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  return (unsigned int)CancelMagnificationInputTransform() == 0 ? 0xC0000001 : 0;
}
