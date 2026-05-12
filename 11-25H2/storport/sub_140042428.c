/*
 * XREFs of sub_140042428 @ 0x140042428
 * Callers:
 *     sub_1401ADB60 @ 0x1401ADB60 (sub_1401ADB60.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

_QWORD *__fastcall sub_140042428(_QWORD *a1)
{
  _QWORD *result; // rax

  memset_0(a1, 0, 0x88uLL);
  result = a1 + 15;
  a1[16] = a1 + 15;
  a1[15] = a1 + 15;
  return result;
}
