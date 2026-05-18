/*
 * XREFs of sub_180043D5C @ 0x180043D5C
 * Callers:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_180043974 @ 0x180043974 (sub_180043974.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043D5C(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = a1;
  v9 = a2;
  sub_18001D260(a1, a2);
  *(_DWORD *)(v4 + 32) = 0;
  v7[0] = 0;
  sub_180043974((_QWORD *)(v4 + 40), v5, v7);
  sub_1800129D0(a2);
  return a1;
}
