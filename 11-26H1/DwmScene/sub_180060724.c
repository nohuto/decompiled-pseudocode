/*
 * XREFs of sub_180060724 @ 0x180060724
 * Callers:
 *     sub_1800645C0 @ 0x1800645C0 (sub_1800645C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_180039E8C @ 0x180039E8C (sub_180039E8C.c)
 *     sub_18003A0B4 @ 0x18003A0B4 (sub_18003A0B4.c)
 *     sub_18003A8C8 @ 0x18003A8C8 (sub_18003A8C8.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

void __fastcall sub_180060724(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5[514]; // [rsp+30h] [rbp-1028h] BYREF

  v4 = ((char *)a2 - (char *)a1) >> 4;
  if ( v4 > 32 )
  {
    sub_1800391E4(v5, v4 - v4 / 2);
    sub_18003A0B4(a1, a2, v4, v5[0], v5[1], (unsigned __int8 (__fastcall *)(__int64, unsigned __int64))sub_180062370);
    sub_18003A8C8((__int64)v5);
  }
  else
  {
    sub_180039E8C(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))sub_180062370);
  }
}
