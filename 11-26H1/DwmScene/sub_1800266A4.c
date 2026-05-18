/*
 * XREFs of sub_1800266A4 @ 0x1800266A4
 * Callers:
 *     sub_180027200 @ 0x180027200 (sub_180027200.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180034028 @ 0x180034028 (sub_180034028.c)
 *     sub_180038C7C @ 0x180038C7C (sub_180038C7C.c)
 *     sub_1800BD9C0 @ 0x1800BD9C0 (sub_1800BD9C0.c)
 * Callees:
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 */

__int64 __fastcall sub_1800266A4(__int64 a1)
{
  sub_180029EF8(a1 + 24);
  return (__int64)(*(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248)) >> 4;
}
