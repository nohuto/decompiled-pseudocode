/*
 * XREFs of IsSupportedSidebandTopology @ 0x14000F2D4
 * Callers:
 *     IsSidebandSupported @ 0x14002F650 (IsSidebandSupported.c)
 * Callees:
 *     ?IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z @ 0x140012F6C (-IsSupportedSidebandTopology@CSidebandDevice@@SAHPEAU_KSFILTER_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall IsSupportedSidebandTopology(struct _KSFILTER_DESCRIPTOR *a1)
{
  return CSidebandDevice::IsSupportedSidebandTopology(a1);
}
