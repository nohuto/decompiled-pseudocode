/*
 * XREFs of sub_18009A280 @ 0x18009A280
 * Callers:
 *     sub_180098664 @ 0x180098664 (sub_180098664.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001F4F4 @ 0x18001F4F4 (sub_18001F4F4.c)
 *     sub_180098508 @ 0x180098508 (sub_180098508.c)
 *     sub_180099990 @ 0x180099990 (sub_180099990.c)
 *     sub_180099E4C @ 0x180099E4C (sub_180099E4C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18009A280(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[32]; // [rsp+200h] [rbp+100h] BYREF

  v16[50] = a2;
  v13[2] = a3;
  sub_18001F4F4((__int64)v17, a2);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 64LL))(*a3, v17);
  sub_180012C40(&v14, (_QWORD *)(a1 + 896));
  v6 = sub_180012C40(&v15, a3);
  v9 = sub_180099E4C((__int64)v16, 1, v6, v8, v7);
  sub_180099990((__int64 *)(a1 + 880), (__int64)v13, a2, v9);
  sub_180098508(v16);
  v10 = v13[0];
  sub_180014244((__int64)v17);
  sub_1800129D0(a2);
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  return v10 + 64;
}
