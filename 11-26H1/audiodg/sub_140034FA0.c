/*
 * XREFs of sub_140034FA0 @ 0x140034FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140034FDC @ 0x140034FDC (sub_140034FDC.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_140034FA0(__int64 a1, char a2)
{
  sub_140034FDC();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 40LL);
  return a1;
}
