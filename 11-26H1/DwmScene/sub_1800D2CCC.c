/*
 * XREFs of sub_1800D2CCC @ 0x1800D2CCC
 * Callers:
 *     sub_1800D09C0 @ 0x1800D09C0 (sub_1800D09C0.c)
 *     sub_1800D0C58 @ 0x1800D0C58 (sub_1800D0C58.c)
 *     sub_1800D0F08 @ 0x1800D0F08 (sub_1800D0F08.c)
 *     sub_1800D1280 @ 0x1800D1280 (sub_1800D1280.c)
 * Callees:
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 */

__int64 __fastcall sub_1800D2CCC(_QWORD *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_1800D2300(a1, (__int64)v3, a2) + 48LL;
}
