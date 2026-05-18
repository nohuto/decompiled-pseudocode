/*
 * XREFs of sub_180063580 @ 0x180063580
 * Callers:
 *     sub_18005EDBC @ 0x18005EDBC (sub_18005EDBC.c)
 *     sub_18005EEF8 @ 0x18005EEF8 (sub_18005EEF8.c)
 *     sub_18005F034 @ 0x18005F034 (sub_18005F034.c)
 *     sub_18005F170 @ 0x18005F170 (sub_18005F170.c)
 *     sub_18005F2AC @ 0x18005F2AC (sub_18005F2AC.c)
 *     sub_18005F3E8 @ 0x18005F3E8 (sub_18005F3E8.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_18004016C @ 0x18004016C (sub_18004016C.c)
 *     sub_180040394 @ 0x180040394 (sub_180040394.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004048C @ 0x18004048C (sub_18004048C.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_180063580(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v20[4]; // [rsp+28h] [rbp-81h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h] BYREF
  __int64 v22; // [rsp+50h] [rbp-59h]
  _QWORD *v23; // [rsp+58h] [rbp-51h]
  _QWORD v24[4]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v26[4]; // [rsp+A0h] [rbp-9h] BYREF

  v20[3] = a3;
  v23 = a4;
  sub_180029E54(a1 + 16);
  v8 = sub_180012C40(v24, a4);
  v9 = sub_180012C40(v20, v8);
  v10 = sub_18004048C(a1, &v21, v9);
  sub_180040394(*v10, v26);
  if ( v22 )
    sub_180010EC8(v22);
  v11 = v8[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = *a3;
  v13 = *(_QWORD *)(*a4 + 368LL);
  v14 = sub_180013440(v25, (__int64)v26);
  v20[0] = v14;
  v15 = sub_180013440(v24, (__int64)v14);
  v16 = sub_1800403B8(v12, &v21, (__int64)v15);
  sub_18004016C(v12, a2, v16, v13);
  sub_180014244((__int64)v14);
  sub_180014244((__int64)v26);
  v17 = a3[1];
  if ( v17 )
    sub_180010EC8(v17);
  v18 = a4[1];
  if ( v18 )
    sub_180010EC8(v18);
  return a2;
}
