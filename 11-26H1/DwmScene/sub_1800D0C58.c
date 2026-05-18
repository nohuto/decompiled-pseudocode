/*
 * XREFs of sub_1800D0C58 @ 0x1800D0C58
 * Callers:
 *     sub_1800D0CF0 @ 0x1800D0CF0 (sub_1800D0CF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D2CCC @ 0x1800D2CCC (sub_1800D2CCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D0C58(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+28h] [rbp-40h] BYREF

  v5 = sub_1800141BC(a2);
  sub_18001E58C((__int64)v8, v5);
  v6 = sub_1800D2CCC(a1 + 64, v8);
  *(double *)(v6 + 48) = a3;
  *(_DWORD *)v6 = 2;
  sub_180014244((__int64)v8);
  return sub_180014244(a2);
}
