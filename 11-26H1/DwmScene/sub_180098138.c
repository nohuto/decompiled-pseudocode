/*
 * XREFs of sub_180098138 @ 0x180098138
 * Callers:
 *     sub_18009891C @ 0x18009891C (sub_18009891C.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall sub_180098138(__m128i *a1, __m128i *a2)
{
  __m128i *v4; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v6; // rdx

  if ( (unsigned __int64)((char *)a2 - (char *)a1) < 0x20 )
  {
    if ( (unsigned __int64)((char *)a2 - (char *)a1) < 0x10 )
      goto LABEL_7;
  }
  else if ( (dword_1801C7B44 & 0x20) != 0 )
  {
    return (const __m128i *)sub_18000B340(a1->m128i_i64, a2->m128i_i64, 0);
  }
  if ( (dword_1801C7B44 & 4) != 0 )
    return sub_18000B5D0(a1, a2, 0);
LABEL_7:
  v4 = a1;
  for ( i = -1LL; a1 != a2; i = v6 )
  {
    v6 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] < i )
      v4 = a1;
    a1 = (__m128i *)((char *)a1 + 8);
    if ( v6 >= i )
      v6 = i;
  }
  return v4;
}
