/*
 * XREFs of sub_1800D4270 @ 0x1800D4270
 * Callers:
 *     sub_1800D0A50 @ 0x1800D0A50 (sub_1800D0A50.c)
 *     sub_1800D0CF0 @ 0x1800D0CF0 (sub_1800D0CF0.c)
 *     sub_1800D0FD4 @ 0x1800D0FD4 (sub_1800D0FD4.c)
 *     sub_1800D1314 @ 0x1800D1314 (sub_1800D1314.c)
 *     sub_1800D151C @ 0x1800D151C (sub_1800D151C.c)
 *     sub_1800D16C4 @ 0x1800D16C4 (sub_1800D16C4.c)
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 *     sub_1800D1A4C @ 0x1800D1A4C (sub_1800D1A4C.c)
 *     sub_1800D31E0 @ 0x1800D31E0 (sub_1800D31E0.c)
 *     sub_1800D3370 @ 0x1800D3370 (sub_1800D3370.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800D40A8 @ 0x1800D40A8 (sub_1800D40A8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D4270(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = a2;
  v3 = *(_QWORD *)sub_1800D40A8((_QWORD *)(a1 + 64), (__int64)v5, a2);
  sub_180014244(a2);
  return v3 + 48;
}
