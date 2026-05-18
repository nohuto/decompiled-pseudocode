/*
 * XREFs of sub_18008D824 @ 0x18008D824
 * Callers:
 *     sub_18008DA30 @ 0x18008DA30 (sub_18008DA30.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 *     sub_18003A8C8 @ 0x18003A8C8 (sub_18003A8C8.c)
 *     sub_18008D140 @ 0x18008D140 (sub_18008D140.c)
 *     sub_18008D42C @ 0x18008D42C (sub_18008D42C.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

void __fastcall sub_18008D824(char *a1, float *a2, char a3)
{
  __int64 v6; // rbp
  void *v7[514]; // [rsp+30h] [rbp-1028h] BYREF

  v6 = ((char *)a2 - a1) >> 4;
  if ( v6 > 32 )
  {
    sub_1800391E4(v7, v6 - v6 / 2);
    sub_18008D42C(a1, a2, v6, v7[0], (__int64)v7[1], a3);
    sub_18003A8C8((__int64)v7);
  }
  else
  {
    sub_18008D140(a1, (char *)a2);
  }
}
