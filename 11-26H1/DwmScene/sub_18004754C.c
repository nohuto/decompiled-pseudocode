/*
 * XREFs of sub_18004754C @ 0x18004754C
 * Callers:
 *     sub_180046C1C @ 0x180046C1C (sub_180046C1C.c)
 *     sub_180046DDC @ 0x180046DDC (sub_180046DDC.c)
 *     sub_180047120 @ 0x180047120 (sub_180047120.c)
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 * Callees:
 *     sub_18004609C @ 0x18004609C (sub_18004609C.c)
 */

_QWORD *__fastcall sub_18004754C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
  {
    sub_18004609C(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
