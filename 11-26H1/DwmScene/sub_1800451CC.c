/*
 * XREFs of sub_1800451CC @ 0x1800451CC
 * Callers:
 *     sub_1800777B0 @ 0x1800777B0 (sub_1800777B0.c)
 *     sub_1800793B0 @ 0x1800793B0 (sub_1800793B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007D058 @ 0x18007D058 (sub_18007D058.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_1800451CC(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // r10
  __int64 result; // rax
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v30[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v31[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v38[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v39[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v40[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v41[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v42[64]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v43[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v44[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v45[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v46[64]; // [rsp+310h] [rbp+210h] BYREF

  v36 = a2;
  sub_18004DE2C(a1, &v27, 0LL);
  v4 = sub_1800181BC(v30, (__int64)&unk_1801CC078);
  sub_180043A88((__int64)v37, (__int64)v4);
  v5 = sub_1800181BC(v31, (__int64)&unk_1801CC098);
  sub_180043A88((__int64)v38, (__int64)v5);
  v6 = sub_1800181BC(v30, (__int64)&unk_1801CC0B8);
  sub_180043A88((__int64)v39, (__int64)v6);
  v7 = sub_1800181BC(v31, (__int64)&unk_1801CC0D8);
  sub_180043A88((__int64)v40, (__int64)v7);
  v8 = sub_1800181BC(v30, (__int64)&unk_1801CC0F8);
  sub_180043A88((__int64)v41, (__int64)v8);
  sub_18007BDCC(v27, v37, 5LL, 0LL);
  v9 = sub_18007C6B8(v27, &unk_1801CC078);
  v32 = xmmword_1800FA780;
  v33 = xmmword_1800FA790;
  v34 = xmmword_1800FA7A0;
  v35 = xmmword_1800FA7B0;
  sub_18007D058(v27, v9, &v32);
  v10 = sub_18007C6B8(v27, &unk_1801CC098);
  v32 = xmmword_1800FA780;
  v33 = xmmword_1800FA790;
  v34 = xmmword_1800FA7A0;
  v35 = xmmword_1800FA7B0;
  sub_18007D058(v27, v10, &v32);
  sub_18007C50C(v27);
  v11 = sub_180012C40(&v29, &v27);
  sub_18005E244(v12, v11);
  sub_18000BFA4((__int64)v37, 64LL, 5LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v28 )
    sub_180010EC8(v28);
  sub_18004DE2C(a1, &v27, 9LL);
  sub_18007B9FC(v27, &unk_1801CC298, 7LL, 3LL);
  v30[0] = 0LL;
  v13 = sub_1800181BC(v31, (__int64)&unk_1801CC118);
  sub_180043B50((__int64)v37, (__int64)v13);
  v30[0] = 0LL;
  v14 = sub_1800181BC(&v32, (__int64)&unk_1801CC138);
  sub_180043B50((__int64)v38, (__int64)v14);
  v30[0] = 0LL;
  v15 = sub_1800181BC(v31, (__int64)&unk_1801CC158);
  sub_180043B50((__int64)v39, (__int64)v15);
  v30[0] = 0LL;
  v16 = sub_1800181BC(&v32, (__int64)&unk_1801CC178);
  sub_180043B50((__int64)v40, (__int64)v16);
  v30[0] = 0LL;
  v17 = sub_1800181BC(v31, (__int64)&unk_1801CC198);
  sub_180043B50((__int64)v41, (__int64)v17);
  v30[0] = 0LL;
  v18 = sub_1800181BC(&v32, (__int64)&unk_1801CC1B8);
  sub_180043B50((__int64)v42, (__int64)v18);
  v30[0] = 0LL;
  v19 = sub_1800181BC(v31, (__int64)&unk_1801CC1D8);
  sub_180043B50((__int64)v43, (__int64)v19);
  v30[0] = 0LL;
  v20 = sub_1800181BC(&v32, (__int64)&unk_1801CC1F8);
  sub_180043B50((__int64)v44, (__int64)v20);
  v30[0] = 0LL;
  v21 = sub_1800181BC(v31, (__int64)&unk_1801CC218);
  sub_180043B50((__int64)v45, (__int64)v21);
  v30[0] = 0LL;
  v22 = sub_1800181BC(&v32, (__int64)&unk_1801CC238);
  sub_180043B50((__int64)v46, (__int64)v22);
  sub_18007BDCC(v27, v37, 10LL, 0LL);
  sub_18007B9FC(v27, &unk_1801CC2B8, 5LL, 3LL);
  sub_18007B9FC(v27, &unk_1801CC2D8, 5LL, 3LL);
  sub_18007B9FC(v27, &unk_1801CC2F8, 5LL, 3LL);
  sub_18007B9FC(v27, &unk_1801CC258, 5LL, 3LL);
  sub_18007B9FC(v27, &unk_1801CC278, 5LL, 3LL);
  sub_18007C50C(v27);
  v23 = sub_180012C40(v30, &v27);
  sub_18005E244(v24, v23);
  result = sub_18000BFA4((__int64)v37, 64LL, 10LL, (void (__fastcall *)(__int64))sub_180043DE0);
  if ( v28 )
    result = sub_180010EC8(v28);
  v26 = *(_QWORD *)(a2 + 8);
  if ( v26 )
    return sub_180010EC8(v26);
  return result;
}
