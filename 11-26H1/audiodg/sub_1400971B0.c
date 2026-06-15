/*
 * XREFs of sub_1400971B0 @ 0x1400971B0
 * Callers:
 *     <none>
 * Callees:
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 *     sub_140096C58 @ 0x140096C58 (sub_140096C58.c)
 */

_QWORD *__fastcall sub_1400971B0(_QWORD *a1, char a2)
{
  sub_140096C58(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1();
    else
      sub_140044F74((__int64)a1);
  }
  return a1;
}
