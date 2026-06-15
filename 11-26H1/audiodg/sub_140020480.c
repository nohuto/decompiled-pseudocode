/*
 * XREFs of sub_140020480 @ 0x140020480
 * Callers:
 *     sub_14001FFBC @ 0x14001FFBC (sub_14001FFBC.c)
 *     sub_1400200FC @ 0x1400200FC (sub_1400200FC.c)
 *     sub_140020228 @ 0x140020228 (sub_140020228.c)
 *     sub_140020354 @ 0x140020354 (sub_140020354.c)
 *     sub_140031360 @ 0x140031360 (sub_140031360.c)
 *     sub_14004E720 @ 0x14004E720 (sub_14004E720.c)
 *     sub_14004E780 @ 0x14004E780 (sub_14004E780.c)
 *     sub_14004E7F0 @ 0x14004E7F0 (sub_14004E7F0.c)
 *     sub_140059E10 @ 0x140059E10 (sub_140059E10.c)
 *     sub_14005EBC0 @ 0x14005EBC0 (sub_14005EBC0.c)
 *     sub_14006BAD0 @ 0x14006BAD0 (sub_14006BAD0.c)
 *     sub_140070070 @ 0x140070070 (sub_140070070.c)
 *     sub_140071370 @ 0x140071370 (sub_140071370.c)
 *     sub_140071BC0 @ 0x140071BC0 (sub_140071BC0.c)
 *     sub_140074EF0 @ 0x140074EF0 (sub_140074EF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140020480(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*a1 && !a1[1] && a1[2] == 192 && a1[3] == 1174405120 )
    return 1LL;
  return result;
}
