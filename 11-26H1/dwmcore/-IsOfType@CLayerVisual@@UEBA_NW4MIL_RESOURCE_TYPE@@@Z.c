/*
 * XREFs of ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18019FB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLayerVisual::IsOfType(__int64 a1, int a2)
{
  int v2; // ecx
  bool result; // al

  result = (unsigned int)(a2 - 71) <= 0x1C && (v2 = 268697601, _bittest(&v2, a2 - 71)) || a2 == 156;
  return result;
}
