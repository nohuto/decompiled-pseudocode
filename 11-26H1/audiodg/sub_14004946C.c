/*
 * XREFs of sub_14004946C @ 0x14004946C
 * Callers:
 *     sub_140049120 @ 0x140049120 (sub_140049120.c)
 * Callees:
 *     sub_140049B40 @ 0x140049B40 (sub_140049B40.c)
 *     sub_140049ED4 @ 0x140049ED4 (sub_140049ED4.c)
 */

char __fastcall sub_14004946C(int a1)
{
  if ( !a1 )
    byte_1400E7CD1 = 1;
  sub_140049B40();
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140049ED4)() )
    return 0;
  if ( !(unsigned __int8)((__int64 (*)(void))sub_140049ED4)() )
  {
    sub_140049ED4(0LL);
    return 0;
  }
  return 1;
}
