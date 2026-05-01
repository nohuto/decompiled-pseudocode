/*
 * XREFs of ?GetVisibleRect@CSwitchItemGrid@@UEAA?AUCRect@Geometry@@XZ @ 0x1804B48C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CSwitchItemGrid::GetVisibleRect(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 544);
  return result;
}
