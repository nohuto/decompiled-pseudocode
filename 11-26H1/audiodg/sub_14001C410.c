/*
 * XREFs of sub_14001C410 @ 0x14001C410
 * Callers:
 *     sub_14001C3EC @ 0x14001C3EC (sub_14001C3EC.c)
 * Callees:
 *     sub_14001C434 @ 0x14001C434 (sub_14001C434.c)
 */

_QWORD *sub_14001C410()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  sub_14001C434();
  result = v0;
  *v0 = &off_1400B8F38;
  return result;
}
