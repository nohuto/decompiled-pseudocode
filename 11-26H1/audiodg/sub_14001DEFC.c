/*
 * XREFs of sub_14001DEFC @ 0x14001DEFC
 * Callers:
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14001E180 @ 0x14001E180 (sub_14001E180.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004BB20 @ 0x14004BB20 (sub_14004BB20.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

__int64 __fastcall sub_14001DEFC(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  int v10; // r9d
  _BYTE v12[4096]; // [rsp+60h] [rbp-1028h] BYREF

  sub_14001DFBC(a7);
  sub_14001E180(v12);
  return sub_14004BB20(a1, a2, a3, v10);
}
