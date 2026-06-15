/*
 * XREFs of sub_14004BBE4 @ 0x14004BBE4
 * Callers:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004BC88 @ 0x14004BC88 (sub_14004BC88.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

__int64 __fastcall sub_14004BBE4(int a1, int a2, int a3)
{
  _BYTE v7[4112]; // [rsp+60h] [rbp-1038h] BYREF

  memset(&v7[16], 0, 0x1000uLL);
  return (unsigned int)*(_QWORD *)sub_14004BC88((unsigned int)v7, a1, a2, a3);
}
