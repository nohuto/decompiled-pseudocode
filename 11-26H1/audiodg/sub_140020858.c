/*
 * XREFs of sub_140020858 @ 0x140020858
 * Callers:
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 *     sub_140054794 @ 0x140054794 (sub_140054794.c)
 * Callees:
 *     sub_140020994 @ 0x140020994 (sub_140020994.c)
 */

_QWORD *__fastcall sub_140020858(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi

  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *a2 = v6;
LABEL_6:
    a2[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( (unsigned __int8)sub_140020994(a1, a3, v8 + 2) )
    {
      if ( v8 == v9 )
      {
        *a2 = v8;
        goto LABEL_6;
      }
      v8 = (_QWORD *)v8[1];
    }
    *a2 = *v8;
    a2[1] = v8;
  }
  return a2;
}
