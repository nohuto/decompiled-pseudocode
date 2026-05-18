/*
 * XREFs of sub_1800D25EC @ 0x1800D25EC
 * Callers:
 *     sub_1800D2300 @ 0x1800D2300 (sub_1800D2300.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 * Callees:
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_1800D41AC @ 0x1800D41AC (sub_1800D41AC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D25EC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  sub_18001F348(a2);
  return sub_1800D41AC(v2 + 32);
}
