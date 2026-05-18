/*
 * XREFs of sub_1800D276C @ 0x1800D276C
 * Callers:
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D276C(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = sub_180011790(0xC0uLL);
  return a1;
}
