/*
 * XREFs of SelectFont @ 0x1402EC9B0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 */

HFONT __fastcall SelectFont(__int64 a1)
{
  return GreSelectFont(*(HDC *)a1, *(HFONT *)(a1 + 8));
}
