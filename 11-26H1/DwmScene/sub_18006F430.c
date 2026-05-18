/*
 * XREFs of sub_18006F430 @ 0x18006F430
 * Callers:
 *     sub_1800903A4 @ 0x1800903A4 (sub_1800903A4.c)
 *     sub_18009344C @ 0x18009344C (sub_18009344C.c)
 *     sub_1800936BC @ 0x1800936BC (sub_1800936BC.c)
 *     sub_1800937F0 @ 0x1800937F0 (sub_1800937F0.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 __fastcall sub_18006F430(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // r8

  v1 = sub_1800148EC(a1);
  return sub_18001F898(v2, v1, v3);
}
