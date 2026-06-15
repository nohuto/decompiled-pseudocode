/*
 * XREFs of sub_1400209D0 @ 0x1400209D0
 * Callers:
 *     sub_1400546DC @ 0x1400546DC (sub_1400546DC.c)
 * Callees:
 *     sub_140020A6C @ 0x140020A6C (sub_140020A6C.c)
 */

_QWORD *__fastcall sub_1400209D0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // r8
  _QWORD *v11; // rcx
  _QWORD *result; // rax

  v3 = a1[6];
  v5 = a1[3];
  v6 = 2 * (a3 & v3);
  v8 = *(_QWORD **)(v5 + 8 * v6 + 8);
  if ( v8 == (_QWORD *)a1[1] )
  {
LABEL_10:
    v8 = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 8 * v6);
    while ( 1 )
    {
      v10 = v8 + 2;
      if ( v8[5] > 7uLL )
        v10 = (_QWORD *)*v10;
      v11 = a2;
      if ( a2[3] > 7uLL )
        v11 = (_QWORD *)*a2;
      if ( (unsigned __int8)sub_140020A6C(v11, a2[2], v10, v8[4]) )
        break;
      if ( v8 == v9 )
        goto LABEL_10;
      v8 = (_QWORD *)v8[1];
    }
  }
  result = v8;
  if ( !v8 )
    return (_QWORD *)a1[1];
  return result;
}
