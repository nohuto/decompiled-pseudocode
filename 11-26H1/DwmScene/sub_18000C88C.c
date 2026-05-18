/*
 * XREFs of sub_18000C88C @ 0x18000C88C
 * Callers:
 *     sub_18000BC58 @ 0x18000BC58 (sub_18000BC58.c)
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     sub_18000BBB4 @ 0x18000BBB4 (sub_18000BBB4.c)
 */

_QWORD *sub_18000C88C()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_18000BBA4();
  *v0 |= 0x24uLL;
  result = sub_18000BBB4();
  *result |= 2uLL;
  return result;
}
