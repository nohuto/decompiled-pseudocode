/*
 * XREFs of sub_14000303C @ 0x14000303C
 * Callers:
 *     sub_140003000 @ 0x140003000 (sub_140003000.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_14000303C(_QWORD *a1)
{
  *a1 = off_1400B8000;
  if ( a1[4] )
    sub_1400031E4();
  a1[4] = 0LL;
  sub_140003238(a1 + 6);
  return sub_1400058DC(a1);
}
