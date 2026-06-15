/*
 * XREFs of sub_14001C490 @ 0x14001C490
 * Callers:
 *     sub_14001C46C @ 0x14001C46C (sub_14001C46C.c)
 *     sub_1400775B4 @ 0x1400775B4 (sub_1400775B4.c)
 * Callees:
 *     sub_14001C4B4 @ 0x14001C4B4 (sub_14001C4B4.c)
 */

_QWORD *sub_14001C490()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  sub_14001C4B4();
  result = v0;
  *v0 = &off_1400B8FC8;
  return result;
}
