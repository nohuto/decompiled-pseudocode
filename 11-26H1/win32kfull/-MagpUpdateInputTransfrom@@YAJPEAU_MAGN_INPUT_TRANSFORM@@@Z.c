/*
 * XREFs of ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140298428
 * Callers:
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x14023BFDC (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall MagpUpdateInputTransfrom(struct _MAGN_INPUT_TRANSFORM *a1)
{
  return (unsigned int)SetMagnificationInputTransform(a1) == 0 ? 0xC0000001 : 0;
}
