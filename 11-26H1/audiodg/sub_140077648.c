/*
 * XREFs of sub_140077648 @ 0x140077648
 * Callers:
 *     sub_140077754 @ 0x140077754 (sub_140077754.c)
 * Callees:
 *     sub_140077604 @ 0x140077604 (sub_140077604.c)
 */

__int64 sub_140077648()
{
  __int64 v0; // r10
  __int64 result; // rax

  sub_140077604();
  result = v0;
  *(_QWORD *)(v0 + 32) = 1LL;
  return result;
}
