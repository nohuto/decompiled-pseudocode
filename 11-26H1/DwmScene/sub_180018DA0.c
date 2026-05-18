/*
 * XREFs of sub_180018DA0 @ 0x180018DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180017198 @ 0x180017198 (sub_180017198.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180033D9C @ 0x180033D9C (sub_180033D9C.c)
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180018DA0(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h]
  _BYTE v15[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a2;
  sub_180033D9C(*(_QWORD *)(a1 + 56), &v13);
  v4 = v13;
  sub_180029C50(v13 + 16, v15);
  v5 = sub_180013440(v17, (__int64)&unk_1801C90B8);
  v6 = sub_180040570(v4, v16, v5);
  sub_18003F6D8(v4, &v11, -1LL, v6);
  v19 = 0LL;
  sub_18000F938(&v19);
  v7 = sub_180017198(&v19, &v20, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = v19;
    v19 = 0LL;
    *a3 = v10;
    sub_18000F938(&v19);
    if ( v12 )
      sub_180010EC8(v12);
    sub_180011E54((__int64)v15);
    if ( v14 )
      sub_180010EC8(v14);
    return 0LL;
  }
  else
  {
    sub_1800102C4(
      retaddr,
      320LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v7);
    sub_18000F938(&v19);
    if ( v12 )
      sub_180010EC8(v12);
    sub_180011E54((__int64)v15);
    if ( v14 )
      sub_180010EC8(v14);
    return v8;
  }
}
