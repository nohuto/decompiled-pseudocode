/*
 * XREFs of sub_18009344C @ 0x18009344C
 * Callers:
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 *     sub_18006F430 @ 0x18006F430 (sub_18006F430.c)
 *     sub_1800907C0 @ 0x1800907C0 (sub_1800907C0.c)
 */

unsigned __int64 __fastcall sub_18009344C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // rsi
  const void *v13; // rax
  const void *v14; // r8
  _QWORD *v15; // r12
  _QWORD **v16; // r8
  const void *v17; // rax
  const void *v18; // r8
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // r8
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v31; // [rsp+50h] [rbp+8h] BYREF

  HIDWORD(v31) = HIDWORD(a1);
  LODWORD(v31) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  v3 = qword_1801CDAE8;
  LODWORD(v31) = 0;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  sub_180041860((__int64)&qword_1801CDAF8, 2 * v5, qword_1801CDAE8);
  qword_1801CDB18 = v5;
  qword_1801CDB10 = v5 - 1;
  v6 = *(_QWORD **)qword_1801CDAE8;
  v7 = *(_QWORD **)qword_1801CDAE8;
  while ( v6 != (_QWORD *)v3 )
  {
    v7 = (_QWORD *)*v7;
    v8 = sub_18006F430((__int64)(v6 + 2));
    v10 = qword_1801CDAF8;
    v11 = 2 * (v9 & v8);
    if ( *(_QWORD *)(qword_1801CDAF8 + 16 * (v9 & v8)) == v3 )
    {
      *(_QWORD *)(qword_1801CDAF8 + 16 * (v9 & v8)) = v6;
LABEL_15:
      *(_QWORD *)(v10 + 8 * v11 + 8) = v6;
      goto LABEL_16;
    }
    v12 = *(_QWORD **)(qword_1801CDAF8 + 16 * (v9 & v8) + 8);
    sub_1800148EC((__int64)(v12 + 2));
    v13 = (const void *)sub_1800148EC((__int64)(v6 + 2));
    if ( sub_18001CFB0(v13, v6[4], v14, v12[4]) )
    {
      v26 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 != v6 )
      {
        v27 = (_QWORD *)v6[1];
        *v27 = v7;
        v28 = (_QWORD *)v7[1];
        *v28 = v26;
        v29 = (_QWORD *)v26[1];
        *v29 = v6;
        v26[1] = v28;
        v7[1] = v27;
        v6[1] = v29;
      }
      goto LABEL_15;
    }
    v15 = v12;
    while ( 1 )
    {
      v16 = (_QWORD **)(v12 + 1);
      if ( *(_QWORD **)(v10 + 8 * v11) == v15 )
        break;
      v12 = *v16;
      v15 = *v16;
      sub_1800148EC((__int64)(*v16 + 2));
      v17 = (const void *)sub_1800148EC((__int64)(v6 + 2));
      if ( sub_18001CFB0(v17, v6[4], v18, v12[4]) )
      {
        v19 = *v12;
        v20 = (_QWORD *)v6[1];
        *v20 = v7;
        v21 = (_QWORD *)v7[1];
        *v21 = v19;
        v22 = *(_QWORD **)(v19 + 8);
        *v22 = v6;
        *(_QWORD *)(v19 + 8) = v21;
        v7[1] = v20;
        v6[1] = v22;
        goto LABEL_16;
      }
    }
    v23 = (_QWORD *)v6[1];
    *v23 = v7;
    v24 = (_QWORD *)v7[1];
    *v24 = v12;
    v25 = *v16;
    *v25 = v6;
    *v16 = v24;
    v7[1] = v23;
    v6[1] = v25;
    *(_QWORD *)(v10 + 8 * v11) = v6;
LABEL_16:
    v6 = v7;
  }
  v31 = 0LL;
  return sub_1800907C0(&v31);
}
