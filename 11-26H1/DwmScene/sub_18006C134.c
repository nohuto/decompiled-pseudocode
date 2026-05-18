/*
 * XREFs of sub_18006C134 @ 0x18006C134
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 * Callees:
 *     sub_18006BA64 @ 0x18006BA64 (sub_18006BA64.c)
 */

unsigned __int64 __fastcall sub_18006C134(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 result; // rax

  v4 = a1[1];
  if ( v4 == a1[2] )
    return sub_18006B814(a1, v4, a2);
  result = sub_18006BA64((__int64)a1, v4, a2);
  a1[1] += 128LL;
  return result;
}
