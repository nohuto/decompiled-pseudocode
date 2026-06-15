/*
 * XREFs of sub_140049EEC @ 0x140049EEC
 * Callers:
 *     sub_1400490E0 @ 0x1400490E0 (sub_1400490E0.c)
 * Callees:
 *     sub_140048FD4 @ 0x140048FD4 (sub_140048FD4.c)
 *     sub_140048FE4 @ 0x140048FE4 (sub_140048FE4.c)
 */

_QWORD *sub_140049EEC()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_140048FD4();
  *v0 |= 0x24uLL;
  result = sub_140048FE4();
  *result |= 2uLL;
  return result;
}
