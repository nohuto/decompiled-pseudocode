/*
 * XREFs of sub_18003075C @ 0x18003075C
 * Callers:
 *     sub_18002DF50 @ 0x18002DF50 (sub_18002DF50.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003075C(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = sub_180011790(0x60uLL);
  return a1;
}
