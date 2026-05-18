/*
 * XREFs of sub_180053FD0 @ 0x180053FD0
 * Callers:
 *     sub_1800283D0 @ 0x1800283D0 (sub_1800283D0.c)
 *     sub_18006B530 @ 0x18006B530 (sub_18006B530.c)
 * Callees:
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_180052864 @ 0x180052864 (sub_180052864.c)
 *     sub_180054510 @ 0x180054510 (sub_180054510.c)
 */

__int64 __fastcall sub_180053FD0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    sub_180054510(a1 + 136, 0LL);
  v5 = a2;
  sub_180052864((__int64 *)(a1 + 112), &v5);
  v5 = a2;
  return sub_180029420((__int64 *)(a1 + 80), &v5);
}
