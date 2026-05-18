/*
 * XREFs of sub_180017D00 @ 0x180017D00
 * Callers:
 *     sub_1800177D0 @ 0x1800177D0 (sub_1800177D0.c)
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_1800879C4 @ 0x1800879C4 (sub_1800879C4.c)
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_180017D00(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180012970();
  return 4 * a1;
}
