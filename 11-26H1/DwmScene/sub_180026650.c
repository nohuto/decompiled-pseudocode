/*
 * XREFs of sub_180026650 @ 0x180026650
 * Callers:
 *     sub_180026150 @ 0x180026150 (sub_180026150.c)
 *     sub_180027200 @ 0x180027200 (sub_180027200.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180034028 @ 0x180034028 (sub_180034028.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_1800BD9C0 @ 0x1800BD9C0 (sub_1800BD9C0.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800274F4 @ 0x1800274F4 (sub_1800274F4.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 */

_QWORD *__fastcall sub_180026650(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rax

  sub_180029EF8(a1 + 24);
  v6 = (_QWORD *)sub_1800274F4(a1 + 248, a3);
  sub_180012C40(a2, v6);
  return a2;
}
