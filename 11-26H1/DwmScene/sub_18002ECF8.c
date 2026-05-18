/*
 * XREFs of sub_18002ECF8 @ 0x18002ECF8
 * Callers:
 *     sub_180035614 @ 0x180035614 (sub_180035614.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180011964 @ 0x180011964 (sub_180011964.c)
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 *     sub_180011B74 @ 0x180011B74 (sub_180011B74.c)
 *     sub_180011EBC @ 0x180011EBC (sub_180011EBC.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_1800127CC @ 0x1800127CC (sub_1800127CC.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18002FA70 @ 0x18002FA70 (sub_18002FA70.c)
 *     sub_180031F70 @ 0x180031F70 (sub_180031F70.c)
 */

void __fastcall sub_18002ECF8(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rdx
  _QWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+90h] [rbp+8h]
  __int64 v24; // [rsp+98h] [rbp+10h]
  __int64 v25; // [rsp+A8h] [rbp+20h]

  if ( a4 )
  {
    v4 = a1[1];
    v7 = *a1;
    if ( a4 <= (a1[2] - v4) >> 4 )
    {
      v17 = 16 * a4;
      if ( a4 >= (v4 - a2) >> 4 )
      {
        a1[1] = sub_180011B74(a2, v4, v17 + a2);
        v19 = v4;
      }
      else
      {
        v18 = v4 - v17;
        a1[1] = sub_180011B74(v4 - v17, a1[1], a1[1]);
        while ( v18 != a2 )
        {
          v18 -= 16LL;
          sub_180031F70(v17 + v18, v18);
        }
        v19 = v17 + a2;
      }
      sub_180011964(a2, v19);
      sub_18002FA70(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 4;
      if ( a4 > 0xFFFFFFFFFFFFFFFLL - v10 )
        sub_180012A30();
      v25 = v10 + a4;
      v24 = sub_180012790(a1, v10 + a4);
      v11 = sub_180011B48(v24);
      v12 = sub_180011790(v11);
      v20[2] = v24;
      v20[0] = a1;
      v13 = (a2 - v7) >> 4;
      v23 = v12 + 16 * (v13 + a4);
      v14 = v12 + 16 * v13;
      v22 = v23;
      sub_18002FA70(a3, a4, v14);
      v21 = v14;
      if ( a4 == 1 && a2 == v4 )
      {
        v15 = v12;
        v16 = v7;
      }
      else
      {
        sub_180011B74(v7, a2, v12);
        v15 = v23;
        v16 = a2;
        v21 = v12;
      }
      sub_180011B74(v16, v4, v15);
      v20[1] = 0LL;
      sub_1800127CC((__int64)a1, v12, v25, v24);
      sub_180011EBC((__int64)v20);
    }
  }
}
