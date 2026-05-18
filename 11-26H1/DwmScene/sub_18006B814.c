/*
 * XREFs of sub_18006B814 @ 0x18006B814
 * Callers:
 *     sub_18006C134 @ 0x18006C134 (sub_18006C134.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18006B96C @ 0x18006B96C (sub_18006B96C.c)
 *     sub_18006BBE4 @ 0x18006BBE4 (sub_18006BBE4.c)
 *     sub_18006BFF0 @ 0x18006BFF0 (sub_18006BFF0.c)
 *     sub_18008F3D0 @ 0x18008F3D0 (sub_18008F3D0.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18006B814(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+40h] [rbp-38h]

  v6 = a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 7;
  if ( v7 == 0x1FFFFFFFFFFFFFFLL )
    sub_180012A30();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 7;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v7 + 1;
    if ( v10 + v9 >= v8 )
      v11 = v10 + v9;
    if ( v11 > 0x1FFFFFFFFFFFFFFLL )
      sub_180012970();
  }
  else
  {
    v11 = 0x1FFFFFFFFFFFFFFLL;
  }
  v12 = sub_180011790(v11 << 7);
  v13 = v12 + (v6 & 0xFFFFFFFFFFFFFF80uLL);
  v17 = a1;
  v18 = v12;
  v19 = v11;
  v21 = v13 + 128;
  sub_18008F3D0(v13, a3);
  v20 = v13;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    sub_18006B96C(v15, v14, v12, a1);
  }
  else
  {
    sub_18006B96C(v15, a2, v12, a1);
    v20 = v12;
    sub_18006B96C(a2, a1[1], v13 + 128, a1);
  }
  v18 = 0LL;
  sub_18006BFF0(a1, v12, v8, v11);
  sub_18006BBE4(&v17);
  return v13;
}
