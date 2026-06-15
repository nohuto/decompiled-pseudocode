/*
 * XREFs of sub_14001CF60 @ 0x14001CF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001CF9C @ 0x14001CF9C (sub_14001CF9C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 */

__int64 __fastcall sub_14001CF60(__int64 a1, char a2)
{
  sub_14001CF9C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 104LL);
  return a1;
}
