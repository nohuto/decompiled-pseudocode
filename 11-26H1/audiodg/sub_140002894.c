/*
 * XREFs of sub_140002894 @ 0x140002894
 * Callers:
 *     sub_1400A87A0 @ 0x1400A87A0 (sub_1400A87A0.c)
 *     sub_1400A89D0 @ 0x1400A89D0 (sub_1400A89D0.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140002894(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[9] = 1LL;
  v8[7] = 1LL;
  v8[5] = 16LL;
  v8[4] = *a5;
  return sub_1400285F0(&dword_1400E7460, a2, a3, 0LL, 5, v8);
}
