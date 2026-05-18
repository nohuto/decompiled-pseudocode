/*
 * XREFs of sub_1800C26E0 @ 0x1800C26E0
 * Callers:
 *     sub_1800C50F4 @ 0x1800C50F4 (sub_1800C50F4.c)
 * Callees:
 *     sub_180052BCC @ 0x180052BCC (sub_180052BCC.c)
 *     sub_180052C64 @ 0x180052C64 (sub_180052C64.c)
 *     sub_1800531F0 @ 0x1800531F0 (sub_1800531F0.c)
 *     sub_1800C2960 @ 0x1800C2960 (sub_1800C2960.c)
 *     sub_1800C48DC @ 0x1800C48DC (sub_1800C48DC.c)
 */

__int64 __fastcall sub_1800C26E0(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // rbx
  int v7; // edi
  int v8; // r9d
  int v9; // r10d
  unsigned int v10; // r9d
  int v11; // edx
  int *v12; // r8
  int v13; // r14d
  unsigned int v14; // eax
  int v15; // r9d
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // eax
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // eax
  bool v22; // zf
  int v23; // edx
  int v24; // eax
  int v25; // r9d
  unsigned int v26; // eax
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // eax
  int v30; // eax
  __int64 *v31; // rax
  void *v33; // [rsp+40h] [rbp-10h] BYREF
  void *v34; // [rsp+48h] [rbp-8h] BYREF
  int v35; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+38h] BYREF
  int v37; // [rsp+90h] [rbp+40h] BYREF
  int v38; // [rsp+98h] [rbp+48h] BYREF

  v38 = a4;
  v37 = a3;
  v5 = a5;
  v7 = 1;
  v35 = 1;
  sub_1800C48DC(&a5, (unsigned int)a5[4]);
  if ( HIDWORD(a5) == 1 )
    v10 = v8 | 8;
  else
    v10 = v8 & 0xFFFFFFF7;
  v11 = v5[6];
  v12 = v5 + 1;
  v13 = 2;
  v14 = v10 & 0xFFFFFFFE;
  v15 = v10 | 1;
  if ( (v11 & 8) == 0 )
    v15 = v14;
  v16 = v15;
  v17 = v15 | 2;
  v18 = v16 & 0xFFFFFFFD;
  if ( (v11 & 0x20) == 0 )
    v17 = v18;
  v19 = v17;
  v20 = v17 | 4;
  v21 = v19 & 0xFFFFFFFB;
  v22 = (v11 & 0x40) == 0;
  v23 = v5[8];
  if ( v22 )
    v20 = v21;
  v24 = v20;
  v25 = v20 | 0x10;
  v26 = v24 & 0xFFFFFFEF;
  if ( (v23 & 4) == 0 )
    v25 = v26;
  v27 = v25;
  v28 = v25 | 0x20;
  v29 = v27 & 0xFFFFFFDF;
  if ( (v23 & 1) == 0 )
    v28 = v29;
  v30 = v5[5];
  v36 = v28 & 0xFFFFFFBF;
  if ( v9 )
  {
    v38 = v30;
    v31 = sub_180052BCC(&v33, v5, v12, &v37, (int *)&a5, (int *)&v36, &v38);
    v7 = 0;
  }
  else
  {
    v37 = v30;
    v31 = sub_180052C64(&v34, v5, v12, (int *)&a5, (int *)&v36, &v37);
    v13 = 0;
  }
  a5 = (_DWORD *)*v31;
  *v31 = 0LL;
  if ( v13 )
    sub_1800531F0(&v33);
  if ( v7 )
    sub_1800531F0(&v34);
  sub_1800C2960(a1, &a5, v5 + 3, &v35);
  sub_1800531F0((void **)&a5);
  return a1;
}
