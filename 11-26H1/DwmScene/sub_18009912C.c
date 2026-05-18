/*
 * XREFs of sub_18009912C @ 0x18009912C
 * Callers:
 *     sub_180099158 @ 0x180099158 (sub_180099158.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009912C(_QWORD *a1)
{
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] >> 1))) + 8 * (a1[3] & 1LL);
}
