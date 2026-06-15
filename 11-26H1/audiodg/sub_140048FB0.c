/*
 * XREFs of sub_140048FB0 @ 0x140048FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     sub_140048FE4 @ 0x140048FE4 (sub_140048FE4.c)
 */

__int64 sub_140048FB0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = (_QWORD *)sub_140048FD4();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_140048FE4();
  *v1 |= 2uLL;
  return 0LL;
}
