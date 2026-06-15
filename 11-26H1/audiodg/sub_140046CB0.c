/*
 * XREFs of sub_140046CB0 @ 0x140046CB0
 * Callers:
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140054730 @ 0x140054730 (sub_140054730.c)
 * Callees:
 *     sub_140020994 @ 0x140020994 (sub_140020994.c)
 */

_QWORD *__fastcall sub_140046CB0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
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
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( sub_140020994((__int64)a1, a3, v8 + 2) )
    {
      if ( v8 == v9 )
      {
        *a2 = v8;
        goto LABEL_3;
      }
      v8 = (_QWORD *)v8[1];
    }
    *a2 = *v8;
    a2[1] = v8;
  }
  return a2;
}
