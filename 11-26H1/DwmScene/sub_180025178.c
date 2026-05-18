/*
 * XREFs of sub_180025178 @ 0x180025178
 * Callers:
 *     sub_180024D88 @ 0x180024D88 (sub_180024D88.c)
 * Callees:
 *     sub_180024D50 @ 0x180024D50 (sub_180024D50.c)
 *     sub_18002521C @ 0x18002521C (sub_18002521C.c)
 */

__int64 __fastcall sub_180025178(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    sub_18002521C(a1, a3, i);
    a3 += 64LL;
  }
  sub_180024D50(a3, a3);
  return a3;
}
