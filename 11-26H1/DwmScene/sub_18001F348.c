/*
 * XREFs of sub_18001F348 @ 0x18001F348
 * Callers:
 *     sub_18001F16C @ 0x18001F16C (sub_18001F16C.c)
 *     sub_18001F524 @ 0x18001F524 (sub_18001F524.c)
 *     sub_18002D270 @ 0x18002D270 (sub_18002D270.c)
 *     sub_1800B95E8 @ 0x1800B95E8 (sub_1800B95E8.c)
 *     sub_1800D0740 @ 0x1800D0740 (sub_1800D0740.c)
 *     sub_1800D25EC @ 0x1800D25EC (sub_1800D25EC.c)
 *     sub_1800D32E0 @ 0x1800D32E0 (sub_1800D32E0.c)
 * Callees:
 *     sub_18001F8D4 @ 0x18001F8D4 (sub_18001F8D4.c)
 */

__int64 __fastcall sub_18001F348(__int64 a1)
{
  __int64 v1; // rcx

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001F8D4();
  return v1;
}
