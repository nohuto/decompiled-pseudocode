/*
 * XREFs of sub_1800D1ECC @ 0x1800D1ECC
 * Callers:
 *     sub_1800D30E0 @ 0x1800D30E0 (sub_1800D30E0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18001EB54 @ 0x18001EB54 (sub_18001EB54.c)
 *     sub_18001EB8C @ 0x18001EB8C (sub_18001EB8C.c)
 *     sub_18001F128 @ 0x18001F128 (sub_18001F128.c)
 *     sub_18001F3E4 @ 0x18001F3E4 (sub_18001F3E4.c)
 *     sub_18001F420 @ 0x18001F420 (sub_18001F420.c)
 *     sub_18001F778 @ 0x18001F778 (sub_18001F778.c)
 *     sub_18001F81C @ 0x18001F81C (sub_18001F81C.c)
 *     sub_1800D2510 @ 0x1800D2510 (sub_1800D2510.c)
 */

void __fastcall sub_1800D1ECC(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbp
  __int64 v7; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rsi
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
    if ( a4 <= (a1[2] - v4) >> 5 )
    {
      v17 = 32 * a4;
      if ( a4 >= (v4 - a2) >> 5 )
      {
        a1[1] = sub_18001F128(a2, v4, v17 + a2);
        v19 = v4;
      }
      else
      {
        v18 = v4 - v17;
        a1[1] = sub_18001F128(v4 - v17, a1[1], a1[1]);
        while ( v18 != a2 )
        {
          v18 -= 32LL;
          sub_18001F420(v17 + v18, v18);
        }
        v19 = v17 + a2;
      }
      sub_18001EB54(a2, v19);
      sub_1800D2510(a3, a4, a2);
    }
    else
    {
      v10 = (v4 - v7) >> 5;
      if ( a4 > 0x7FFFFFFFFFFFFFFLL - v10 )
        sub_180012A30();
      v25 = v10 + a4;
      v24 = sub_18001F778(a1, v10 + a4);
      v11 = sub_18001EB8C(v24);
      v12 = sub_180011790(v11);
      v20[2] = v24;
      v20[0] = a1;
      v13 = (a2 - v7) >> 5;
      v23 = v12 + 32 * (v13 + a4);
      v14 = 32 * v13 + v12;
      v22 = v23;
      sub_1800D2510(a3, a4, v14);
      v21 = v14;
      if ( a4 == 1 && a2 == v4 )
      {
        v15 = v12;
        v16 = v7;
      }
      else
      {
        sub_18001F128(v7, a2, v12);
        v15 = v23;
        v16 = a2;
        v21 = v12;
      }
      sub_18001F128(v16, v4, v15);
      v20[1] = 0LL;
      sub_18001F81C((__int64)a1, v12, v25, v24);
      sub_18001F3E4((__int64)v20);
    }
  }
}
