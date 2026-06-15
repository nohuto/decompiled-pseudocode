/*
 * XREFs of sub_14006BC10 @ 0x14006BC10
 * Callers:
 *     sub_14006BD30 @ 0x14006BD30 (sub_14006BD30.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14006BC10(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  a1[1] = a2;
  *a1 = off_1400BC900;
  result = a1;
  a1[2] = 0LL;
  return result;
}
