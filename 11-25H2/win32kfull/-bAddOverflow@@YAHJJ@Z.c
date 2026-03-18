/*
 * XREFs of ?bAddOverflow@@YAHJJ@Z @ 0x14031E8D4
 * Callers:
 *     ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x1400EA3E0 (-lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bAddOverflow(int a1)
{
  return a1 >= 0 && 0x7FFFFFFF - a1 < 4;
}
