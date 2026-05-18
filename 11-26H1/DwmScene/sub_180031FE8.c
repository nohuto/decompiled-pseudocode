/*
 * XREFs of sub_180031FE8 @ 0x180031FE8
 * Callers:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 * Callees:
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 */

__int64 __fastcall sub_180031FE8(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18002F750(a1, (__int64)v3, a2) + 64LL;
}
