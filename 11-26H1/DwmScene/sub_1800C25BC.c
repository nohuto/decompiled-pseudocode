/*
 * XREFs of sub_1800C25BC @ 0x1800C25BC
 * Callers:
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 * Callees:
 *     sub_180052C64 @ 0x180052C64 (sub_180052C64.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 *     sub_1800C2960 @ 0x1800C2960 (sub_1800C2960.c)
 *     sub_1800C48DC @ 0x1800C48DC (sub_1800C48DC.c)
 */

__int64 __fastcall sub_1800C25BC(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  unsigned int v7; // r9d
  int v8; // r10d
  unsigned int v9; // r10d
  int v10; // edx
  unsigned int v11; // eax
  int v12; // r10d
  unsigned int v13; // eax
  int v14; // eax
  int v15; // r10d
  unsigned int v16; // eax
  int v17; // eax
  int v18; // r10d
  unsigned int v19; // eax
  bool v20; // zf
  int v21; // edx
  int v22; // eax
  int v23; // r10d
  unsigned int v24; // eax
  int v25; // eax
  int v26; // r10d
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // r10d
  __int64 *v30; // rax
  void *v32; // [rsp+50h] [rbp+20h] BYREF
  int v33; // [rsp+58h] [rbp+28h] BYREF
  int v34; // [rsp+60h] [rbp+30h] BYREF
  int v35; // [rsp+68h] [rbp+38h] BYREF

  v35 = a4;
  v34 = a3;
  v5 = a5;
  sub_1800C48DC(&a5, (unsigned int)a5[4]);
  if ( HIDWORD(a5) == 1 )
    v9 = v8 | 8;
  else
    v9 = v8 & 0xFFFFFFF7;
  v10 = v5[8];
  v11 = v9;
  v12 = v9 | 1;
  v13 = v11 & 0xFFFFFFFE;
  if ( (v10 & 8) == 0 )
    v12 = v13;
  v14 = v12;
  v15 = v12 | 2;
  v16 = v14 & 0xFFFFFFFD;
  if ( (v10 & 0x20) == 0 )
    v15 = v16;
  v17 = v15;
  v18 = v15 | 4;
  v19 = v17 & 0xFFFFFFFB;
  v20 = (v10 & 0x40) == 0;
  v21 = v5[10];
  if ( v20 )
    v18 = v19;
  v22 = v18;
  v23 = v18 | 0x10;
  v24 = v22 & 0xFFFFFFEF;
  if ( (v21 & 4) == 0 )
    v23 = v24;
  v25 = v23;
  v26 = v23 | 0x20;
  v27 = v25 & 0xFFFFFFDF;
  if ( (v21 & 1) == 0 )
    v26 = v27;
  v28 = v26 & 0xFFFFFFBF;
  v29 = v26 | 0x40;
  if ( v7 <= 1 )
    v29 = v28;
  v34 = v5[7];
  v33 = v29;
  v30 = sub_180052C64(&v32, v5, v5 + 1, (int *)&a5, &v33, &v34);
  a5 = (_DWORD *)*v30;
  *v30 = 0LL;
  sub_1800531F0(&v32);
  sub_1800C2960(a1, &a5, v5 + 2, &v35);
  sub_1800531F0((void **)&a5);
  return a1;
}
