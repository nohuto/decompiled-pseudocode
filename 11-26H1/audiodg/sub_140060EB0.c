/*
 * XREFs of sub_140060EB0 @ 0x140060EB0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_140060E54 @ 0x140060E54 (sub_140060E54.c)
 */

__int64 __fastcall sub_140060EB0(__int64 a1, char a2)
{
  sub_140060E54(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
