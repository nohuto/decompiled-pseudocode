/*
 * XREFs of sub_1800102A4 @ 0x1800102A4
 * Callers:
 *     sub_18000F5EC @ 0x18000F5EC (sub_18000F5EC.c)
 *     sub_180010B1C @ 0x180010B1C (sub_180010B1C.c)
 * Callees:
 *     sub_18000DB44 @ 0x18000DB44 (sub_18000DB44.c)
 */

__int64 __fastcall sub_1800102A4(int a1, int a2, __int64 a3, int a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return sub_18000DB44(a1, a2, a3, a4, v5, retaddr);
}
