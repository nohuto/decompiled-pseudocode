/*
 * XREFs of sub_180019170 @ 0x180019170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_1800102C4 @ 0x1800102C4 (sub_1800102C4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_18001759C @ 0x18001759C (sub_18001759C.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_1800537DC @ 0x1800537DC (sub_1800537DC.c)
 *     sub_1800C3084 @ 0x1800C3084 (sub_1800C3084.c)
 */

__int64 __fastcall sub_180019170(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h]
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  __int64 *v24; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+40h] BYREF

  sub_180016FD4(*(_QWORD *)(a1 + 56), &v19);
  v8 = (__int64 *)sub_180033E4C(*(_QWORD *)(a1 + 56), &v17, 1LL);
  sub_180016BD8(*v8, &v21);
  if ( v18 )
    sub_180010EC8(v18);
  v9 = sub_180012C40(&v15, &v21);
  sub_18001818C(&v17, v9);
  v26 = a2;
  sub_180012440(&v26);
  v25 = a3;
  sub_180012440(&v25);
  v14 = a3;
  sub_180012440(&v14);
  v15 = a2;
  sub_180012440(&v15);
  sub_1800C3084(v17, &v15, &v14, 1LL);
  sub_180012C40(&v15, &v17);
  sub_1800537DC(v10, &v15, 1LL);
  if ( v16 )
    sub_180010EC8(v16);
  v24 = 0LL;
  sub_18000F938((__int64 *)&v24);
  v11 = sub_18001759C(&v24, &v19);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a4 = v24;
    v24 = 0LL;
    sub_18000F938((__int64 *)&v24);
    sub_18000F938(&v25);
    sub_18000F938(&v26);
    if ( v18 )
      sub_180010EC8(v18);
    if ( v22 )
      sub_180010EC8(v22);
    if ( v20 )
      sub_180010EC8(v20);
    return 0LL;
  }
  else
  {
    sub_1800102C4(
      retaddr,
      386LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v11);
    sub_18000F938((__int64 *)&v24);
    sub_18000F938(&v25);
    sub_18000F938(&v26);
    if ( v18 )
      sub_180010EC8(v18);
    if ( v22 )
      sub_180010EC8(v22);
    if ( v20 )
      sub_180010EC8(v20);
    return v12;
  }
}
