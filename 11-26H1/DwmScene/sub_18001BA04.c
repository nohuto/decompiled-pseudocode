/*
 * XREFs of sub_18001BA04 @ 0x18001BA04
 * Callers:
 *     sub_180018204 @ 0x180018204 (sub_180018204.c)
 *     sub_18004CEF4 @ 0x18004CEF4 (sub_18004CEF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001BA04(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  return sub_18001BA3C();
}
