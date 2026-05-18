/*
 * XREFs of sub_18002E290 @ 0x18002E290
 * Callers:
 *     sub_180031750 @ 0x180031750 (sub_180031750.c)
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 *     sub_180075A38 @ 0x180075A38 (sub_180075A38.c)
 *     sub_180075AE0 @ 0x180075AE0 (sub_180075AE0.c)
 * Callees:
 *     sub_18002E2C0 @ 0x18002E2C0 (sub_18002E2C0.c)
 */

__int64 __fastcall sub_18002E290(void **a1, __int64 a2)
{
  sub_18002E2C0(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x60uLL);
}
