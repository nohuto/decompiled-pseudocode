/*
 * XREFs of sub_180043AC0 @ 0x180043AC0
 * Callers:
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
__int64 __fastcall sub_180043AC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int128 *v5; // r9
  __int64 v6; // r8
  _QWORD v8[5]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v8[2] = a1;
  v8[4] = a2;
  sub_18001D260(a1, a2);
  *(_DWORD *)(v4 + 32) = 6;
  v9 = *v5;
  v8[0] = &v9;
  v8[1] = &v10;
  sub_1800439F0((__int64 *)(v4 + 40), (__int64)v8, v6);
  sub_1800129D0(a2);
  return a1;
}
