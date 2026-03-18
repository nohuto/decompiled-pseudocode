/*
 * XREFs of EditionLegacyTouchPadMouseAllowTap @ 0x140226100
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPShouldAllowNow@@YAHKH@Z @ 0x140226118 (-TPAAPShouldAllowNow@@YAHKH@Z.c)
 */

__int64 __fastcall EditionLegacyTouchPadMouseAllowTap(unsigned int a1, int a2)
{
  return TPAAPShouldAllowNow(a1, a2);
}
