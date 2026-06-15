/*
 * XREFs of sub_14000EC10 @ 0x14000EC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14000EC5C @ 0x14000EC5C (sub_14000EC5C.c)
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 */

__int64 __fastcall sub_14000EC10(__int64 a1, char a2)
{
  sub_14000EC5C();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1(a1, 176LL);
    else
      sub_14000E63C(a1);
  }
  return a1;
}
