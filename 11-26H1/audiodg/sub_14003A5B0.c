/*
 * XREFs of sub_14003A5B0 @ 0x14003A5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14003A5EC @ 0x14003A5EC (sub_14003A5EC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14003A5B0(__int64 a1, char a2)
{
  sub_14003A5EC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 224LL);
  return a1;
}
