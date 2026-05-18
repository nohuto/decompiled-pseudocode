/*
 * XREFs of sub_1800898E0 @ 0x1800898E0
 * Callers:
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 */

bool __fastcall sub_1800898E0(__int64 a1, __int64 a2)
{
  bool v4; // bl

  v4 = sub_18001FA3C(a1, a2) == 0;
  sub_1800129D0(a1);
  sub_1800129D0(a2);
  return v4;
}
