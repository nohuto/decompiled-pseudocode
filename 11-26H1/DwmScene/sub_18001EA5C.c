/*
 * XREFs of sub_18001EA5C @ 0x18001EA5C
 * Callers:
 *     sub_18001F45C @ 0x18001F45C (sub_18001F45C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180017A50 @ 0x180017A50 (sub_180017A50.c)
 *     sub_18001BA3C @ 0x18001BA3C (sub_18001BA3C.c)
 *     sub_18001F73C @ 0x18001F73C (sub_18001F73C.c)
 */

char *__fastcall sub_18001EA5C(void **a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 v7; // rbp
  __int64 v8; // r10
  char *v9; // rcx
  char *result; // rax
  unsigned __int64 v11; // rbp

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2 )
  {
    v11 = ((_BYTE *)a1[1] - v3) >> 2;
    if ( a3 > v11 )
    {
      sub_180017A50(a2, ((_BYTE *)a1[1] - v3) >> 2, *a1);
      v3 = (char *)a1[1];
      v9 = &a2[4 * v11];
      v4 -= v11;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      sub_180012A30();
    v7 = sub_18001F73C(a1, a3);
    if ( v3 )
    {
      sub_18000E26C(v3, 4 * v8);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_18001BA3C((__int64 *)a1, v7);
    v3 = (char *)*a1;
  }
  v9 = a2;
LABEL_8:
  sub_180017A50(v9, v4, v3);
  result = &v3[4 * v4];
  a1[1] = result;
  return result;
}
