/*
 * XREFs of sub_180035614 @ 0x180035614
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18002ECF8 @ 0x18002ECF8 (sub_18002ECF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035614(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029C50((__int64)(a1 + 101), (__int64)v5);
  sub_18002ECF8(a1 + 111, a1[112], a1[108], (a1[109] - a1[108]) >> 4);
  v2 = a1[109];
  v3 = a1[108];
  if ( v3 != v2 )
  {
    sub_180011964(v3, v2);
    a1[109] = a1[108];
  }
  return sub_180011E54((__int64)v5);
}
