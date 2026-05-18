/*
 * XREFs of sub_180092160 @ 0x180092160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180090114 @ 0x180090114 (sub_180090114.c)
 */

// Hidden C++ exception states: #wind=12
__int64 *__fastcall sub_180092160(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _BYTE *v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v20[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v21[4]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v22[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v23[4]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v24[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v25[4]; // [rsp+128h] [rbp+20h] BYREF
  _QWORD v26[4]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v27[4]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v28[4]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v29[64]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v30[64]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v31[64]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v32[64]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v33[64]; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v34[64]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v35[64]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v36[64]; // [rsp+368h] [rbp+260h] BYREF
  _BYTE v37[64]; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE v38[64]; // [rsp+3E8h] [rbp+2E0h] BYREF
  _BYTE v39[64]; // [rsp+428h] [rbp+320h] BYREF
  __int64 v40; // [rsp+468h] [rbp+360h] BYREF

  v17[1] = (__int64)a2;
  LODWORD(v16) = 0;
  v3 = sub_1800181BC(v18, (__int64)&unk_1801CBE58);
  sub_180043A88((__int64)v29, (__int64)v3);
  v4 = sub_1800181BC(v19, (__int64)&unk_1801CBD98);
  sub_180043A88((__int64)v30, (__int64)v4);
  v5 = sub_1800181BC(v20, (__int64)&unk_1801CBE98);
  sub_180043A88((__int64)v31, (__int64)v5);
  v6 = sub_1800181BC(v21, (__int64)&unk_1801CBDB8);
  sub_180043A88((__int64)v32, (__int64)v6);
  v7 = sub_1800181BC(v22, (__int64)&unk_1801CBE78);
  sub_180043A88((__int64)v33, (__int64)v7);
  v8 = sub_1800181BC(v23, (__int64)&unk_1801CBDF8);
  sub_180043A88((__int64)v34, (__int64)v8);
  v9 = sub_1800181BC(v24, (__int64)&unk_1801CBEB8);
  sub_180043A88((__int64)v35, (__int64)v9);
  v10 = sub_1800181BC(v25, (__int64)&unk_1801CBE38);
  sub_180043A88((__int64)v36, (__int64)v10);
  v11 = sub_1800181BC(v26, (__int64)&unk_1801CBEF8);
  sub_180043A88((__int64)v37, (__int64)v11);
  v12 = sub_1800181BC(v27, (__int64)&unk_1801CBE18);
  sub_180043A88((__int64)v38, (__int64)v12);
  v13 = sub_1800181BC(v28, (__int64)&unk_1801CBF98);
  sub_180043A88((__int64)v39, (__int64)v13);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v17[0] = (__int64)&v40;
  v15 = v29;
  sub_180090114(a2, 0xBuLL, (__int64 *)&v15, v17);
  LODWORD(v16) = 1;
  sub_18000BFA4((__int64)v29, 64LL, 11LL, (void (__fastcall *)(__int64))sub_180043DE0);
  return a2;
}
