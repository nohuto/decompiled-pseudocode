/*
 * XREFs of sub_18000BB80 @ 0x18000BB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     sub_18000BBB4 @ 0x18000BBB4 (sub_18000BBB4.c)
 */

__int64 sub_18000BB80()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_18000BBA4();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_18000BBB4();
  *v1 |= 2uLL;
  return 0LL;
}
