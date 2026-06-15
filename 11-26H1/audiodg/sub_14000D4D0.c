/*
 * XREFs of sub_14000D4D0 @ 0x14000D4D0
 * Callers:
 *     sub_14000C894 @ 0x14000C894 (sub_14000C894.c)
 *     sub_140066280 @ 0x140066280 (sub_140066280.c)
 * Callees:
 *     sub_14000D630 @ 0x14000D630 (sub_14000D630.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_14000D4D0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax

  v3 = a2[1];
  if ( v3 )
  {
    v6 = a1[2];
    if ( v3 <= v6 )
    {
      if ( v3 <= a1[1] )
        goto LABEL_5;
      goto LABEL_4;
    }
    v10 = *((int *)a1 + 6);
    if ( *a1 )
    {
      if ( !*((_DWORD *)a1 + 6) )
      {
        v10 = v6 >> 1;
        if ( v3 - v6 > v6 >> 1 )
          v10 = v3 - v6;
      }
      v10 += v6;
      if ( v3 >= v10 )
        v10 = a2[1];
      v11 = o_calloc(v10, 8LL);
      v12 = v11;
      if ( v11 )
      {
        sub_14000D7A4(v11, 8 * a1[1], *a1, 8 * a1[1]);
        _o_free(*a1);
        *a1 = v12;
LABEL_17:
        a1[2] = v10;
LABEL_4:
        sub_14000D630(v6, a2, a3);
        goto LABEL_5;
      }
    }
    else
    {
      if ( v10 <= v3 )
        v10 = a2[1];
      v14 = o_calloc(v10, 8LL);
      *a1 = v14;
      if ( v14 )
        goto LABEL_17;
    }
    sub_14004639C(2147942414LL, a2);
  }
  v13 = *a1;
  v3 = 0LL;
  if ( v13 )
  {
    _o_free(v13);
    *a1 = 0LL;
  }
  a1[2] = 0LL;
LABEL_5:
  a1[1] = v3;
  v7 = a2[1];
  result = (_QWORD *)*a1;
  if ( v7 )
  {
    v9 = *a2 - (_QWORD)result;
    do
    {
      *result = *(_QWORD *)((char *)result + v9);
      ++result;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
