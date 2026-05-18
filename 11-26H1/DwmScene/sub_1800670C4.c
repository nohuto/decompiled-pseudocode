/*
 * XREFs of sub_1800670C4 @ 0x1800670C4
 * Callers:
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     _o_powf @ 0x18000CE88 (_o_powf.c)
 */

double __fastcall sub_1800670C4(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_18007ED34(*a4, a5);
}
