/*
 * XREFs of sub_180025040 @ 0x180025040
 * Callers:
 *     sub_180024D88 @ 0x180024D88 (sub_180024D88.c)
 *     sub_180076260 @ 0x180076260 (sub_180076260.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

unsigned __int64 __fastcall sub_180025040(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    sub_180012970();
  return a1 << 6;
}
