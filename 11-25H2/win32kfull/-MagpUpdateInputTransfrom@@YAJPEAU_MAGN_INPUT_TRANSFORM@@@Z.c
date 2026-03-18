/*
 * XREFs of ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140270A14
 * Callers:
 *     MagSetLensContextInformation @ 0x1401B93FC (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x140203308 (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall MagpUpdateInputTransfrom(struct _MAGN_INPUT_TRANSFORM *a1, __int64 a2)
{
  return (unsigned int)SetMagnificationInputTransform(a1, a2) == 0 ? 0xC0000001 : 0;
}
