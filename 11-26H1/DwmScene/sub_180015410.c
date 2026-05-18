/*
 * XREFs of sub_180015410 @ 0x180015410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180014ED4 @ 0x180014ED4 (sub_180014ED4.c)
 *     sub_1800153D8 @ 0x1800153D8 (sub_1800153D8.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180015410(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  _BYTE v16[24]; // [rsp+50h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    if ( v4 )
    {
      sub_180012C40(&v10, (_QWORD *)(v4 + 32));
      v5 = *(_QWORD *)sub_18001367C(v10, &v14) + 16LL;
      sub_180029C50(v5, v16);
      if ( v15 )
        sub_180010EC8(v15);
      sub_180014ED4(v10, &v12);
      if ( a2 )
        v6 = a2 + 2;
      else
        v6 = (_QWORD *)(qword_1801C8518 + 96);
      v7 = sub_180012C40(&v14, v6);
      sub_1800153D8(v12, v7);
      if ( (_QWORD *)a1[1] != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
        v8 = a1[1];
        a1[1] = a2;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v13 )
        sub_180010EC8(v13);
      sub_180011E54((__int64)v16);
      if ( v11 )
        sub_180010EC8(v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      64LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
