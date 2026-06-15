/*
 * XREFs of sub_140003BF4 @ 0x140003BF4
 * Callers:
 *     sub_140003B50 @ 0x140003B50 (sub_140003B50.c)
 *     sub_14006A940 @ 0x14006A940 (sub_14006A940.c)
 * Callees:
 *     sub_1400031E4 @ 0x1400031E4 (sub_1400031E4.c)
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_140003BF4(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = off_1400BA570;
  v2 = a1[4];
  if ( v2 )
    sub_1400031E4(v2);
  a1[4] = 0LL;
  sub_140003238(a1 + 6);
  return sub_1400058DC(a1);
}
