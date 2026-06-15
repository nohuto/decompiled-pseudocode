/*
 * XREFs of sub_14000E144 @ 0x14000E144
 * Callers:
 *     sub_14001003C @ 0x14001003C (sub_14001003C.c)
 * Callees:
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 *     sub_14000DE10 @ 0x14000DE10 (sub_14000DE10.c)
 *     sub_14000E30C @ 0x14000E30C (sub_14000E30C.c)
 *     sub_14000E334 @ 0x14000E334 (sub_14000E334.c)
 *     sub_14000E88C @ 0x14000E88C (sub_14000E88C.c)
 *     sub_14000EA58 @ 0x14000EA58 (sub_14000EA58.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005A010 @ 0x14005A010 (sub_14005A010.c)
 *     sub_14006A86C @ 0x14006A86C (sub_14006A86C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_UNKNOWN **__fastcall sub_14000E144(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  __int64 *v3; // rdx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdi

  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14006A86C(*((_QWORD *)off_1400E73D8 + 2), 39LL, &unk_1400C9A58, a1);
  }
  result = sub_140006060((__int64)a1);
  if ( a1[10] )
  {
    v4 = (_QWORD **)(a1 + 8);
    do
    {
      v5 = *v4;
      if ( !*v4 )
LABEL_16:
        sub_14004639C(2147500037LL, v3);
      v6 = (_QWORD *)*v5;
      v7 = v5[2];
      *v4 = (_QWORD *)*v5;
      if ( v6 )
        v6[1] = 0LL;
      else
        a1[9] = 0LL;
      *v5 = a1[12];
      v8 = a1[10]-- == 1LL;
      a1[12] = v5;
      if ( v8 )
        sub_14000EA58(a1 + 8);
      while ( *(_QWORD *)(v7 + 16) )
      {
        v3 = *(__int64 **)v7;
        if ( !*(_QWORD *)v7 )
          goto LABEL_16;
        v9 = *v3;
        v10 = v3[2];
        *(_QWORD *)v7 = *v3;
        if ( v9 )
          *(_QWORD *)(v9 + 8) = 0LL;
        else
          *(_QWORD *)(v7 + 8) = 0LL;
        sub_14000E30C(v7);
        if ( v10 )
          sub_14000E88C(v10);
      }
      sub_14000E334(v7);
      result = (_UNKNOWN **)j_j__o_free(v7, 48LL);
    }
    while ( a1[10] );
  }
  while ( a1[4] )
  {
    v11 = sub_14000DE10((__int64)(a1 + 2));
    if ( *(_DWORD *)(v11 + 40) == 2 )
      sub_1400B6010(a1[30]);
    result = (_UNKNOWN **)sub_1400B6010(v11);
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_DWORD *)off_1400E73D8 + 7) & 0x20000) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    return (_UNKNOWN **)sub_14005A010(*((_QWORD *)off_1400E73D8 + 2), 40LL, &unk_1400C9A58);
  }
  return result;
}
