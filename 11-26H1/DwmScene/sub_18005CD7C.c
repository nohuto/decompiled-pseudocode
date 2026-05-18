/*
 * XREFs of sub_18005CD7C @ 0x18005CD7C
 * Callers:
 *     sub_1800DC1DE @ 0x1800DC1DE (sub_1800DC1DE.c)
 *     sub_1800DC1F4 @ 0x1800DC1F4 (sub_1800DC1F4.c)
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

__int64 __fastcall sub_18005CD7C(__int64 a1)
{
  return sub_18000BFA4(a1, 16LL, 10LL, (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
