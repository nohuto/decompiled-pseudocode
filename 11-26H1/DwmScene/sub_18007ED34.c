/*
 * XREFs of sub_18007ED34 @ 0x18007ED34
 * Callers:
 *     sub_180014420 @ 0x180014420 (sub_180014420.c)
 *     sub_180014640 @ 0x180014640 (sub_180014640.c)
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180066A5C @ 0x180066A5C (sub_180066A5C.c)
 *     sub_1800670C4 @ 0x1800670C4 (sub_1800670C4.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 *     sub_180093040 @ 0x180093040 (sub_180093040.c)
 * Callees:
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 */

__int64 __fastcall sub_18007ED34(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_18007C6F4(*(_QWORD *)(a1 + 16), a2);
  return sub_18007ED6C(a1, v3);
}
