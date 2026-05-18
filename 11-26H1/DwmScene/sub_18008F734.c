/*
 * XREFs of sub_18008F734 @ 0x18008F734
 * Callers:
 *     sub_18006B9D8 @ 0x18006B9D8 (sub_18006B9D8.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18008F440 @ 0x18008F440 (sub_18008F440.c)
 *     sub_18008F654 @ 0x18008F654 (sub_18008F654.c)
 *     sub_180093AD0 @ 0x180093AD0 (sub_180093AD0.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 * Callees:
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 */

__int64 __fastcall sub_18008F734(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    sub_1800130CC(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
