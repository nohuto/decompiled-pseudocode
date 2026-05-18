/*
 * XREFs of sub_1800D2CA8 @ 0x1800D2CA8
 * Callers:
 *     sub_1800D151C @ 0x1800D151C (sub_1800D151C.c)
 *     sub_1800D16C4 @ 0x1800D16C4 (sub_1800D16C4.c)
 *     sub_1800D1870 @ 0x1800D1870 (sub_1800D1870.c)
 *     sub_1800D1A4C @ 0x1800D1A4C (sub_1800D1A4C.c)
 *     sub_1800D31E0 @ 0x1800D31E0 (sub_1800D31E0.c)
 *     sub_1800D3460 @ 0x1800D3460 (sub_1800D3460.c)
 * Callees:
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 */

__int64 __fastcall sub_1800D2CA8(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800D2404(a1, (__int64)v3, a2) + 64LL;
}
