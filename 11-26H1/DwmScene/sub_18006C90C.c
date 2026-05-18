/*
 * XREFs of sub_18006C90C @ 0x18006C90C
 * Callers:
 *     sub_18006C83C @ 0x18006C83C (sub_18006C83C.c)
 *     sub_18006D2C0 @ 0x18006D2C0 (sub_18006D2C0.c)
 *     sub_18006D84C @ 0x18006D84C (sub_18006D84C.c)
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 *     sub_18008F440 @ 0x18008F440 (sub_18008F440.c)
 *     sub_18008F590 @ 0x18008F590 (sub_18008F590.c)
 *     sub_1800D4F08 @ 0x1800D4F08 (sub_1800D4F08.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 */

_QWORD *__fastcall sub_18006C90C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v18; // [rsp+38h] [rbp-40h]
  _QWORD *v19; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v6 + 1;
  v9 = sub_180012790(a1, v6 + 1);
  v10 = sub_180011B48(v9);
  v17[0] = a1;
  v17[2] = v9;
  v11 = (_QWORD *)sub_180011790(v10);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  v19 = v12 + 2;
  sub_180012C40(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v18 = v12;
  if ( a2 != v13 )
  {
    sub_180013374(v15, a2, v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
    v18 = v11;
  }
  sub_180013374(v15, v13, v14);
  v17[1] = 0LL;
  sub_180014048((__int64)a1, (__int64)v11, v8, v9);
  sub_1800134DC((__int64)v17);
  return v12;
}
