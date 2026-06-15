/*
 * XREFs of sub_14002B5C0 @ 0x14002B5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14002B60C @ 0x14002B60C (sub_14002B60C.c)
 *     nullsub_1 @ 0x14003AA00 (nullsub_1.c)
 */

__int64 __fastcall sub_14002B5C0(__int64 a1, char a2)
{
  sub_14002B60C();
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      nullsub_1(a1, 832LL);
    else
      sub_14000E63C(a1);
  }
  return a1;
}
