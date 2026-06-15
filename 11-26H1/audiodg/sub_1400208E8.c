/*
 * XREFs of sub_1400208E8 @ 0x1400208E8
 * Callers:
 *     sub_140020D64 @ 0x140020D64 (sub_140020D64.c)
 * Callees:
 *     sub_140020A6C @ 0x140020A6C (sub_140020A6C.c)
 */

_QWORD *__fastcall sub_1400208E8(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbp
  _QWORD *v10; // r8
  _QWORD *v11; // rcx

  v5 = a1[3];
  v7 = (_QWORD *)a1[1];
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v7 )
  {
    *a2 = v7;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( 1 )
    {
      v10 = v8 + 2;
      if ( v8[5] > 7uLL )
        v10 = (_QWORD *)*v10;
      v11 = a3;
      if ( a3[3] > 7uLL )
        v11 = (_QWORD *)*a3;
      if ( (unsigned __int8)sub_140020A6C(v11, a3[2], v10, v8[4]) )
      {
        *a2 = *v8;
        a2[1] = v8;
        return a2;
      }
      if ( v8 == v9 )
        break;
      v8 = (_QWORD *)v8[1];
    }
    *a2 = v8;
  }
  a2[1] = 0LL;
  return a2;
}
