/*
 * XREFs of sub_14002819C @ 0x14002819C
 * Callers:
 *     sub_140032D48 @ 0x140032D48 (sub_140032D48.c)
 * Callees:
 *     sub_1400285F0 @ 0x1400285F0 (sub_1400285F0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14002819C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6, __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[9] = 4LL;
  v8[7] = 4LL;
  v8[5] = 16LL;
  v8[4] = *a5;
  return sub_1400285F0(&dword_1400E7460, a2, 0LL, 0LL, 5, v8);
}
