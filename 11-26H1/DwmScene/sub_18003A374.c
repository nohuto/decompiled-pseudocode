/*
 * XREFs of sub_18003A374 @ 0x18003A374
 * Callers:
 *     sub_18003D1BC @ 0x18003D1BC (sub_18003D1BC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_180039E8C @ 0x180039E8C (sub_180039E8C.c)
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 *     sub_18003A8C8 @ 0x18003A8C8 (sub_18003A8C8.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18003A374(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v6[514]; // [rsp+30h] [rbp-1028h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 <= 32 )
    return sub_180039E8C(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_18007AAE0);
  sub_1800391E4(v6, v4 - v4 / 2);
  sub_18003A0B4(a1, a2, v4, v6[0], v6[1], (unsigned __int8 (__fastcall *)(__int64, unsigned __int64))sub_18007AAE0);
  return (__int64 *)sub_18003A8C8(v6);
}
