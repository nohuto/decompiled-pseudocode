/*
 * XREFs of sub_18007D480 @ 0x18007D480
 * Callers:
 *     sub_18007DC00 @ 0x18007DC00 (sub_18007DC00.c)
 * Callees:
 *     sub_180017A50 @ 0x180017A50 (sub_180017A50.c)
 *     sub_18007F368 @ 0x18007F368 (sub_18007F368.c)
 */

char *__fastcall sub_18007D480(void **a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rdi
  char *v7; // rcx
  char *result; // rax
  unsigned __int64 v9; // rbp

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2 )
  {
    v9 = ((_BYTE *)a1[1] - v3) >> 2;
    if ( a3 > v9 )
    {
      sub_180017A50(a2, ((_BYTE *)a1[1] - v3) >> 2, *a1);
      v3 = (char *)a1[1];
      v7 = &a2[4 * v9];
      v4 -= v9;
      goto LABEL_4;
    }
  }
  else
  {
    sub_18007F368(a1, a3);
    v3 = (char *)*a1;
  }
  v7 = a2;
LABEL_4:
  sub_180017A50(v7, v4, v3);
  result = &v3[4 * v4];
  a1[1] = result;
  return result;
}
