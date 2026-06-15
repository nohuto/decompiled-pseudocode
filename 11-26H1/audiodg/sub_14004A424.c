/*
 * XREFs of sub_14004A424 @ 0x14004A424
 * Callers:
 *     sub_14004A44C @ 0x14004A44C (sub_14004A44C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14004A424(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad allocation";
  *a1 = &std::bad_alloc::`vftable';
  return a1;
}
