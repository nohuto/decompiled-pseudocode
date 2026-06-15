/*
 * XREFs of sub_1400509F0 @ 0x1400509F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005089C @ 0x14005089C (sub_14005089C.c)
 */

_QWORD *__fastcall sub_1400509F0(_QWORD *a1, char a2)
{
  sub_14005089C(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
