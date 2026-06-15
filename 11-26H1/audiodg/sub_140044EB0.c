/*
 * XREFs of sub_140044EB0 @ 0x140044EB0
 * Callers:
 *     <none>
 * Callees:
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 *     sub_140044EFC @ 0x140044EFC (sub_140044EFC.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 */

__int64 __fastcall sub_140044EB0(__int64 a1, char a2)
{
  sub_140044EFC();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1();
    else
      sub_140044F74(a1);
  }
  return a1;
}
