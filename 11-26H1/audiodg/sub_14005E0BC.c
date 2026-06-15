/*
 * XREFs of sub_14005E0BC @ 0x14005E0BC
 * Callers:
 *     sub_14005E450 @ 0x14005E450 (sub_14005E450.c)
 *     sub_14005ED10 @ 0x14005ED10 (sub_14005ED10.c)
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_14005DE60 @ 0x14005DE60 (sub_14005DE60.c)
 */

_QWORD *__fastcall sub_14005E0BC(_QWORD *a1)
{
  sub_14005DE60(a1);
  j_j__o_free((__int64)a1);
  return a1;
}
