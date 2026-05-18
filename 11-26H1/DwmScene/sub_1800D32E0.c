/*
 * XREFs of sub_1800D32E0 @ 0x1800D32E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_18001F378 @ 0x18001F378 (sub_18001F378.c)
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D32E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  __int64 v7; // r10
  _BYTE v9[32]; // [rsp+30h] [rbp-48h] BYREF

  sub_18001F378((__int64)v9);
  sub_1800D1870(v6, v7, (__int64)v9);
  sub_18001F348(a2);
  sub_180014244((__int64)v9);
  sub_180014244(a4);
  return a2;
}
