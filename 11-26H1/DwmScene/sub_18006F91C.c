/*
 * XREFs of sub_18006F91C @ 0x18006F91C
 * Callers:
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18006FA14 @ 0x18006FA14 (sub_18006FA14.c)
 *     sub_18006FAA0 @ 0x18006FAA0 (sub_18006FAA0.c)
 *     sub_18006FAE0 @ 0x18006FAE0 (sub_18006FAE0.c)
 */

char *__fastcall sub_18006F91C(char **a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v7; // rbp
  __int64 v8; // r10
  char *v9; // rcx
  char *result; // rax
  unsigned __int64 v11; // rbp

  v3 = *a1;
  v4 = a3;
  if ( a3 <= (a1[2] - *a1) >> 3 )
  {
    v11 = (a1[1] - v3) >> 3;
    if ( a3 > v11 )
    {
      sub_18006FA14(a2);
      v3 = a1[1];
      v9 = &a2[8 * v11];
      v4 -= v11;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
      sub_180012A30();
    v7 = sub_18006FAE0(a1, a3);
    if ( v3 )
    {
      sub_18000E26C(v3, 8 * v8);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_18006FAA0(a1, v7);
    v3 = *a1;
  }
  v9 = a2;
LABEL_8:
  sub_18006FA14(v9);
  result = &v3[8 * v4];
  a1[1] = result;
  return result;
}
