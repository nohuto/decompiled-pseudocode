/*
 * XREFs of sub_18008F4EC @ 0x18008F4EC
 * Callers:
 *     sub_18006B7DC @ 0x18006B7DC (sub_18006B7DC.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 *     sub_1800DCAB9 @ 0x1800DCAB9 (sub_1800DCAB9.c)
 *     sub_1800DCB05 @ 0x1800DCB05 (sub_1800DCB05.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18008F4EC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_180010EC8(v2);
  return sub_1800141F0(a1);
}
