/*
 * XREFs of sub_180098410 @ 0x180098410
 * Callers:
 *     ?_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z @ 0x180098458 (-_DeleteExceptionPtr@@YAXQEAV__ExceptionPtr@@@Z.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180027B20 @ 0x180027B20 (sub_180027B20.c)
 *     sub_1800983A0 @ 0x1800983A0 (sub_1800983A0.c)
 */

__int64 __fastcall sub_180098410(__int64 a1)
{
  sub_18000BFA4(a1 + 64, 16LL, 5LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
  sub_180027B20((void **)(a1 + 48));
  sub_1800983A0((void **)(a1 + 8));
  return sub_1800D5408(a1);
}
