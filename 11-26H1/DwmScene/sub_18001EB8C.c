/*
 * XREFs of sub_18001EB8C @ 0x18001EB8C
 * Callers:
 *     sub_18001EA3C @ 0x18001EA3C (sub_18001EA3C.c)
 *     sub_180052968 @ 0x180052968 (sub_180052968.c)
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_1800C90E0 @ 0x1800C90E0 (sub_1800C90E0.c)
 *     sub_1800C9218 @ 0x1800C9218 (sub_1800C9218.c)
 *     sub_1800D1ECC @ 0x1800D1ECC (sub_1800D1ECC.c)
 *     sub_1800D4010 @ 0x1800D4010 (sub_1800D4010.c)
 * Callees:
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 */

__int64 __fastcall sub_18001EB8C(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    sub_180012970();
  return 32 * a1;
}
