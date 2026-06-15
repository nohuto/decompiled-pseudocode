/*
 * XREFs of sub_140053070 @ 0x140053070
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005F388 @ 0x14005F388 (sub_14005F388.c)
 */

__int64 __fastcall sub_140053070(__int64 a1, char a2)
{
  sub_14005F388();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1);
  return a1;
}
