/*
 * XREFs of sub_1800D0F08 @ 0x1800D0F08
 * Callers:
 *     sub_1800D0FD4 @ 0x1800D0FD4 (sub_1800D0FD4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_1800D2CCC @ 0x1800D2CCC (sub_1800D2CCC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800D0F08(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rdi
  _QWORD *v9; // [rsp+20h] [rbp-78h]
  _QWORD v10[6]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v11[32]; // [rsp+58h] [rbp-40h] BYREF

  v10[4] = a2;
  v10[5] = a3;
  v6 = sub_1800141BC(a2);
  sub_18001E58C((__int64)v11, v6);
  v7 = (_DWORD *)sub_1800D2CCC(a1 + 64, v11);
  v9 = sub_180013440(v10, a3);
  sub_180031F38((__int64)(v7 + 2), (__int64)v9);
  *v7 = 0;
  sub_180014244((__int64)v9);
  sub_180014244((__int64)v11);
  sub_180014244(a2);
  return sub_180014244(a3);
}
