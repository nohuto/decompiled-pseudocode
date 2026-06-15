/*
 * XREFs of sub_14000D640 @ 0x14000D640
 * Callers:
 *     sub_14000C894 @ 0x14000C894 (sub_14000C894.c)
 *     sub_140066280 @ 0x140066280 (sub_140066280.c)
 * Callees:
 *     sub_14000D630 @ 0x14000D630 (sub_14000D630.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_14000D640(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  _QWORD *result; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    v5 = a1[2];
    if ( v2 > v5 )
    {
      v6 = *((int *)a1 + 6);
      if ( *a1 )
      {
        if ( !*((_DWORD *)a1 + 6) )
        {
          v6 = v5 >> 1;
          if ( v2 - v5 > v5 >> 1 )
            v6 = v2 - v5;
        }
        v6 += v5;
        if ( v2 >= v6 )
          v6 = a2[1];
        v7 = o_calloc(v6, 8LL);
        v9 = v7;
        if ( v7 )
        {
          sub_14000D7A4(v7, 8 * a1[1], *a1, 8 * a1[1]);
          _o_free(*a1);
          *a1 = v9;
LABEL_11:
          a1[2] = v6;
LABEL_12:
          sub_14000D630();
          goto LABEL_13;
        }
      }
      else
      {
        if ( v6 <= v2 )
          v6 = a2[1];
        v13 = o_calloc(v6, 8LL);
        *a1 = v13;
        if ( v13 )
          goto LABEL_11;
      }
      sub_14004639C(2147942414LL, v8);
    }
    if ( v2 > a1[1] )
      goto LABEL_12;
  }
  else
  {
    v14 = *a1;
    v2 = 0LL;
    if ( v14 )
    {
      _o_free(v14);
      *a1 = 0LL;
    }
    a1[2] = 0LL;
  }
LABEL_13:
  a1[1] = v2;
  v10 = a2[1];
  result = (_QWORD *)*a1;
  if ( v10 )
  {
    v12 = *a2 - (_QWORD)result;
    do
    {
      *result = *(_QWORD *)((char *)result + v12);
      ++result;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
