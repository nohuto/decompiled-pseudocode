/*
 * XREFs of sub_140056250 @ 0x140056250
 * Callers:
 *     <none>
 * Callees:
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 *     sub_140056088 @ 0x140056088 (sub_140056088.c)
 */

__int64 __fastcall sub_140056250(__int64 a1, char a2)
{
  sub_140056088(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1();
    else
      sub_140044F74(a1);
  }
  return a1;
}
