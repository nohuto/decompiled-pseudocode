/*
 * XREFs of sub_180060CB4 @ 0x180060CB4
 * Callers:
 *     ?dtor$0@?0???0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0 @ 0x1800DC4E5 (-dtor$0@-0---0agent@Concurrency@@QEAA@AEAVScheduleGroup@1@@Z@4HA_0.c)
 *     sub_1800DC4FB @ 0x1800DC4FB (sub_1800DC4FB.c)
 *     sub_1800DD14A @ 0x1800DD14A (sub_1800DD14A.c)
 *     sub_1800DD51C @ 0x1800DD51C (sub_1800DD51C.c)
 *     sub_1800DE9B9 @ 0x1800DE9B9 (sub_1800DE9B9.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

__int64 __fastcall sub_180060CB4(__int64 a1)
{
  return sub_18000BFA4(a1, 16LL, 3LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
