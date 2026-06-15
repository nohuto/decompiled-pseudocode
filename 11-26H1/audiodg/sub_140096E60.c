/*
 * XREFs of sub_140096E60 @ 0x140096E60
 * Callers:
 *     <none>
 * Callees:
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 *     sub_1400965F0 @ 0x1400965F0 (sub_1400965F0.c)
 */

__int64 __fastcall sub_140096E60(__int64 a1, char a2)
{
  sub_1400965F0(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1();
    else
      sub_140044F74(a1);
  }
  return a1;
}
