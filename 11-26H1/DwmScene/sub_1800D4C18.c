/*
 * XREFs of sub_1800D4C18 @ 0x1800D4C18
 * Callers:
 *     sub_1800D4E1C @ 0x1800D4E1C (sub_1800D4E1C.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_180013374 @ 0x180013374 (sub_180013374.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180014048 @ 0x180014048 (sub_180014048.c)
 *     sub_18008F2DC @ 0x18008F2DC (sub_18008F2DC.c)
 */

void __fastcall sub_1800D4C18(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r8
  _QWORD *v14; // rdi
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 *v18; // rdi
  __int64 v19; // rdx
  _QWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-50h]
  _QWORD *v22; // [rsp+40h] [rbp-48h]
  _QWORD *v23; // [rsp+90h] [rbp+8h]
  __int64 v24; // [rsp+98h] [rbp+10h]
  __int64 v25; // [rsp+A8h] [rbp+20h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 4 )
    {
      v17 = 2 * a4;
      if ( a4 >= (v4 - (__int64)a2) >> 4 )
      {
        a1[1] = (__int64)sub_180013374((__int64)a2, v4, &a2[v17]);
        v19 = v4;
      }
      else
      {
        v18 = (__int64 *)(v4 - v17 * 8);
        a1[1] = (__int64)sub_180013374(v4 - v17 * 8, a1[1], (_QWORD *)a1[1]);
        while ( v18 != a2 )
        {
          v18 -= 2;
          sub_180011F5C(&v18[v17], v18);
        }
        v19 = (__int64)&a2[v17];
      }
      sub_1800130CC((__int64)a2, v19);
      sub_18008F2DC(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 4;
      if ( a4 > 0xFFFFFFFFFFFFFFFLL - v10 )
        sub_180012A30();
      v25 = v10 + a4;
      v24 = sub_180012790(a1, v10 + a4);
      v11 = sub_180011B48(v24);
      v12 = (_QWORD *)sub_180011790(v11);
      v20[2] = v24;
      v20[0] = a1;
      v13 = ((__int64)a2 - v7) >> 4;
      v23 = &v12[2 * v13 + 2 * a4];
      v14 = &v12[2 * v13];
      v22 = v23;
      sub_18008F2DC(a3, a4, v14);
      v21 = v14;
      if ( a4 == 1 && a2 == (__int64 *)v4 )
      {
        v15 = v12;
        v16 = v7;
      }
      else
      {
        sub_180013374(v7, (__int64)a2, v12);
        v15 = v23;
        v16 = (__int64)a2;
        v21 = v12;
      }
      sub_180013374(v16, v4, v15);
      v20[1] = 0LL;
      sub_180014048((__int64)a1, (__int64)v12, v25, v24);
      sub_1800134DC((__int64)v20);
    }
  }
}
