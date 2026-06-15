/*
 * XREFs of sub_14000C894 @ 0x14000C894
 * Callers:
 *     sub_14000C5E0 @ 0x14000C5E0 (sub_14000C5E0.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000D4D0 @ 0x14000D4D0 (sub_14000D4D0.c)
 *     sub_14000D640 @ 0x14000D640 (sub_14000D640.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14000C894(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  char *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int16 v19; // ax
  char *v20; // rax
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a2;
  v5 = *a1;
  *a1 = *a2;
  if ( v4 )
    sub_1400B6010(v4);
  if ( v5 )
    sub_1400B6010(v5);
  v6 = a2[1];
  v7 = a1[1];
  a1[1] = v6;
  if ( v6 )
    sub_1400B6010(v6);
  if ( v7 )
    sub_1400B6010(v7);
  v8 = a2[2];
  v9 = a1[2];
  a1[2] = v8;
  if ( v8 )
    sub_1400B6010(v8);
  if ( v9 )
    sub_1400B6010(v9);
  v10 = a2[4];
  v11 = a1[4];
  a1[4] = v10;
  if ( v10 )
    sub_1400B6010(v10);
  if ( v11 )
    sub_1400B6010(v11);
  v12 = a2[3];
  v13 = a1[3];
  a1[3] = v12;
  if ( v12 )
    sub_1400B6010(v12);
  if ( v13 )
    sub_1400B6010(v13);
  v14 = a2[5];
  v15 = a1[5];
  a1[5] = v14;
  if ( v14 )
    sub_1400B6010(v14);
  if ( v15 )
    sub_1400B6010(v15);
  sub_14000D4D0(a1 + 7, a2 + 7);
  sub_14000D4D0(a1 + 11, a2 + 11);
  sub_14000D4D0(a1 + 15, a2 + 15);
  sub_14000D4D0(a1 + 19, a2 + 19);
  sub_14000D640(a1 + 23, a2 + 23);
  sub_14000D640(a1 + 27, a2 + 27);
  sub_14000D640(a1 + 31, a2 + 31);
  sub_14000D640(a1 + 35, a2 + 35);
  *(_OWORD *)(a1 + 39) = *(_OWORD *)(a2 + 39);
  *((_DWORD *)a1 + 110) = *((_DWORD *)a2 + 110);
  *((_BYTE *)a1 + 48) = *((_BYTE *)a2 + 48);
  v16 = (char *)(a2 + 41);
  v17 = 56LL;
  v18 = (char *)a1 - v16;
  do
  {
    if ( v17 == -2147483590 )
      break;
    v19 = *(_WORD *)&v16[v18 + 328];
    if ( !v19 )
      break;
    *(_WORD *)v16 = v19;
    v16 += 2;
    --v17;
  }
  while ( v17 );
  v20 = v16 - 2;
  if ( v17 )
    v20 = v16;
  *(_WORD *)v20 = 0;
  result = -v17;
  if ( !v17 )
    return sub_140007934(
             (int)retaddr,
             414,
             (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
             -2147024774);
  return result;
}
