/*
 * XREFs of sub_14000589C @ 0x14000589C
 * Callers:
 *     sub_140005860 @ 0x140005860 (sub_140005860.c)
 * Callees:
 *     sub_140006AD0 @ 0x140006AD0 (sub_140006AD0.c)
 */

__int64 __fastcall sub_14000589C(_QWORD *a1)
{
  *a1 = off_1400B8158;
  if ( a1[4] )
    sub_140006AD0();
  a1[4] = 0LL;
  return sub_1400058DC(a1);
}
