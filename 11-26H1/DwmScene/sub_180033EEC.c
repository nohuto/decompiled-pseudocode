/*
 * XREFs of sub_180033EEC @ 0x180033EEC
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033FB8 @ 0x180033FB8 (sub_180033FB8.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 * Callees:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 */

__int64 __fastcall sub_180033EEC(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029DD4(a1 + 112, (__int64)v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  sub_180029B0C((__int64)v4);
  return (unsigned int)v2;
}
