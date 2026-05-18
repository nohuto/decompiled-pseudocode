/*
 * XREFs of sub_180018EE0 @ 0x180018EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800172BC @ 0x1800172BC (sub_1800172BC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 */

__int64 __fastcall sub_180018EE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h]
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h]
  _QWORD v11[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+8h]
  __int64 *v13; // [rsp+70h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 512LL);
  sub_1800181BC(v11, v3 + 18496);
  sub_18004E8E8(v3, &v9, v11);
  sub_18005D23C(v9, &v7);
  v13 = 0LL;
  sub_18000F938((__int64 *)&v13);
  v4 = sub_1800172BC(&v13, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *a2 = v13;
    v13 = 0LL;
    sub_18000F938((__int64 *)&v13);
    if ( v8 )
      sub_180010EC8(v8);
    if ( v10 )
      sub_180010EC8(v10);
    return 0LL;
  }
  else
  {
    sub_1800102C4(
      retaddr,
      335LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000F938((__int64 *)&v13);
    if ( v8 )
      sub_180010EC8(v8);
    if ( v10 )
      sub_180010EC8(v10);
    return v5;
  }
}
