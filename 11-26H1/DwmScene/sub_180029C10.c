/*
 * XREFs of sub_180029C10 @ 0x180029C10
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 *     sub_1800167D4 @ 0x1800167D4 (sub_1800167D4.c)
 *     sub_1800168F8 @ 0x1800168F8 (sub_1800168F8.c)
 *     sub_1800194E0 @ 0x1800194E0 (sub_1800194E0.c)
 *     sub_180027200 @ 0x180027200 (sub_180027200.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_18003FAF4 @ 0x18003FAF4 (sub_18003FAF4.c)
 *     sub_18003FB88 @ 0x18003FB88 (sub_18003FB88.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 * Callees:
 *     sub_1800299DC @ 0x1800299DC (sub_1800299DC.c)
 */

__int64 __fastcall sub_180029C10(__int64 a1, __int64 a2)
{
  sub_1800299DC(a2, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 28), Thrd_id());
  return a2;
}
