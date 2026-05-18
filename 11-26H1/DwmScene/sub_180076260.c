/*
 * XREFs of sub_180076260 @ 0x180076260
 * Callers:
 *     sub_180077E10 @ 0x180077E10 (sub_180077E10.c)
 *     sub_180090114 @ 0x180090114 (sub_180090114.c)
 * Callees:
 *     sub_180025040 @ 0x180025040 (sub_180025040.c)
 */

__int64 __fastcall sub_180076260(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax

  v2 = sub_180025040(*a2);
  return sub_180011790(v2);
}
