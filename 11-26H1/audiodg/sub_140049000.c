/*
 * XREFs of sub_140049000 @ 0x140049000
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     sub_140048FE4 @ 0x140048FE4 (sub_140048FE4.c)
 */

__int64 sub_140049000()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_140048FD4();
  *v0 |= 0x18uLL;
  v1 = sub_140048FE4();
  *v1 |= 4uLL;
  return 0LL;
}
