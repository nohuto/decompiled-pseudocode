/*
 * XREFs of sub_14000259C @ 0x14000259C
 * Callers:
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000259C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[4] = a5;
  v7[5] = 4LL;
  v7[7] = 8LL;
  return sub_1400285F0(a1, a2, 0LL, 0LL, 4, v7);
}
