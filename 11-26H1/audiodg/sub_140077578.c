/*
 * XREFs of sub_140077578 @ 0x140077578
 * Callers:
 *     sub_1400775EC @ 0x1400775EC (sub_1400775EC.c)
 *     sub_140077604 @ 0x140077604 (sub_140077604.c)
 * Callees:
 *     sub_14007759C @ 0x14007759C (sub_14007759C.c)
 */

_QWORD *sub_140077578()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  sub_14007759C();
  result = v0;
  *v0 = off_1400BD6A8;
  return result;
}
