/*
 * XREFs of sub_180043CD0 @ 0x180043CD0
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_1800439F0 @ 0x1800439F0 (sub_1800439F0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043CD0(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  float v9; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+24h] [rbp-44h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-38h] BYREF

  v11[2] = a1;
  v11[4] = a2;
  sub_18001D260(a1, a2);
  *(_DWORD *)(v6 + 32) = 2;
  v9 = a4;
  v11[0] = &v9;
  v11[1] = &v10;
  sub_1800439F0((__int64 *)(v6 + 40), (__int64)v11, v7);
  sub_1800129D0(a2);
  return a1;
}
