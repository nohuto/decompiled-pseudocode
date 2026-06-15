/*
 * XREFs of sub_14004591C @ 0x14004591C
 * Callers:
 *     sub_1400457B8 @ 0x1400457B8 (sub_1400457B8.c)
 *     sub_1400458C4 @ 0x1400458C4 (sub_1400458C4.c)
 *     sub_14004E9D4 @ 0x14004E9D4 (sub_14004E9D4.c)
 *     sub_140050D0C @ 0x140050D0C (sub_140050D0C.c)
 *     sub_1400517C0 @ 0x1400517C0 (sub_1400517C0.c)
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 *     sub_1400934A0 @ 0x1400934A0 (sub_1400934A0.c)
 *     sub_140093E30 @ 0x140093E30 (sub_140093E30.c)
 * Callees:
 *     sub_140045948 @ 0x140045948 (sub_140045948.c)
 */

__int64 __fastcall sub_14004591C(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  sub_140045948(a1, v4);
  return a1;
}
