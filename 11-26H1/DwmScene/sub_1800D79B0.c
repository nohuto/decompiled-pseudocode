/*
 * XREFs of sub_1800D79B0 @ 0x1800D79B0
 * Callers:
 *     sub_1800D668C @ 0x1800D668C (sub_1800D668C.c)
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 */

char __fastcall sub_1800D79B0(unsigned int a1)
{
  if ( a1 <= 0x4000000 && a1 )
    return 1;
  sub_18001DCFC(&qword_1801BD648, 3);
  return 0;
}
