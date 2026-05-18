/*
 * XREFs of sub_18003E8AC @ 0x18003E8AC
 * Callers:
 *     sub_18003E6E8 @ 0x18003E6E8 (sub_18003E6E8.c)
 *     sub_18003EC38 @ 0x18003EC38 (sub_18003EC38.c)
 *     sub_180041D60 @ 0x180041D60 (sub_180041D60.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18003E8AC(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
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
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v7[2] )
    {
      if ( v7 == *(_QWORD **)(v4 + 8 * v6) )
      {
        *a2 = v7;
        goto LABEL_3;
      }
      v7 = (_QWORD *)v7[1];
    }
    *a2 = *v7;
    a2[1] = v7;
  }
  return a2;
}
