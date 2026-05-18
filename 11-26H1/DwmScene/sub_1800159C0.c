/*
 * XREFs of sub_1800159C0 @ 0x1800159C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180015784 @ 0x180015784 (sub_180015784.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800159C0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _BYTE v14[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+18h]
  __int64 v17; // [rsp+80h] [rbp+20h] BYREF

  v3 = (_QWORD *)(a1 + 32);
  sub_18001367C(*(_QWORD *)(a1 + 32), &v12);
  v4 = v12;
  sub_180029C50(v12 + 16, v14);
  v5 = sub_180012C40(&v15, v3);
  sub_18003F6D8(v4, &v10, -1LL, v5);
  v17 = 0LL;
  sub_18000F938(&v17);
  v6 = sub_180015784(&v17, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v17;
    v17 = 0LL;
    *a2 = v9;
    sub_18000F938(&v17);
    if ( v11 )
      sub_180010EC8(v11);
    sub_180011E54((__int64)v14);
    if ( v13 )
      sub_180010EC8(v13);
    return 0LL;
  }
  else
  {
    sub_1800102C4(
      retaddr,
      82LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      (unsigned int)v6);
    sub_18000F938(&v17);
    if ( v11 )
      sub_180010EC8(v11);
    sub_180011E54((__int64)v14);
    if ( v13 )
      sub_180010EC8(v13);
    return v7;
  }
}
