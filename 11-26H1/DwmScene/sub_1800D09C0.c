/*
 * XREFs of sub_1800D09C0 @ 0x1800D09C0
 * Callers:
 *     sub_1800D0A50 @ 0x1800D0A50 (sub_1800D0A50.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D2CCC @ 0x1800D2CCC (sub_1800D2CCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D09C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-30h] BYREF

  v6 = sub_1800141BC(a2);
  sub_18001E58C((__int64)v9, v6);
  v7 = (_DWORD *)sub_1800D2CCC(a1 + 64, v9);
  v7[10] = a3;
  *v7 = 1;
  sub_180014244((__int64)v9);
  return sub_180014244(a2);
}
