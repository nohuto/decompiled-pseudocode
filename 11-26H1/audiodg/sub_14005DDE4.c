/*
 * XREFs of sub_14005DDE4 @ 0x14005DDE4
 * Callers:
 *     sub_14005DE60 @ 0x14005DE60 (sub_14005DE60.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

void __fastcall sub_14005DDE4(_QWORD *a1)
{
  *a1 = off_1400BC1F0;
  sub_140003238(a1 + 10);
  *a1 = &off_1400BAD50;
  sub_140006B48((__int64)(a1 + 2));
}
