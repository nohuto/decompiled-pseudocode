/*
 * XREFs of sub_1400318E0 @ 0x1400318E0
 * Callers:
 *     sub_140017ED8 @ 0x140017ED8 (sub_140017ED8.c)
 *     sub_140054680 @ 0x140054680 (sub_140054680.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400318E0(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rax
  _QWORD *v7; // r9

  v4 = a1[3];
  v5 = (_QWORD *)a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD **)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == v7[2] )
      {
        *a2 = *v7;
        a2[1] = v7;
        return a2;
      }
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
        break;
      v7 = (_QWORD *)v7[1];
    }
    *a2 = v7;
  }
  a2[1] = 0LL;
  return a2;
}
