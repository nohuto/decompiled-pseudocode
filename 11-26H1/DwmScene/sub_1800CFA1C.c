/*
 * XREFs of sub_1800CFA1C @ 0x1800CFA1C
 * Callers:
 *     sub_1800CFB9C @ 0x1800CFB9C (sub_1800CFB9C.c)
 *     sub_1800CFBEC @ 0x1800CFBEC (sub_1800CFBEC.c)
 * Callees:
 *     sub_1800CFA4C @ 0x1800CFA4C (sub_1800CFA4C.c)
 */

__int64 __fastcall sub_1800CFA1C(void **a1, __int64 a2)
{
  sub_1800CFA4C(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x30uLL);
}
