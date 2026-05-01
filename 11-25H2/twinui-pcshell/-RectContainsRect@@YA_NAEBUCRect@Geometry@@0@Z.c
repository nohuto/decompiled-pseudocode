/*
 * XREFs of ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x180589474
 * Callers:
 *     ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1805899D8 (-evaluate@_tip_SmartFillTest@@QEAAXXZ.c)
 *     ?evaluate@_tip_SnapLayoutProviderTest@@QEAAXXZ @ 0x180592374 (-evaluate@_tip_SnapLayoutProviderTest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall RectContainsRect(const struct Geometry::CRect *a1, const struct Geometry::CRect *a2)
{
  return *((_DWORD *)a1 + 1) <= *((_DWORD *)a2 + 1)
      && *((_DWORD *)a1 + 3) >= *((_DWORD *)a2 + 3)
      && *(_DWORD *)a1 <= *(_DWORD *)a2
      && *((_DWORD *)a1 + 2) >= *((_DWORD *)a2 + 2);
}
