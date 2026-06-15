/*
 * XREFs of sub_14007753C @ 0x14007753C
 * Callers:
 *     sub_140077BE4 @ 0x140077BE4 (sub_140077BE4.c)
 * Callees:
 *     sub_140077560 @ 0x140077560 (sub_140077560.c)
 */

_QWORD *sub_14007753C()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  sub_140077560();
  result = v0;
  *v0 = off_1400BDAE0;
  return result;
}
