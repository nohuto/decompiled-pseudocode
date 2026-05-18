/*
 * XREFs of sub_180012F64 @ 0x180012F64
 * Callers:
 *     sub_18002DC64 @ 0x18002DC64 (sub_18002DC64.c)
 *     sub_180055B84 @ 0x180055B84 (sub_180055B84.c)
 *     sub_180077E54 @ 0x180077E54 (sub_180077E54.c)
 *     sub_180087CE4 @ 0x180087CE4 (sub_180087CE4.c)
 *     sub_18009B754 @ 0x18009B754 (sub_18009B754.c)
 * Callees:
 *     sub_180011B48 @ 0x180011B48 (sub_180011B48.c)
 */

__int64 __fastcall sub_180012F64(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180011B48(*a2);
  return sub_180011790(v2);
}
