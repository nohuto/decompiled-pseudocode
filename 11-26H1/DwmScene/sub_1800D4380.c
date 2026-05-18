/*
 * XREFs of sub_1800D4380 @ 0x1800D4380
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
 *     sub_1800D3460 @ 0x1800D3460 (sub_1800D3460.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_1800D43E8 @ 0x1800D43E8 (sub_1800D43E8.c)
 */

char __fastcall sub_1800D4380(__int64 a1, __int64 a2)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[32]; // [rsp+28h] [rbp-30h] BYREF

  sub_18001E58C((__int64)v5, a2);
  LOBYTE(a1) = *(_QWORD *)sub_1800D43E8(a1 + 64, v4, v5) != *(_QWORD *)(a1 + 72);
  sub_180014244((__int64)v5);
  return a1;
}
