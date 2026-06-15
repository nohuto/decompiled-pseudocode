/*
 * XREFs of sub_14007BEA4 @ 0x14007BEA4
 * Callers:
 *     sub_140078090 @ 0x140078090 (sub_140078090.c)
 *     sub_14007D124 @ 0x14007D124 (sub_14007D124.c)
 * Callees:
 *     sub_140077CBC @ 0x140077CBC (sub_140077CBC.c)
 *     sub_1400781C0 @ 0x1400781C0 (sub_1400781C0.c)
 *     sub_14007C880 @ 0x14007C880 (sub_14007C880.c)
 *     sub_14007DCA0 @ 0x14007DCA0 (sub_14007DCA0.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall sub_14007BEA4(__int64 a1)
{
  _QWORD v3[25]; // [rsp+20h] [rbp-C8h] BYREF

  sub_140077CBC((__int64)v3);
  sub_14007DCA0(a1, v3);
  sub_14007C880(v3);
  return sub_1400781C0(v3);
}
