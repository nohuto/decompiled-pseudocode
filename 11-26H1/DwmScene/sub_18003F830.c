/*
 * XREFs of sub_18003F830 @ 0x18003F830
 * Callers:
 *     sub_1800326D0 @ 0x1800326D0 (sub_1800326D0.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18006F270 @ 0x18006F270 (sub_18006F270.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003F830(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  _QWORD v14[5]; // [rsp+48h] [rbp-60h] BYREF

  v14[4] = a4;
  v8 = sub_180013440(v14, a4);
  sub_180040570(a1, &v12, v8);
  v9 = sub_180012C40(&v11, &v12);
  sub_18003F6D8(a1, a2, a3, v9);
  if ( v13 )
    sub_180010EC8(v13);
  sub_180014244(a4);
  return a2;
}
