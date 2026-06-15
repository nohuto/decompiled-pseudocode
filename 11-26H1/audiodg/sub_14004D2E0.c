/*
 * XREFs of sub_14004D2E0 @ 0x14004D2E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     _o___std_exception_destroy @ 0x14004A522 (_o___std_exception_destroy.c)
 */

_QWORD *__fastcall sub_14004D2E0(_QWORD *a1, char a2)
{
  *a1 = &std::exception::`vftable';
  o___std_exception_destroy();
  if ( (a2 & 1) != 0 )
    j_j__o_free((__int64)a1);
  return a1;
}
