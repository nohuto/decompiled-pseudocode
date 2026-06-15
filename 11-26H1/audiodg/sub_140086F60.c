/*
 * XREFs of sub_140086F60 @ 0x140086F60
 * Callers:
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 * Callees:
 *     sub_14002A8F8 @ 0x14002A8F8 (sub_14002A8F8.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 *     sub_14005B2D0 @ 0x14005B2D0 (sub_14005B2D0.c)
 *     sub_14005FBC8 @ 0x14005FBC8 (sub_14005FBC8.c)
 *     sub_14005FE78 @ 0x14005FE78 (sub_14005FE78.c)
 *     sub_1400605D0 @ 0x1400605D0 (sub_1400605D0.c)
 *     sub_140064A88 @ 0x140064A88 (sub_140064A88.c)
 */

__int64 *__fastcall sub_140086F60(__int64 **a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r15
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-40h]
  __int64 *v21; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    sub_14005B2D0();
  v9 = v7 + 1;
  v10 = a1[2] - *a1;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  v12 = sub_14002A8F8(v3);
  v19[0] = a1;
  v13 = (__int64 *)sub_140044584(v12);
  v19[2] = v3;
  v14 = &v13[v5];
  v21 = v14 + 1;
  sub_140064A88(v14, a3);
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  v20 = v14;
  if ( a2 != v15 )
  {
    sub_14005FBC8(v17, a2, v13);
    v15 = a1[1];
    v16 = v14 + 1;
    v17 = a2;
    v20 = v13;
  }
  sub_14005FBC8(v17, v15, v16);
  v19[1] = 0LL;
  sub_1400605D0((__int64)a1, (__int64)v13, v9, v3);
  sub_14005FE78((__int64)v19);
  return v14;
}
