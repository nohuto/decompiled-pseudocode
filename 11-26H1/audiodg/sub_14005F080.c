/*
 * XREFs of sub_14005F080 @ 0x14005F080
 * Callers:
 *     sub_14005F1D4 @ 0x14005F1D4 (sub_14005F1D4.c)
 * Callees:
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_14005EDB0 @ 0x14005EDB0 (sub_14005EDB0.c)
 */

_QWORD *__fastcall sub_14005F080(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r13
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r8
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _QWORD *i; // r11
  __int64 v13; // r15
  _QWORD *v14; // rax
  bool v15; // bl
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  _QWORD *v20; // r13
  bool v21; // bl
  _QWORD *v22; // rax
  _QWORD *v24; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-18h]
  _QWORD *v26; // [rsp+30h] [rbp-10h]
  _QWORD *v28; // [rsp+88h] [rbp+48h]
  _QWORD *v29; // [rsp+90h] [rbp+50h]

  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v9 = a2[4];
    v26 = a2;
    v10 = a2 + 2;
    v24 = a1 + 1;
    v25 = v6;
    if ( v10[3] > 7uLL )
      v10 = (_QWORD *)*v10;
    v11 = sub_140026BBC((__int64)a1, (__int64)v10, 2 * v9);
    v13 = 2 * (a1[6] & v11);
    v28 = *(_QWORD **)(v8 + 16 * (a1[6] & v11));
    v14 = *(_QWORD **)(v8 + 16 * (a1[6] & v11) + 8);
    v29 = v14;
    while ( 1 )
    {
      v15 = i == v14;
      sub_14005EDB0(&v24);
      if ( v15 )
        break;
      i = v26;
      v14 = v29;
      if ( v26 == a3 )
      {
        if ( v28 == a2 )
          *(_QWORD *)(v8 + 8 * v13) = v26;
        goto LABEL_18;
      }
    }
    if ( v28 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v13) = v7;
      v6 = v7;
    }
    *(_QWORD *)(v8 + 8 * v13 + 8) = v6;
    for ( i = v26; i != a3; *(_QWORD *)(v8 + 8 * v19 + 8) = v7 )
    {
      v17 = i + 2;
      if ( i[5] > 7uLL )
        v17 = (_QWORD *)*v17;
      v18 = sub_140026BBC(v16, (__int64)v17, 2LL * i[4]);
      v19 = 2 * (a1[6] & v18);
      v20 = *(_QWORD **)(v8 + 16 * (a1[6] & v18) + 8);
      while ( 1 )
      {
        v21 = i == v20;
        sub_14005EDB0(&v24);
        i = v26;
        if ( v21 )
          break;
        if ( v26 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v19) = v26;
          goto LABEL_18;
        }
      }
      *(_QWORD *)(v8 + 8 * v19) = v7;
    }
LABEL_18:
    v22 = v25;
    *v25 = i;
    i[1] = v22;
  }
  return a3;
}
