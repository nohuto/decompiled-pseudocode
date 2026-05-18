/*
 * XREFs of sub_180015650 @ 0x180015650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180040AAC @ 0x180040AAC (sub_180040AAC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180015650(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  _BYTE v15[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v16[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    sub_180012C40(&v9, (_QWORD *)(v2 + 32));
    v3 = *(_QWORD *)sub_18001367C(v9, &v13) + 16LL;
    sub_180029C50(v3, v15);
    if ( v14 )
      sub_180010EC8(v14);
    sub_180014E04(v9, &v11);
    v4 = a1[1];
    if ( v4 )
    {
      v5 = v11;
      *(_OWORD *)(v11 + 88) = *(_OWORD *)(v4 + 32);
      *(_QWORD *)(v5 + 104) = *(_QWORD *)(v4 + 48);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v6 = *(_QWORD *)sub_18001367C(v9, &v13);
    v7 = sub_180013440(v16, (__int64)&unk_1801C9038);
    sub_180040AAC(v6, v7);
    if ( v14 )
      sub_180010EC8(v14);
    if ( v12 )
      sub_180010EC8(v12);
    sub_180011E54((__int64)v15);
    if ( v10 )
      sub_180010EC8(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_1800102C4(
      retaddr,
      118LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
