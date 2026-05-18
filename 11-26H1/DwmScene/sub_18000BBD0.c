/*
 * XREFs of sub_18000BBD0 @ 0x18000BBD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BBA4 @ 0x18000BBA4 (sub_18000BBA4.c)
 *     sub_18000BBB4 @ 0x18000BBB4 (sub_18000BBB4.c)
 */

__int64 sub_18000BBD0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18000BBA4();
  *v0 |= 0x18uLL;
  v1 = sub_18000BBB4();
  *v1 |= 4uLL;
  return 0LL;
}
