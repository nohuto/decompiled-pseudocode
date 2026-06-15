/*
 * XREFs of sub_14004CEE8 @ 0x14004CEE8
 * Callers:
 *     sub_14004D260 @ 0x14004D260 (sub_14004D260.c)
 * Callees:
 *     sub_14004CE38 @ 0x14004CE38 (sub_14004CE38.c)
 *     sub_14004F968 @ 0x14004F968 (sub_14004F968.c)
 */

__int64 __fastcall sub_14004CEE8(_QWORD *a1)
{
  *a1 = off_1400BB3A0;
  sub_14004F968(a1 + 1, 0LL);
  sub_14004CE38((__int64)(a1 + 2));
  *a1 = off_1400BB328;
  return sub_14004CE84(a1 + 1);
}
