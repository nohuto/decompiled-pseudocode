/*
 * XREFs of sub_180021E14 @ 0x180021E14
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180021E14(_QWORD *a1, __int64 a2)
{
  *a1 = &stdext::exception::`vftable';
  a1[1] = *(_QWORD *)(a2 + 8);
  *a1 = &stdext::bad_alloc::`vftable';
  return a1;
}
