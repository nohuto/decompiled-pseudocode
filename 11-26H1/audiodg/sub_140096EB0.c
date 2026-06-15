/*
 * XREFs of sub_140096EB0 @ 0x140096EB0
 * Callers:
 *     <none>
 * Callees:
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 *     sub_140096678 @ 0x140096678 (sub_140096678.c)
 */

__int64 __fastcall sub_140096EB0(__int64 a1, char a2)
{
  sub_140096678(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1();
    else
      sub_140044F74(a1);
  }
  return a1;
}
