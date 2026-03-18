/*
 * XREFs of HvlIsHypercallOverlayLocked @ 0x1405B87C0
 * Callers:
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

bool HvlIsHypercallOverlayLocked()
{
  return (HvlEnlightenments & 0x100000) != 0;
}
