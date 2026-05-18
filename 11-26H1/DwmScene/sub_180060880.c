/*
 * XREFs of sub_180060880 @ 0x180060880
 * Callers:
 *     sub_18005FFB4 @ 0x18005FFB4 (sub_18005FFB4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180060880(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = sub_180011790(0x38uLL);
  return a1;
}
