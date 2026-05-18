/*
 * XREFs of sub_1800177F0 @ 0x1800177F0
 * Callers:
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 * Callees:
 *     sub_180017A50 @ 0x180017A50 (sub_180017A50.c)
 *     sub_18001BAE4 @ 0x18001BAE4 (sub_18001BAE4.c)
 */

__int64 __fastcall sub_1800177F0(__int64 *a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  char *v7; // rcx
  __int64 result; // rax
  unsigned __int64 v9; // rbp

  v3 = *a1;
  v4 = a3;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v9 = (a1[1] - v3) >> 2;
    if ( a3 > v9 )
    {
      sub_180017A50(a2);
      v3 = a1[1];
      v7 = &a2[4 * v9];
      v4 -= v9;
      goto LABEL_4;
    }
  }
  else
  {
    sub_18001BAE4(a1, a3);
    v3 = *a1;
  }
  v7 = a2;
LABEL_4:
  sub_180017A50(v7);
  result = v3 + 4 * v4;
  a1[1] = result;
  return result;
}
