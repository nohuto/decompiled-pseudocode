/*
 * XREFs of sub_1800DC95B @ 0x1800DC95B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 */

__int64 __fastcall sub_1800DC95B(__int64 a1, __int64 a2)
{
  return sub_18000BFA4(
           *(_QWORD *)(a2 + 56) + 192LL,
           16LL,
           4LL,
           (void (__fastcall *)(__int64))Concurrency::details::TaskStack::~TaskStack);
}
