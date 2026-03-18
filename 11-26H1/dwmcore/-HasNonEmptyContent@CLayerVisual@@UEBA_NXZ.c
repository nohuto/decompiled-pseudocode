/*
 * XREFs of ?HasNonEmptyContent@CLayerVisual@@UEBA_NXZ @ 0x1801A9D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::HasNonEmptyContent(CLayerVisual *this)
{
  return *((float *)this + 39) > *((float *)this + 37) && *((float *)this + 40) > *((float *)this + 38);
}
