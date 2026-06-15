/*
 * XREFs of sub_14005089C @ 0x14005089C
 * Callers:
 *     sub_1400509F0 @ 0x1400509F0 (sub_1400509F0.c)
 * Callees:
 *     sub_14004F968 @ 0x14004F968 (sub_14004F968.c)
 *     sub_140050874 @ 0x140050874 (sub_140050874.c)
 */

__int64 __fastcall sub_14005089C(_QWORD *a1)
{
  *a1 = off_1400BB7D8;
  sub_14004F968(a1 + 1, 0LL);
  sub_140050874((__int64)(a1 + 2));
  *a1 = off_1400BB328;
  return sub_14004CE84(a1 + 1);
}
