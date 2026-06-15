/*
 * XREFs of sub_14001D270 @ 0x14001D270
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14001D2BC @ 0x14001D2BC (sub_14001D2BC.c)
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 */

__int64 __fastcall sub_14001D270(__int64 a1, char a2)
{
  sub_14001D2BC();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1(a1, 4776LL);
    else
      sub_14000E63C(a1);
  }
  return a1;
}
