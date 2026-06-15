/*
 * XREFs of sub_140025D60 @ 0x140025D60
 * Callers:
 *     sub_140025C58 @ 0x140025C58 (sub_140025C58.c)
 *     sub_1400AF6EB @ 0x1400AF6EB (sub_1400AF6EB.c)
 * Callees:
 *     sub_14000D630 @ 0x14000D630 (sub_14000D630.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 */

char __fastcall sub_140025D60(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  void *v10; // rax
  __int64 v11; // r14

  v2 = 0LL;
  if ( !a2 )
  {
    if ( *a1 )
    {
      _o_free(*a1);
      *a1 = 0LL;
    }
    a1[2] = 0LL;
    goto LABEL_10;
  }
  v5 = a1[2];
  if ( a2 <= v5 )
  {
    if ( a2 <= a1[1] )
      goto LABEL_9;
    goto LABEL_8;
  }
  v6 = *((int *)a1 + 6);
  if ( *a1 )
  {
    if ( !v6 )
    {
      v6 = v5 >> 1;
      if ( a2 - v5 > v5 >> 1 )
        v6 = a2 - v5;
    }
    v7 = a2;
    if ( a2 < v5 + v6 )
      v7 = v5 + v6;
    v10 = (void *)o_calloc(v7, 8LL);
    v11 = (__int64)v10;
    if ( v10 )
    {
      sub_14000D7A4(v10, 8 * a1[1], (const void *)*a1, 8 * a1[1]);
      _o_free(*a1);
      *a1 = v11;
LABEL_7:
      a1[2] = v7;
LABEL_8:
      sub_14000D630();
LABEL_9:
      v2 = a2;
LABEL_10:
      a1[1] = v2;
      return 1;
    }
  }
  else
  {
    v7 = a2;
    if ( v6 > a2 )
      v7 = v6;
    v8 = o_calloc(v7, 8LL);
    *a1 = v8;
    if ( v8 )
      goto LABEL_7;
  }
  return 0;
}
