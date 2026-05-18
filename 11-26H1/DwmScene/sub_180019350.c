/*
 * XREFs of sub_180019350 @ 0x180019350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180017668 @ 0x180017668 (sub_180017668.c)
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180019350(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  sub_1800330EC(a1[7], &v9);
  sub_180029C50(v9 + 16, v11);
  v13 = 0LL;
  sub_18000F938(&v13);
  v4 = sub_180017668(&v13, (__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = v13;
    v7 = (_QWORD *)a1[15];
    if ( v7 == (_QWORD *)a1[16] )
    {
      sub_180017A8C(a1 + 14, (__int64)v7, &v14);
    }
    else
    {
      *v7 = v13;
      a1[15] += 8LL;
    }
    v8 = v13;
    v13 = 0LL;
    *a2 = v8;
    sub_18000F938(&v13);
    sub_180011E54((__int64)v11);
    if ( v10 )
      sub_180010EC8(v10);
    return 0LL;
  }
  else
  {
    sub_1800102C4(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000F938(&v13);
    sub_180011E54((__int64)v11);
    if ( v10 )
      sub_180010EC8(v10);
    return v5;
  }
}
