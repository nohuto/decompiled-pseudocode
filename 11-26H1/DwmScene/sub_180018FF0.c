/*
 * XREFs of sub_180018FF0 @ 0x180018FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180016E10 @ 0x180016E10 (sub_180016E10.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 */

__int64 __fastcall sub_180018FF0(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  sub_180016E10(*(_QWORD **)(a1 + 56), &v6);
  v9 = 0LL;
  sub_18000F938(&v9);
  v3 = sub_1800173E0(&v9, &v6);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v9;
    v9 = 0LL;
    sub_18000F938(&v9);
    if ( v7 )
      sub_180010EC8(v7);
    return 0LL;
  }
  else
  {
    sub_1800102C4(
      retaddr,
      348LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v3);
    sub_18000F938(&v9);
    if ( v7 )
      sub_180010EC8(v7);
    return v4;
  }
}
